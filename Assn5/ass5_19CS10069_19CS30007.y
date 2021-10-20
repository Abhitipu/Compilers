/*Declarations*/
%{
    #include <bits/stdc++.h>
    #include <sstream>
    #include "ass5_19CS10069_19CS30007_translator.h"
    extern int yylex();
    void yyerror(string s);
    extern string var_type;
    extern vector<label> label_table;
    using namespace std;
%}

%union {
    char unaryOp;       // unary operator
    int int_val;        // integer value
    char* char_val;     // char value
    char float_val;    // float value
    int num_params;     // number of parameters
    int instr_number;   // instruction number: for backpatching
    Expression* expr;   // Expression
    Statement* stat;    // Statement
    symboltype* sym_type;   // symbol type
    sym* symp;          // symp
    Array* A;           // Array type
}

%token BREAK RETURN CASE FOR WHILE GOTO SIZEOF CONTINUE IF DO SWITCH ELSE
%token FLOAT SHORT CHAR _BOOL _IMAGINARY _COMPLEX INT DOUBLE LONG VOID SIGNED AUTO UNSIGNED 
%token ENUM UNION STRUCT TYPEDEF 
%token CONST DEFAULT STATIC REGISTER RESTRICT VOLATILE EXTERN INLINE 


%token <symp> IDENTIFIER
%token <int_val> INTEGER_CONST
%token <char_val> CHAR_CONST
%token <char_val> FLOAT_CONST
%token <char_val> STRING_LITERAL

%token PLUS MINUS MULT DIVIDE ARROW INCREMENT DECREMENT RSHIFT LSHIFT LT GT LEQ GEQ EQ NEQ BITWISE_OR LOGICAL_OR BITWISE_AND LOGICAL_AND XOR BITWISE_NOT LOGICAL_NOT ELLIPSIS MODULO ASGN ENUMERATION_CONST
%token ADD_ASGN SUB_ASGN MULT_ASGN DIV_ASGN MOD_ASGN LSHIFT_ASGN RSHIFT_ASGN AND_ASGN OR_ASGN XOR_ASGN 

%start translation_unit

%right "then" ELSE

//unary operator
%type <unaryOp> unary_operator

//number of parameters
%type <num_params> argument_expression_list argument_expression_list_opt


//Expressions
%type <expr>
	expression
    constant
	primary_expression 
	multiplicative_expression
	additive_expression
	shift_expression
	relational_expression
	equality_expression
	and_expression
	exclusive_OR_expression
	inclusive_OR_expression
	logical_AND_expression
	logical_OR_expression
	conditional_expression
	assignment_expression
	expression_statement

//Statements
%type <stat>  statement
	compound_statement
	loop_statement
	selection_statement
	iteration_statement
	labeled_statement 
	jump_statement
	block_item
	block_item_list
	block_item_list_opt

//symbol type
%type <sym_type> pointer

//symbol
%type <symp> initializer
%type <symp> direct_declarator init_declarator declarator

//arr1s
%type <A> postfix_expression
	unary_expression
	cast_expression

//Auxillary non-terminals M and N
%type <instr_number> M
%type <stat> N

/*Rules*/
%%

M: %empty 
	{
		/**
		  * backpatching,stores the index of the next quad to be generated
		  * Used in various control statements
		  */
		$$ = nextinstr();
	}   
	;

F: %empty 
	{
		// rule for identifying the start of the for statement
		loop_name = "FOR";
	}   
	;

W: %empty 
	{
		// rule for identifying the start of a while loop
		loop_name = "WHILE";
	}   
	;

D: %empty 
	{
		// rule for identifyiong the start of the do while statement
		loop_name = "DO_WHILE";
	}   
	;

X: %empty 
	{
		/**
		  * change the current symbol pointer
		  * This will be used for nested block statements
		  */
		string name = ST->name+"."+loop_name+"$"+to_string(table_count); // give name for nested table
		table_count++; // increment the table count
		sym* s = ST->lookup(name); // lookup the table for new entry
		s->nested = new symtable(name);
		s->nested->parent = ST;
		s->name = name;
		s->type = new symboltype("block");
		currSymbolPtr = s;
	}   
	;

N: %empty
	{
		/** 
		  * For backpatching, which inserts a goto 
		  * and stores the index of the next goto 
		  * statement to guard against fallthrough
		  * N->nextlist = makelist(nextinstr) we have defined nextlist for Statements
		  */
		$$ = new Statement();
		$$->nextlist=makelist(nextinstr());
		emit("goto","");
	}
	;


changetable: %empty 
	{    
		parST = ST;                                                               // Used for changing to symbol table for a function
		if(currSymbolPtr->nested==NULL) 
		{
			changeTable(new symtable(""));	                                           // Function symbol table doesn't already exist	
		}
		else 
		{
			changeTable(currSymbolPtr ->nested);						               // Function symbol table already exists	
			emit("label", ST->name);
		}
	}
	;



constant:
                    INTEGER_CONST
                    { 
                        $$=new Expression();	
                        string p=convertIntToString($1);
                        $$->loc=gentemp(new symboltype("int"),p);
                        emit("=",$$->loc->name,p);
                    }
                    | FLOAT_CONST
                    {                                                                         // create new expression and store the value of the constant in a temporary
                        $$=new Expression();
                        $$->loc=gentemp(new symboltype("char"),$1);
                        emit("=",$$->loc->name,string($1));
                    }
                    | CHAR_CONST
                    {                                                                         // create new expression and store the value of the constant in a temporary
                        $$=new Expression();
                        $$->loc=gentemp(new symboltype("char"),$1);
                        emit("=",$$->loc->name,string($1));
                    }
                    ;

primary_expression:
                    IDENTIFIER
                    {
                        $$=new Expression();                                                  // create new expression and store pointer to ST entry in the location			
                        $$->loc=$1;
                        $$->type="not-boolean";
                    }
                    | constant
                    { 
                        $$ = $1; 
                    }
                    | '(' expression ')'
                    {                                                                          // simply equal to expression
                        $$=$2;
                    }
                    ;


postfix_expression:
                    primary_expression
                    {
                        $$=new Array();	
                        $$->Array=$1->loc;	
                        $$->type=$1->loc->type;	
                        $$->loc=$$->Array;
                    }
                    | postfix_expression '[' expression ']'
                    { 	
		
                        $$=new Array();
                        $$->type=$1->type->arrtype;                 // type=type of element	
                        $$->Array=$1->Array;                        // copy the base
                        $$->loc=gentemp(new symboltype("int"));     // store computed address
                        $$->atype="arr";                            //atype is arr.
                        if($1->atype=="arr") 
                        {			                               // if already arr, multiply the size of the sub-type of Array with the expression value and add
                            sym* t=gentemp(new symboltype("int"));
                            int p=computeSize($$->type);
                            string str=convertIntToString(p);
                            emit("*",t->name,$3->loc->name,str);
                            emit("+",$$->loc->name,$1->loc->name,t->name);
                        }
                        else 
                        {                        //if a 1D Array, simply calculate size
                            int p=computeSize($$->type);	
                            string str=convertIntToString(p);
                            emit("*",$$->loc->name,$3->loc->name,str);
                        }
                    }
                    | postfix_expression '(' argument_expression_list_opt ')'
                    {
                        //call the function with number of parameters from argument_expression_list_opt
                        $$=new Array();	
                        $$->Array=gentemp($1->type);
                        string str=convertIntToString($3);
                        emit("call",$$->Array->name,$1->Array->name,str);
                    }
                    | postfix_expression '.' IDENTIFIER
                    { }
                    | postfix_expression ARROW IDENTIFIER
                    { }
                    | postfix_expression INCREMENT
                    { 
                        //generate new temporary, equate it to old one and then add 1
                        $$=new Array();	
                        $$->Array=gentemp($1->Array->type);
                        emit("=",$$->Array->name,$1->Array->name);
                        emit("+",$1->Array->name,$1->Array->name,"1");
                    }
                    | postfix_expression DECREMENT
                    {
                        //generate new temporary, equate it to old one and then subtract 1
                        $$=new Array();	
                        $$->Array=gentemp($1->Array->type);
                        emit("=",$$->Array->name,$1->Array->name);
                        emit("-",$1->Array->name,$1->Array->name,"1");	
                    }
                    | '(' type_name ')' '{' initializer_list '}'
                    { }
                    | '(' type_name ')' '{' initializer_list ',' '}'     
                    { }
                    ;  

argument_expression_list:
                    assignment_expression
                    {
                        $$=1;                                      //one argument and emit param
                        emit("param",$1->loc->name);	
                    }
                    | argument_expression_list ',' assignment_expression   
                    {
                        $$=$1+1;                                  //one more argument and emit param		 
                        emit("param",$3->loc->name);
                    }
                    ;

argument_expression_list_opt:
                    argument_expression_list
                    {
                        $$=$1; // assign $$ =  $1
                    }
                    | %empty
                    { 
                        $$ = 0; // no arguements
                    }
                    ;

unary_expression:
                    postfix_expression
                    { $$=$1; /* assign $$ =  $1*/} 
                    | INCREMENT unary_expression
                    {  	
                        //simply add 1
                        emit("+",$2->Array->name,$2->Array->name,"1");		
                        $$=$2;
                    }
                    | DECREMENT unary_expression
                    {
                        //simply subtract 1
                        emit("-",$2->Array->name,$2->Array->name,"1");
                        $$=$2;
                    }
                    | unary_operator cast_expression
                    {   //if it is of this type, where unary operator is involved
                        $$=new Array();
                        switch($1)
                        {	  
                            case '&':                                                  //address of something, then generate a pointer temporary and emit the quad
                                $$->Array=gentemp(new symboltype("ptr"));
                                $$->Array->type->arrtype=$2->Array->type; 
                                emit("=&",$$->Array->name,$2->Array->name);
                                break;
                            case '*':                                                   // value of something, then generate a temporary of the corresponding type and emit the quad	
                                $$->atype="ptr";
                                $$->loc=gentemp($2->Array->type->arrtype);
                                $$->Array=$2->Array;
                                emit("=*",$$->loc->name,$2->Array->name);
                                break;
                            case '+':  
                                $$=$2;
                                break;                 //unary plus, do nothing
                            case '-':				   //unary minus, generate new temporary of the same base type and make it negative of current one
                                $$->Array=gentemp(new symboltype($2->Array->type->type));
                                emit("uminus",$$->Array->name,$2->Array->name);
                                break;
                            case '~':                   //bitwise not, generate new temporary of the same base type and make it negative of current one
                                $$->Array=gentemp(new symboltype($2->Array->type->type));
                                emit("~",$$->Array->name,$2->Array->name);
                                break;
                            case '!':				//logical not, generate new temporary of the same base type and make it negative of current one
                                $$->Array=gentemp(new symboltype($2->Array->type->type));
                                emit("!",$$->Array->name,$2->Array->name);
                                break;
                        }
                    }
                    | SIZEOF unary_expression
                    { }
                    | SIZEOF '(' type_name ')'  
                    { }
                    ;    


unary_operator: 
                    BITWISE_AND
                    { $$ = '&'; }
                    | MULT
                    { $$ = '*'; }
                    | PLUS
                    { $$ = '+'; }
                    | MINUS
                    { $$ = '-'; }
                    | BITWISE_NOT
                    { $$ = '~'; }
                    | LOGICAL_NOT
                    { $$ = '!'; }
                    ;

cast_expression:
                    unary_expression
                    { $$ = $1; /* simply assign*/ }
                    | '(' type_name ')' cast_expression
                    { 
                        $$=new Array();	
                        $$->Array=convertType($4->Array,var_type);             //generate a new symbol of the given type	
                    }
                    ;

multiplicative_expression:
                    cast_expression
                    {
                        $$ = new Expression();             //generate new expression							    
                        if($1->atype=="arr") 			   //if it is of type arr
                        {
                            $$->loc = gentemp($1->loc->type);	
                            emit("=[]", $$->loc->name, $1->Array->name, $1->loc->name);     //emit with Array right
                        }
                        else if($1->atype=="ptr")         //if it is of type ptr
                        { 
                            $$->loc = $1->loc;        //equate the locs
                        }
                        else
                        {
                            $$->loc = $1->Array;
                        }
                    }
                    | multiplicative_expression MULT cast_expression
                    { 
                        //if we have multiplication
                        if(!compareSymbolType($1->loc, $3->Array))         
                            cout<<"Type Error in Program"<< endl;	// error
                        else 								 //if types are compatible, generate new temporary and equate to the product
                        {
                            $$ = new Expression();	
                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            emit("*", $$->loc->name, $1->loc->name, $3->Array->name);
                        }
                    }
                    | multiplicative_expression DIVIDE cast_expression
                    {
                        //if we have division
                        if(!compareSymbolType($1->loc, $3->Array)){ 
                            cout << "Type Error in Program"<< endl;
                        }
                        else   
                        {
                            //if types are compatible, generate new temporary and equate to the quotient
                            $$ = new Expression();
                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            emit("/", $$->loc->name, $1->loc->name, $3->Array->name);
                        }
                    }
                    | multiplicative_expression MODULO cast_expression     
                    {
                        if(!compareSymbolType($1->loc, $3->Array)) cout << "Type Error in Program"<< endl;		
                        else 		 
                        {
                            //if types are compatible, generate new temporary and equate to the quotient
                            $$ = new Expression();
                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            emit("%", $$->loc->name, $1->loc->name, $3->Array->name);	
                        }
                    }
                    ;


additive_expression:        
                    multiplicative_expression
                    { $$=$1;/* Simple assign */ }
                    | additive_expression PLUS multiplicative_expression
                    {
                        if(!compareSymbolType($1->loc, $3->loc))
                            cout << "Type Error in Program"<< endl;
                        else    	//if types are compatible, generate new temporary and equate to the sum
                        {
                            $$ = new Expression();	
                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            emit("+", $$->loc->name, $1->loc->name, $3->loc->name);
                        }
                    }
                    | additive_expression MINUS multiplicative_expression
                    {
                        
                        if(!compareSymbolType($1->loc, $3->loc))
                            cout << "Type Error in Program"<< endl;		
                        else        //if types are compatible, generate new temporary and equate to the difference
                        {	
                            $$ = new Expression();	
                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            emit("-", $$->loc->name, $1->loc->name, $3->loc->name);
                        }
                    }
                    ;

shift_expression:
                    additive_expression
                    { $$=$1;/* Simple assign */ }
                    | shift_expression LSHIFT additive_expression
                    { 
                        if(!($3->loc->type->type == "int"))
                            cout << "Type Error in Program"<< endl; 		
                        else            //if base type is int, generate new temporary and equate to the shifted value
                        {		
                            $$ = new Expression();		
                            $$->loc = gentemp(new symboltype("int"));
                            emit("<<", $$->loc->name, $1->loc->name, $3->loc->name);		
                        }
                    }
                    | shift_expression RSHIFT additive_expression
                    { 	
                        if(!($3->loc->type->type == "int"))
                        {
                            cout << "Type Error in Program"<< endl; 		
                        }
                        else  		//if base type is int, generate new temporary and equate to the shifted value
                        {			
                            $$ = new Expression();	
                            $$->loc = gentemp(new symboltype("int"));
                            emit(">>", $$->loc->name, $1->loc->name, $3->loc->name);			
                        }
                    }
                    ;

relational_expression:
                    shift_expression
                    { $$=$1;/* Simple assign */ }
                    | relational_expression LT shift_expression
                    {
                        if(!compareSymbolType($1->loc, $3->loc)) 
                        {
                            yyerror("Type Error in Program");
                        }
                        else 
                        {      //check compatible types									
                            $$ = new Expression();
                            $$->type = "bool";                         //new type is boolean
                            $$->truelist = makelist(nextinstr());     //makelist for truelist and falselist
                            $$->falselist = makelist(nextinstr()+1);
                            emit("<", "", $1->loc->name, $3->loc->name);     //emit statement if a<b goto .. 
                            emit("goto", "");	//emit statement goto ..
                        }
                    }
                    | relational_expression GT shift_expression
                    {
                        // similar to above, check compatible types,make new lists and emit
                        if(!compareSymbolType($1->loc, $3->loc)) 
                        {
                            yyerror("Type Error in Program");
                        }
                        else 
                        {	
                            $$ = new Expression();		
                            $$->type = "bool";
                            $$->truelist = makelist(nextinstr());
                            $$->falselist = makelist(nextinstr()+1);
                            emit(">", "", $1->loc->name, $3->loc->name);
                            emit("goto", "");
                        }	
                    }
                    | relational_expression LEQ shift_expression
                    {
                        if(!compareSymbolType($1->loc, $3->loc)) 
                        {
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {			
                            $$ = new Expression();		
                            $$->type = "bool";
                            $$->truelist = makelist(nextinstr());
                            $$->falselist = makelist(nextinstr()+1);
                            emit("<=", "", $1->loc->name, $3->loc->name);
                            emit("goto", "");
                        }		
                    }
                    | relational_expression GEQ shift_expression
                    {
                        if(!compareSymbolType($1->loc, $3->loc))
                        {
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {	
                            $$ = new Expression();	
                            $$->type = "bool";
                            $$->truelist = makelist(nextinstr());
                            $$->falselist = makelist(nextinstr()+1);
                            emit(">=", "", $1->loc->name, $3->loc->name);
                            emit("goto", "");
                        }
                    }
                    ;

equality_expression:
                    relational_expression
                    { $$=$1;/* Simple assign */ }
                    | equality_expression EQ relational_expression
                    {
                        if(!compareSymbolType($1->loc, $3->loc))                //check compatible types
                        {
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {
                            convertBoolToInt($1);                  //convert bool to int		
                            convertBoolToInt($3);
                            $$ = new Expression();
                            $$->type = "bool";
                            $$->truelist = makelist(nextinstr());            //make lists for new expression
                            $$->falselist = makelist(nextinstr()+1); 
                            emit("==", "", $1->loc->name, $3->loc->name);      //emit if a==b goto ..
                            emit("goto", "");				//emit goto ..
                        }
                    }
                    | equality_expression NEQ relational_expression
                    {
                        if(!compareSymbolType($1->loc, $3->loc)) 
                        {
                            
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {			
                            convertBoolToInt($1);
                            convertBoolToInt($3);
                            $$ = new Expression();                 //result is boolean
                            $$->type = "bool";
                            $$->truelist = makelist(nextinstr());
                            $$->falselist = makelist(nextinstr()+1);
                            emit("!=", "", $1->loc->name, $3->loc->name);
                            emit("goto", "");
                        }
                    }
                    ;

and_expression:
                    equality_expression
                    { $$=$1;/* Simple assign */ }
                    | and_expression BITWISE_AND equality_expression
                    {
                        if(!compareSymbolType($1->loc, $3->loc))         //check compatible types 
                        {		
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {              
                            convertBoolToInt($1);                             //convert bool to int	
                            convertBoolToInt($3);			
                            $$ = new Expression();
                            $$->type = "not-boolean";                   //result is not boolean
                            $$->loc = gentemp(new symboltype("int"));
                            emit("&", $$->loc->name, $1->loc->name, $3->loc->name);               //emit the quad
                        }
                    }
                    ;

exclusive_OR_expression:
                    and_expression
                    { $$=$1;/* Simple assign */ }
                    | exclusive_OR_expression XOR and_expression
                    {
                        if(!compareSymbolType($1->loc, $3->loc))    //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
                        {
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {
                            convertBoolToInt($1);
                            convertBoolToInt($3);
                            $$ = new Expression();
                            $$->type = "not-boolean";
                            $$->loc = gentemp(new symboltype("int"));
                            emit("^", $$->loc->name, $1->loc->name, $3->loc->name);
                        }
                    }
                    ;

inclusive_OR_expression:
                    exclusive_OR_expression
                    { $$=$1;/* Simple assign */ }
                    | inclusive_OR_expression BITWISE_OR exclusive_OR_expression
                    { 
                        if(!compareSymbolType($1->loc, $3->loc))   //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
                        { yyerror("Type Error in Program"); }
                        else 
                        {
                            convertBoolToInt($1);		
                            convertBoolToInt($3);
                            $$ = new Expression();
                            $$->type = "not-boolean";
                            $$->loc = gentemp(new symboltype("int"));
                            emit("|", $$->loc->name, $1->loc->name, $3->loc->name);
                        } 
                    }
                    ;

logical_AND_expression:
                    inclusive_OR_expression
                    { $$=$1;/* Simple assign */ }
                    | logical_AND_expression LOGICAL_AND M inclusive_OR_expression
                    { 
                        convertIntToBool($4);                                  //convert inclusive_or_expression int to bool	
                        convertIntToBool($1);                                  //convert logical_AND_expression to bool
                        $$ = new Expression();                                 //make new boolean expression 
                        $$->type = "bool";
                        backpatch($1->truelist, $3);                           //if $1 is true, we move to $5
                        $$->truelist = $4->truelist;                           //if $5 is also true, we get truelist for $$
                        $$->falselist = merge($1->falselist, $4->falselist);   //merge their falselists
                    }
                    ;

logical_OR_expression:
                    logical_AND_expression
                    { $$=$1;/* Simple assign */ }
                    | logical_OR_expression LOGICAL_OR M logical_AND_expression
                    { 
                        convertIntToBool($4);			 //convert logical_AND_expression int to bool	
                        convertIntToBool($1);			 //convert logical_or_expression to bool
                        $$ = new Expression();			 //make new boolean expression
                        $$->type = "bool";
                        backpatch($1->falselist, $3);		//if $1 is true, we move to $5
                        $$->truelist = merge($1->truelist, $4->truelist);		//merge their truelists
                        $$->falselist = $4->falselist;		 	//if $5 is also false, we get falselist for $$
                    }
                    ;

conditional_expression:
                    logical_OR_expression
                    { $$=$1;/* Simple assign */ }
                    | logical_OR_expression N '?' M expression N ':' M conditional_expression
                    {
                        //normal conversion method to get conditional expressions
                        $$->loc = gentemp($5->loc->type);       //generate temporary for expression
                        $$->loc->update($5->loc->type);
                        emit("=", $$->loc->name, $9->loc->name);      //make it equal to sconditional_expression
                        list<int> l = makelist(nextinstr());        //makelist next instruction
                        emit("goto", "");              //prevent fallthrough
                        backpatch($6->nextlist, nextinstr());        //after N, go to next instruction
                        emit("=", $$->loc->name, $5->loc->name);
                        list<int> m = makelist(nextinstr());         //makelist next instruction
                        l = merge(l, m);						//merge the two lists
                        emit("goto", "");						//prevent fallthrough
                        backpatch($2->nextlist, nextinstr());   //backpatching
                        convertIntToBool($1);                   //convert expression to boolean
                        backpatch($1->truelist, $4);           //$1 true goes to expression
                        backpatch($1->falselist, $8);          //$1 false goes to conditional_expression
                        backpatch(l, nextinstr());
                    }
                    ;

assignment_expression:
                    conditional_expression
                    { $$=$1;/* Simple assign */ }
                    | unary_expression assignment_operator assignment_expression
                    {
                        if($1->atype=="arr")          // if type is arr, simply check if we need to convert and emit
                        {
                            $3->loc = convertType($3->loc, $1->type->type);
                            emit("[]=", $1->Array->name, $1->loc->name, $3->loc->name);		
                        }
                        else if($1->atype=="ptr")     // if type is ptr, simply emit
                        {
                            emit("*=", $1->Array->name, $3->loc->name);	
                        }
                        else                              //otherwise assignment
                        {
                            $3->loc = convertType($3->loc, $1->Array->type->type);
                            emit("=", $1->Array->name, $3->loc->name);
                        }
                        
                        $$ = $3;
                    }
                    ;


assignment_operator: 
                    ASGN
                    {  }
                    | MULT_ASGN
                    {  }
                    | DIV_ASGN
                    {  }
                    | MOD_ASGN
                    {  }
                    | ADD_ASGN
                    {  }
                    | SUB_ASGN
                    {  }
                    | LSHIFT_ASGN
                    {  }
                    | RSHIFT_ASGN
                    {  }
                    | AND_ASGN
                    {  }
                    | XOR_ASGN
                    {  }
                    | OR_ASGN
                    {  }
                    ;

expression:
                    assignment_expression
                    { $$ = $1; }
                    | expression ',' assignment_expression
                    {  }
                    ;

constant_expression:
                    conditional_expression
                    {  }
                    ;

declaration:
                    declaration_specifiers init_declarator_list_opt ';'
                    {  }
                    ;

init_declarator_list_opt:
                    init_declarator_list {  }
                    | %empty{  }
                    ;

declaration_specifiers:
                    storage_class_specifier declaration_specifiers_opt
                    {  }
                    | type_specifier declaration_specifiers_opt
                    {  }
                    | type_qualifier declaration_specifiers_opt
                    {  }
                    | function_specifier declaration_specifiers_opt
                    {  }
                    ;

declaration_specifiers_opt:
                    declaration_specifiers { }
                    | %empty {  }
                    ;

init_declarator_list:
                    init_declarator
                    {  }
                    | init_declarator_list ',' init_declarator
                    {  }
                    ;

init_declarator:
                    declarator
                    { $$ = $1; }
                    | declarator ASGN initializer
                    {
                        if($3->val!="") $1->val=$3->val;        //get the initial value and  emit it
                        emit("=", $1->name, $3->name);	
                    }
                    ;

storage_class_specifier:
                    EXTERN
                    {  }
                    | STATIC
                    {  }
                    | AUTO
                    {  }
                    | REGISTER
                    {  }
                    ;

type_specifier:
                    VOID
                    { var_type="void"; /* Store the latest var type */ }
                    | CHAR
                    { var_type="char"; }
                    | SHORT
                    {  }
                    | INT
                    { var_type="int"; }
                    | LONG
                    {  }
                    | FLOAT
                    { var_type="float"; }
                    | DOUBLE
                    {  }
                    | SIGNED
                    {  }
                    | UNSIGNED
                    {  }
                    | _BOOL
                    {  }
                    | _COMPLEX
                    {  }
                    | _IMAGINARY
                    {  }
                    | enum_specifier
                    {  }
                    | struct_or_union_specifier
                    {  }
                    ;

specifier_qualifier_list:
                    type_specifier specifier_qualifier_list_opt
                    {  }
                    | type_qualifier specifier_qualifier_list_opt
                    {  }
                    ;

specifier_qualifier_list_opt:
                    specifier_qualifier_list {  }
                    | %empty {  }
                    ;

struct_or_union_specifier:
                    struct_or_union '{' struct_declaration_list '}'
                    {  }
                    | struct_or_union IDENTIFIER '{' struct_declaration_list '}'
                    {  }
                    | struct_or_union IDENTIFIER
                    {  }
                    ;

struct_or_union:
                    STRUCT
                    {  }
                    | UNION
                    {  }
                    ;

struct_declaration_list: 
                    struct_declaration
                    {  }
                    | struct_declaration_list struct_declaration
                    {  }
                    ;

struct_declaration:
                    specifier_qualifier_list ';'
                    {  }
                    | specifier_qualifier_list struct_declarator_list ';'
                    {  }
                    ;

struct_declarator_list:
                    struct_declarator
                    {  }
                    | struct_declarator_list ',' struct_declarator
                    {  }
                    ;
struct_declarator:
                    ':' constant_expression
                    {  }
                    | declarator ':' constant_expression
                    {  }
                    | declarator
                    {  }
                    ;

enum_specifier:
                    ENUM identifier_opt '{' enumerator_list '}'
                    {  }
                    | ENUM identifier_opt '{' enumerator_list ',' '}'
                    {  }
                    | ENUM IDENTIFIER
                    {  }
                    ;

identifier_opt:
                    IDENTIFIER {  }
                    | %empty {  }
                    ;

enumerator_list:
                    enumerator
                    {  }
                    | enumerator_list ',' enumerator
                    {  }
                    ;


enumerator:
                    IDENTIFIER
                    {  }
                    | IDENTIFIER ASGN constant_expression
                    {  }
                    ;
                

type_qualifier:
                    CONST
                    {  }
                    | RESTRICT
                    {  }
                    | VOLATILE
                    {  }
                    ;

function_specifier:
                    INLINE
                    {  }
                    ;

declarator:
                    pointer direct_declarator 
                    {
                        symboltype *t = $1;
                        while(t->arrtype!=NULL) t = t->arrtype;           //for multidimensional arr1s, move in depth till you get the base type
                        t->arrtype = $2->type;                //add the base type 
                        $$ = $2->update($1);                  //update
                    }
                    | direct_declarator {   }
                    ;



direct_declarator:
                    IDENTIFIER                 
                    {
                        //if ID, simply add a new variable of var_type
                        $$ = $1->update(new symboltype(var_type));
                        currSymbolPtr = $$;	
                    }
                    | '(' declarator ')' {$$=$2;}        //simply equate
                    | direct_declarator '[' type_qualifier_list assignment_expression ']' {	}
                    | direct_declarator '[' type_qualifier_list ']' {	}
                    | direct_declarator '[' assignment_expression ']' 
                    {
                        symboltype *t = $1 -> type;
                        symboltype *prev = NULL;
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;      //keep moving recursively to get basetype
                        }
                        if(prev==NULL) 
                        {
                            int temp = atoi($3->loc->val.c_str());      //get initial value
                            symboltype* s = new symboltype("arr", $1->type, temp);        //create new symbol with that initial value
                            $$ = $1->update(s);   //update the symbol table
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, atoi($3->loc->val.c_str()));     //similar arguments as above		
                            $$ = $1->update($1->type);
                        }
                    }
                    | direct_declarator '[' ']' 
                    {
                        symboltype *t = $1 -> type;
                        symboltype *prev = NULL;
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;         //keep moving recursively to base type
                        }
                        if(prev==NULL) 
                        {
                            symboltype* s = new symboltype("arr", $1->type, 0);    //no initial values, simply keep 0
                            $$ = $1->update(s);
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, 0);
                            $$ = $1->update($1->type);
                        }
                    }
                    | direct_declarator '[' STATIC type_qualifier_list assignment_expression ']' {	}
                    | direct_declarator '[' STATIC assignment_expression ']' {	}
                    | direct_declarator '[' type_qualifier_list MULT ']' {	}
                    | direct_declarator '[' MULT ']' {	}
                    | direct_declarator '(' changetable parameter_type_list ')' 
                    {
                        ST->name = $1->name;	
                        if($1->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");         //lookup for return value	
                            s->update($1->type);		
                        }
                        $1->nested=ST;       
                        ST->parent = globalST;
                        changeTable(globalST);				// Come back to globalsymbol table
                        currSymbolPtr = $$;
                    }
                    | direct_declarator '(' identifier_list ')' {	}
                    | direct_declarator '(' changetable ')' 
                    {        //similar as above
                        ST->name = $1->name;
                        if($1->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");
                            s->update($1->type);
                        }
                        $1->nested=ST;
                        ST->parent = globalST;
                        changeTable(globalST);				// Come back to globalsymbol table
                        currSymbolPtr = $$;
                    }
                    ;

type_qualifier_list_opt:
                    type_qualifier_list { }
                    | %empty {  }
                    ;


pointer:
                    MULT type_qualifier_list_opt 
                    { 
                        $$ = new symboltype("ptr");   //create new pointer
                    }
                    | MULT type_qualifier_list_opt pointer
                    { 
                        $$ = new symboltype("ptr",$3);
                    }
                    ;

type_qualifier_list:
                    type_qualifier
                    {  }
                    | type_qualifier_list type_qualifier
                    {  }
                    ;

parameter_type_list:
                    parameter_list
                    {  }
                    | parameter_list ',' ELLIPSIS
                    {  }
                    ;                       

parameter_list:
                    parameter_declaration
                    {  }
                    | parameter_list ',' parameter_declaration
                    {  }
                    ;

parameter_declaration:
                    declaration_specifiers declarator
                    {  }
                    | declaration_specifiers
                    {  }
                    ;

identifier_list:
                    IDENTIFIER
                    {  }
                    | identifier_list ',' IDENTIFIER
                    {  }
                    ;

type_name:
                    specifier_qualifier_list
                    {  }
                    ;

initializer:
                    assignment_expression
                    { $$=$1->loc; /* assignment */  }
                    | '{' initializer_list '}'
                    {  }
                    | '{' initializer_list ',' '}'
                    {  }
                    ;

initializer_list:
                    designation_opt initializer
                    {  }
                    | initializer_list ',' designation_opt initializer
                    {  }
                    ;

designation_opt:
                    designation { }
                    | %empty { }
                    ;

designation:
                    designator_list ASGN
                    {  }
                    ;

designator_list:
                    designator
                    {  }
                    | designator_list designator
                    {  }
                    ;

designator:
                    '[' constant_expression ']'
                    {  }
                    | '.' IDENTIFIER
                    {  }
                    ;

statement:
                    labeled_statement
                    {  }
                    | compound_statement
                    { $$=$1; }
                    | expression_statement
                    { 
                        $$=new Statement();              //create new statement with same nextlist
                        $$->nextlist=$1->nextlist; 
                    }
                    | selection_statement
                    { $$=$1; }
                    | iteration_statement
                    { $$=$1; }
                    | jump_statement
                    { $$=$1; }
                    ;

loop_statement: 
                    labeled_statement   {  }
                    | expression_statement   
                    { 
                        $$=new Statement();              //create new statement with same nextlist
                        $$->nextlist=$1->nextlist; 
                    }
                    | selection_statement   { $$=$1; }
                    | iteration_statement   { $$=$1; }
                    | jump_statement   { $$=$1; }
                    ;
labeled_statement:
                    IDENTIFIER ':' M statement
                    {  
                        $$ = $4;
                        label *s = find_label($1->name);
                        if(s!=nullptr){
                            s->addr = $3;
                            backpatch(s->nextlist,s->addr);
                        }else{
                            s = new label($1->name);
                            s->addr = nextinstr();
                            s->nextlist = makelist($3);
                            label_table.push_back(*s);
                        }
                    }
                    | CASE constant_expression ':' statement
                    {  }
                    | DEFAULT ':' statement
                    {  }
                    ;

compound_statement:
                    '{' X changetable block_item_list_opt '}'
                    { 
                        $$=$4;
                        changeTable(ST->parent); 
                    }
                    ;

block_item_list:
                    block_item
                    { $$=$1; /* Simple assign */}
                    | block_item_list M block_item
                    { 
                        $$=$3;
                        backpatch($1->nextlist,$2);     //after $1, move to block_item via $2
                    }
                    ;

block_item_list_opt:
                    block_item_list
                    { $$=$1 ;/* simple assign */}
                    | %empty { $$=new Statement(); /* Create new statement */} 
                    ;

block_item:
                    declaration
                    { $$=new Statement(); /* Create new statement */} 
                    | statement
                    { $$=$1; /* Simple assign */}
                    ;

expression_statement:
                    ';'
                    { $$ = new Expression(); /* new Expression */ }
                    | expression ';'
                    { $$=$1; /* Simple assign */}
                    ;

selection_statement:
                    IF '(' expression N ')' M statement N %prec "then"
                    {
                        // if statement without else
                        backpatch($4->nextlist, nextinstr());        //nextlist of N goes to nextinstr
                        convertIntToBool($3);         //convert expression to bool
                        $$ = new Statement();        //make new statement
                        backpatch($3->truelist, $6);        //is expression is true, go to M i.e just before statement body
                        list<int> temp = merge($3->falselist, $7->nextlist);   //merge falselist of expression, nextlist of statement and second N
                        $$->nextlist = merge($8->nextlist, temp);
                    }
                    | IF '(' expression N ')' M statement N ELSE M statement
                    {
                        //if statement with else
                        backpatch($4->nextlist, nextinstr());		//nextlist of N goes to nextinstr
                        convertIntToBool($3);        //convert expression to bool
                        $$ = new Statement();       //make new statement
                        backpatch($3->truelist, $6);    //when expression is true, go to M1 else go to M2
                        backpatch($3->falselist, $10);
                        list<int> temp = merge($7->nextlist, $8->nextlist);       //merge the nextlists of the statements and second N
                        $$->nextlist = merge($11->nextlist,temp);	
                    }
                    | SWITCH '(' expression ')' statement
                    { /* Not to be modelled */ }
                    ;

iteration_statement:
                    WHILE W '(' X changetable M expression ')' M loop_statement
                    {	
                        //while statement
                        $$ = new Statement();    //create statement
                        convertIntToBool($7);     //convert expression to bool
                        backpatch($10->nextlist, $6);	// M1 to go back to expression again
                        backpatch($7->truelist, $9);	// M2 to go to statement if the expression is true
                        $$->nextlist = $7->falselist;   //when expression is false, move out of loop
                        // Emit to prevent fallthrough
                        string str=convertIntToString($6);		
                        emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | WHILE W '(' X changetable M expression ')' '{' M block_item_list_opt '}'     
                    {	
                        //while statement
                        $$ = new Statement();    //create statement
                        convertIntToBool($7);     //convert expression to bool
                        backpatch($11->nextlist, $6);	// M1 to go back to expression again
                        backpatch($7->truelist, $10);	// M2 to go to statement if the expression is true
                        $$->nextlist = $7->falselist;   //when expression is false, move out of loop
                        // Emit to prevent fallthrough
                        string str=convertIntToString($6);		
                        emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | DO D M loop_statement M WHILE '(' expression ')' ';'
                    {
                        //do statement
                        $$ = new Statement();     //create statement	
                        convertIntToBool($8);      //convert to bool
                        backpatch($8->truelist, $3);						// M1 to go back to statement if expression is true
                        backpatch($4->nextlist, $5);						// M2 to go to check expression if statement is complete
                        $$->nextlist = $8->falselist;                       //move out if statement is false
                        loop_name = "";
                    }
                    | DO D '{' M block_item_list_opt '}' M WHILE '(' expression ')' ';'      
	                {
                        //do statement
		                $$ = new Statement();     //create statement	
		                convertIntToBool($10);      //convert to bool
		                backpatch($10->truelist, $4);						// M1 to go back to statement if expression is true
		                backpatch($5->nextlist, $7);						// M2 to go to check expression if statement is complete
		                $$->nextlist = $10->falselist;                       //move out if statement is false
		                loop_name = "";
	                }
                    | FOR F '(' X changetable declaration M expression_statement M expression N ')' M loop_statement     
                    {
                        //for loop
                        $$ = new Statement();		 //create new statement
                        convertIntToBool($8);  //convert check expression to boolean
                        backpatch($8->truelist, $13);	//if expression is true, go to M2
                        backpatch($11->nextlist, $7);	//after N, go back to M1
                        backpatch($14->nextlist, $9);	//statement go back to expression
                        string str=convertIntToString($9);
                        emit("goto", str);				//prevent fallthrough
                        $$->nextlist = $8->falselist;	//move out if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | FOR F '(' X changetable expression_statement M expression_statement M expression N ')' M loop_statement     
                    {
                        //for loop
                        $$ = new Statement();		 //create new statement
                        convertIntToBool($8);  //convert check expression to boolean
                        backpatch($8->truelist, $13);	//if expression is true, go to M2
                        backpatch($11->nextlist, $7);	//after N, go back to M1
                        backpatch($14->nextlist, $9);	//statement go back to expression
                        string str=convertIntToString($9);
                        emit("goto", str);				//prevent fallthrough
                        $$->nextlist = $8->falselist;	//move out if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | FOR F '(' X changetable declaration M expression_statement M expression N ')' M '{' block_item_list_opt '}'      
                    {
                        //for loop
                        $$ = new Statement();		 //create new statement
                        convertIntToBool($8);  //convert check expression to boolean
                        backpatch($8->truelist, $13);	//if expression is true, go to M2
                        backpatch($11->nextlist, $7);	//after N, go back to M1
                        backpatch($15->nextlist, $9);	//statement go back to expression
                        string str=convertIntToString($9);
                        emit("goto", str);				//prevent fallthrough
                        $$->nextlist = $8->falselist;	//move out if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | FOR F '(' X changetable expression_statement M expression_statement M expression N ')' M '{' block_item_list_opt '}'
                    {	
                        $$ = new Statement();		 //create new statement
                        convertIntToBool($8);  //convert check expression to boolean
                        backpatch($8->truelist, $13);	//if expression is true, go to M2
                        backpatch($11->nextlist, $7);	//after N, go back to M1
                        backpatch($15->nextlist, $9);	//statement go back to expression
                        string str=convertIntToString($9);
                        emit("goto", str);				//prevent fallthrough
                        $$->nextlist = $8->falselist;	//move out if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    ;

jump_statement:
                    GOTO IDENTIFIER ';'
                    { 
                        $$ = new Statement();
                        label *l = find_label($2->name);
                        if(l){
                            emit("goto","");
                            list<int>lst = makelist(nextinstr());
                            l->nextlist = merge(l->nextlist,lst);
                            if(l->addr!=-1)
                                backpatch(l->nextlist,l->addr);
                        } else {
                            l = new label($2->name);
                            l->nextlist = makelist(nextinstr());
                            emit("goto","");
                            label_table.push_back(*l);
                        }
                    }  
                    | CONTINUE ';'
                    { $$ = new Statement(); }	
                    | BREAK ';'
                    { $$ = new Statement(); }
                    | RETURN expression ';'
                    {
                        $$ = new Statement();	
                        emit("return",$2->loc->name);               //emit return with the name of the return value
                    }
                    | RETURN ';'
                    {
                        $$ = new Statement();	
                        emit("return","");                         //simply emit return
                    }
                    ;

translation_unit:
                    external_declaration
                    {  }
                    | translation_unit external_declaration
                    {  }
                    ;

external_declaration:
                    function_definition
                    {  }
                    | declaration
                    {  }
                    ;

function_definition:
                    declaration_specifiers declarator declaration_list_opt compound_statement
                    {
                        int next_instr=0;	 	
                        ST->parent=globalST;
                        table_count = 0;
                        label_table.clear();
                        changeTable(globalST);                     //once we come back to this at the end, change the table to global Symbol table
                    }
                    ;

declaration_list_opt:
                    declaration_list { }
                    | %empty { }
                    ;

declaration_list:
                    declaration
                    {  }
                    | declaration_list declaration
                    {  }
                    ;

%%
/*Auxiliaries*/
void yyerror(string s)
{
    // printf("Found error %s\n", s);
    cout<<s<<endl;
}
