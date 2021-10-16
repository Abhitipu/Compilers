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
    float float_val;    // float value
    int num_params;     // number of parameters
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
%token <float_val> FLOAT_CONST
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
	primary_expression 
	multiplicative_expression
	additive_expression
	shift_expression
	relational_expression
	equality_expression
	and_expression
	exclusive_or_expression
	inclusive_or_expression
	logical_and_expression
	logical_or_expression
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
                        $$->loc=gentemp(new symboltype("float"),$1);
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
                    {  }
                    | STRING_LITERAL
                    {                                                                          // create new expression and store the value of the constant in a temporary
                        $$=new Expression();
                        $$->loc=gentemp(new symboltype("ptr"),$1);
                        $$->loc->type->arrtype=new symboltype("char");
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
                        //// done till here
                    }
                    | SIZEOF unary_expression
                    { printf("unary_expression -> sizeof unary_expression\n"); }
                    | SIZEOF '(' type_name ')'  
                    { printf("unary_expression -> sizeof ( type_name ) \n"); }
                    ;    


unary_operator: 
                    BITWISE_AND
                    { printf("unary_operator -> &\n"); }
                    | MULT
                    { printf("unary_operator -> *\n"); }
                    | PLUS
                    { printf("unary_operator -> +\n"); }
                    | MINUS
                    { printf("unary_operator -> -\n"); }
                    | BITWISE_NOT
                    { printf("unary_operator -> ~\n"); }
                    | LOGICAL_NOT
                    { printf("unary_operator -> !\n"); }
                    ;

cast_expression:
                    unary_expression
                    { printf("cast_expression -> unary_expression\n"); }
                    | '(' type_name ')' cast_expression
                    { printf("cast_expression -> ( type_name ) cast_expression\n"); }
                    ;

multiplicative_expression:
                    cast_expression
                    { printf("multiplicative_expression -> cast_expression\n"); }
                    | multiplicative_expression MULT cast_expression
                    { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
                    | multiplicative_expression DIVIDE cast_expression
                    { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
                    | multiplicative_expression MODULO cast_expression     
                    { printf("multiplicative_expression -> multiplicative_expression modulo cast_expression\n"); }
                    ;


additive_expression:        
                    multiplicative_expression
                    { printf("additive_expression -> multiplicative_expression\n"); }
                    | additive_expression PLUS multiplicative_expression
                    { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }
                    | additive_expression MINUS multiplicative_expression
                    { printf("additive_expression -> additive_expression − multiplicative_expression\n"); }
                    ;

shift_expression:
                    additive_expression
                    { printf("shift_expression -> additive_expression\n"); }
                    | shift_expression LSHIFT additive_expression
                    { printf("shift_expression -> shift_expression << additive_expression\n"); }
                    | shift_expression RSHIFT additive_expression
                    { printf("shift_expression -> shift_expression >> additive_expression\n"); }
                    ;

relational_expression:
                    shift_expression
                    { printf("relational_expression -> shift_expression\n"); }
                    | relational_expression LT shift_expression
                    { printf("relational_expression -> relational_expression < shift_expression\n"); }
                    | relational_expression GT shift_expression
                    { printf("relational_expression -> relational_expression > shift_expression\n"); }
                    | relational_expression LEQ shift_expression
                    { printf("relational_expression -> relational_expression <= shift_expression\n"); }
                    | relational_expression GEQ shift_expression
                    { printf("relational_expression -> relational_expression >= shift_expression\n"); }
                    ;

equality_expression:
                    relational_expression
                    { printf("equality_expression -> relational_expression\n"); }
                    | equality_expression EQ relational_expression
                    { printf("equality_expression -> equality_expression == relational_expression\n"); }
                    | equality_expression NEQ relational_expression
                    { printf("equality_expression -> equality_expression ! = relational_expression\n"); }
                    ;

AND_expression:
                    equality_expression
                    { printf("AND_expression -> equality_expression\n"); }
                    | AND_expression BITWISE_AND equality_expression
                    { printf("AND_expression -> AND_expression & equality_expression\n");}
                    ;

exclusive_OR_expression:
                    AND_expression
                    { printf("exclusive_OR_expression -> AND_expression\n"); }
                    | exclusive_OR_expression XOR AND_expression
                    { printf("exclusive_OR_expression -> exclusive_OR_expression ˆ AND_expression\n"); }
                    ;

inclusive_OR_expression:
                    exclusive_OR_expression
                    { printf("inclusive_OR_expression -> exclusive_OR_expression\n"); }
                    | inclusive_OR_expression BITWISE_OR exclusive_OR_expression
                    { printf("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); }
                    ;

logical_AND_expression:
                    inclusive_OR_expression
                    { printf("logical_AND_expression -> inclusive_OR_expression\n"); }
                    | logical_AND_expression LOGICAL_AND inclusive_OR_expression
                    { printf("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); }
                    ;

logical_OR_expression:
                    logical_AND_expression
                    { printf("logical_OR_expression -> logical_AND_expression\n"); }
                    | logical_OR_expression LOGICAL_OR logical_AND_expression
                    { printf("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n"); }
                    ;

conditional_expression:
                    logical_OR_expression
                    { printf("conditional_expression -> logical_OR_expression\n"); }
                    | logical_OR_expression '?' expression ':' conditional_expression
                    { printf("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); }
                    ;

assignment_expression:
                    conditional_expression
                    { printf("assignment_expression -> conditional_expression\n"); }
                    | unary_expression assignment_operator assignment_expression
                    { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
                    ;


assignment_operator: 
                    ASGN
                    { printf("assignment_operator -> =\n"); }
                    | MULT_ASGN
                    { printf("assignment_operator -> *=\n"); }
                    | DIV_ASGN
                    { printf("assignment_operator -> /=\n"); }
                    | MOD_ASGN
                    { printf("assignment_operator -> %%=\n"); }
                    | ADD_ASGN
                    { printf("assignment_operator -> +=\n"); }
                    | SUB_ASGN
                    { printf("assignment_operator -> -=\n"); }
                    | LSHIFT_ASGN
                    { printf("assignment_operator -> <<=\n"); }
                    | RSHIFT_ASGN
                    { printf("assignment_operator -> >>=\n"); }
                    | AND_ASGN
                    { printf("assignment_operator -> &=\n"); }
                    | XOR_ASGN
                    { printf("assignment_operator -> ^=\n"); }
                    | OR_ASGN
                    { printf("assignment_operator -> |=\n"); }
                    ;

expression:
                    assignment_expression
                    { printf("expression -> assignment_expression\n"); }
                    | expression ',' assignment_expression
                    { printf("expression -> expression , assignment_expression\n"); }
                    ;

constant_expression:
                    conditional_expression
                    { printf("constant_expression -> conditional_expression\n"); }
                    ;

declaration:
                    declaration_specifiers init_declarator_list_opt ';'
                    { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
                    ;

init_declarator_list_opt:
                    init_declarator_list
                    | /* epsilon */
                    ;

declaration_specifiers:
                    storage_class_specifier declaration_specifiers_opt
                    { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
                    | type_specifier declaration_specifiers_opt
                    { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
                    | type_qualifier declaration_specifiers_opt
                    { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
                    | function_specifier declaration_specifiers_opt
                    { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
                    ;

declaration_specifiers_opt:
                    declaration_specifiers
                    | /* epsilon */
                    ;

init_declarator_list:
                    init_declarator
                    { printf("init_declarator_list -> init_declarator\n"); }
                    | init_declarator_list ',' init_declarator
                    { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
                    ;

init_declarator:
                    declarator
                    { printf("init_declarator -> declarator\n"); }
                    | declarator ASGN initializer
                    { printf("init_declarator -> declarator = initializer\n"); }
                    ;

storage_class_specifier:
                    EXTERN
                    { printf("storage_class_specifier -> extern\n"); }
                    | STATIC
                    { printf("storage_class_specifier -> static\n"); }
                    | AUTO
                    { printf("storage_class_specifier -> auto\n"); }
                    | REGISTER
                    { printf("storage_class_specifier -> register\n"); }
                    ;

type_specifier:
                    VOID
                    { printf("type_specifier -> void\n"); }
                    | CHAR
                    { printf("type_specifier -> char\n"); }
                    | SHORT
                    { printf("type_specifier -> short\n"); }
                    | INT
                    { printf("type_specifier -> int\n"); }
                    | LONG
                    { printf("type_specifier -> long\n"); }
                    | FLOAT
                    { printf("type_specifier -> float\n"); }
                    | DOUBLE
                    { printf("type_specifier -> double\n"); }
                    | SIGNED
                    { printf("type_specifier -> signed\n"); }
                    | UNSIGNED
                    { printf("type_specifier -> unsigned\n"); }
                    | _BOOL
                    { printf("type_specifier -> _bool\n"); }
                    | _COMPLEX
                    { printf("type_specifier -> _complex\n"); }
                    | _IMAGINARY
                    { printf("type_specifier -> _imaginary\n"); }
                    | enum_specifier
                    { printf("type_specifier -> enum_specifier\n");}
                    | struct_or_union_specifier
                    { printf("type_specifier -> struct_or_union_specifier\n"); }
                    ;

specifier_qualifier_list:
                    type_specifier specifier_qualifier_list_opt
                    { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
                    | type_qualifier specifier_qualifier_list_opt
                    { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
                    ;

specifier_qualifier_list_opt:
                    specifier_qualifier_list
                    | /* epsilon */
                    ;

struct_or_union_specifier:
                    struct_or_union '{' struct_declaration_list '}'
                    { printf("struct_or_union_specifier -> struct_or_union { struct_declaration_list } \n"); }
                    | struct_or_union IDENTIFIER '{' struct_declaration_list '}'
                    { printf("struct_or_union_specifier -> struct_or_union IDENTIFIER { struct_declaration_list } \n"); }
                    | struct_or_union IDENTIFIER
                    { printf("struct_or_union_specifier -> struct_or_union IDENTIFIER \n"); }
                    ;

struct_or_union:
                    STRUCT
                    { printf("struct_or_union -> STRUCT\n"); }
                    | UNION
                    { printf("struct_or_union -> union\n"); }
                    ;

struct_declaration_list: 
                    struct_declaration
                    { printf("struct_declaration_list -> struct_declaration\n"); }
                    | struct_declaration_list struct_declaration
                    { printf("struct_declaration_list -> struct_declaration_list struct_declaration\n"); }
                    ;

struct_declaration:
                    specifier_qualifier_list ';'
                    { printf("struct_declaration -> specifier_qualifier_list\n"); }
                    | specifier_qualifier_list struct_declarator_list ';'
                    { printf("struct_declarator -> specifier_qualifier_list\n"); }
                    ;

struct_declarator_list:
                    struct_declarator
                    { printf("struct_declarator_list -> struct_declarator\n"); }
                    | struct_declarator_list ',' struct_declarator
                    { printf("struct_declarator_list -> struct_declarator_list , struct_declarator\n");}
                    ;
struct_declarator:
                    ':' constant_expression
                    { printf("struct_declarator -> : constant_expression\n"); }
                    | declarator ':' constant_expression
                    { printf("struct_declarator -> declarator : constant_expression\n"); }
                    | declarator
                    { printf("struct_declarator -> declarator\n"); }
                    ;

enum_specifier:
                    ENUM identifier_opt '{' enumerator_list '}'
                    { printf("enum_specifier -> enum identifier_opt { enumerator_list }\n"); }
                    | ENUM identifier_opt '{' enumerator_list ',' '}'
                    { printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); }
                    | ENUM IDENTIFIER
                    { printf("enum_specifier -> enum identifier\n"); }
                    ;

identifier_opt:
                    IDENTIFIER
                    | /* epsilon */
                    ;

enumerator_list:
                    enumerator
                    { printf("enumerator_list -> enumerator\n");}
                    | enumerator_list ',' enumerator
                    { printf("enumerator_list -> enumerator_list, enumerator\n");}
                    ;


enumerator:
                    IDENTIFIER
                    { printf("enumerator -> enumerator_constant\n");}
                    | IDENTIFIER ASGN constant_expression
                    { printf("enumerator -> enumerator_constant = constant_expression\n");}
                    ;
                

type_qualifier:
                    CONST
                    { printf("type_qualifier -> const\n"); }
                    | RESTRICT
                    { printf("type_qualifier -> restrict\n"); }
                    | VOLATILE
                    { printf("type_qualifier -> volatile\n"); }
                    ;

function_specifier:
                    INLINE
                    { printf("function_specifier -> inline\n"); }
                    ;

declarator:
                    pointer_opt direct_declarator
                    { printf("declarator -> pointer_opt direct_declarator\n"); }
                    ;

pointer_opt:
                    pointer
                    | /* epsilon */
                    ;

direct_declarator:
                    IDENTIFIER
                    { printf("direct_declarator -> identifier\n"); }
                    | '(' declarator ')'
                    { printf("direct_declarator -> ( declarator )\n"); }
                    | direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']'
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }
                    | direct_declarator '[' STATIC type_qualifier_list_opt assignment_expression ']'
                    { printf("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expression ]\n"); }
                    | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expression ]\n"); }
                    | direct_declarator '[' type_qualifier_list_opt MULT ']'
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }
                    | direct_declarator '(' parameter_type_list ')'
                    { printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }
                    | direct_declarator '(' identifier_list_opt ')'
                    { printf("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
                    ;

type_qualifier_list_opt:
                    type_qualifier_list
                    | /* epsilon */
                    ;

assignment_expression_opt:
                    assignment_expression
                    | /* epsilon */
                    ;

identifier_list_opt:
                    identifier_list
                    | /* epsilon */
                    ;

pointer:
                    MULT type_qualifier_list_opt 
                    { printf("pointer -> * type_qualifier_list_opt\n"); }
                    | MULT type_qualifier_list_opt pointer
                    { printf("pointer -> * type_qualifier_list_opt pointer\n"); }
                    ;

type_qualifier_list:
                    type_qualifier
                    { printf("type_qualifier_list -> type_qualifier\n"); }
                    | type_qualifier_list type_qualifier
                    { printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
                    ;

parameter_type_list:
                    parameter_list
                    { printf("parameter_type_list -> parameter_list\n"); }
                    | parameter_list ',' ELLIPSIS
                    { printf("parameter_type_list -> parameter_list , ...\n"); }
                    ;                       

parameter_list:
                    parameter_declaration
                    { printf("parameter_list -> parameter_declaration\n"); }
                    | parameter_list ',' parameter_declaration
                    { printf("parameter_list -> parameter_list , parameter_declaration\n"); }
                    ;

parameter_declaration:
                    declaration_specifiers declarator
                    { printf("parameter_declaration -> declaration_specifiers declarator\n"); }
                    | declaration_specifiers
                    { printf("parameter_declaration -> declaration_specifiers\n"); }
                    ;

identifier_list:
                    IDENTIFIER
                    { printf("identifier_list -> identifier\n"); }
                    | identifier_list ',' IDENTIFIER
                    { printf("identifier_list -> identifier_list , identifier\n"); }
                    ;

type_name:
                    specifier_qualifier_list
                    { printf("type_name -> specifier_qualifier_list\n"); }
                    ;

initializer:
                    assignment_expression
                    { printf("initializer -> assignment_expression\n"); }
                    | '{' initializer_list '}'
                    { printf("initializer -> { initializer_list }\n"); }
                    | '{' initializer_list ',' '}'
                    { printf("initializer -> { initializer_list , }\n"); }
                    ;

initializer_list:
                    designation_opt initializer
                    { printf("initializer_list -> designation_opt initializer\n"); }
                    | initializer_list ',' designation_opt initializer
                    { printf("initializer_list -> initializer_list , designation_opt initializer\n"); }
                    ;

designation_opt:
                    designation
                    | /* epsilon */
                    ;

designation:
                    designator_list ASGN
                    { printf("designation -> designator_list =\n"); }
                    ;

designator_list:
                    designator
                    { printf("designator_list -> designator\n"); }
                    | designator_list designator
                    { printf("designator_list -> designator_list designator\n"); }
                    ;

designator:
                    '[' constant_expression ']'
                    { printf("designator -> [ constant_expression ]\n"); }
                    | '.' IDENTIFIER
                    { printf("designator -> . identifier\n"); }
                    ;

statement:
                    labeled_statement
                    { printf("statement -> labeled_statement\n"); }
                    | compound_statement
                    { printf("statement -> compound_statement\n"); }
                    | expression_statement
                    { printf("statement -> expression_statement\n"); }
                    | selection_statement
                    { printf("statement -> selection_statement\n"); }
                    | iteration_statement
                    { printf("statement -> iteration_statement\n"); }
                    | jump_statement
                    { printf("statement -> jump_statement\n"); }
                    ;

labeled_statement:
                    IDENTIFIER ':' statement
                    { printf("labeled_statement -> identifier : statement\n"); }
                    | CASE constant_expression ':' statement
                    { printf("labeled_statement -> case constant_expression : statement\n"); }
                    | DEFAULT ':' statement
                    { printf("labeled_statement -> default : statement\n"); }
                    ;

compound_statement:
                    '{' block_item_list_opt '}'
                    { printf("compound_statement -> { block_item_list_opt }\n"); }
                    ;

block_item_list:
                    block_item
                    { printf("block_item_list -> block_item\n"); }
                    | block_item_list block_item
                    { printf("block_item_list -> block_item_list block_item\n"); }
                    ;

block_item_list_opt:
                    block_item_list
                    | /* epsilon */
                    ;

block_item:
                    declaration
                    { printf("block_item -> declaration\n"); }
                    | statement
                    { printf("block_item -> statement\n"); }
                    ;

expression_statement:
                    expression_opt ';'
                    { printf("expression_statement-> expression_opt ;\n"); }
                    ;

selection_statement:
                    IF '(' expression ')' statement
                    { printf("selection_statement -> if ( expression ) statement\n"); }
                    | IF '(' expression ')' statement ELSE statement
                    { printf("selection_statement -> if ( expression ) statement else statement\n"); }
                    | SWITCH '(' expression ')' statement
                    { printf("selection_statement -> switch ( expression ) statement\n"); }
                    ;

iteration_statement:
                    WHILE '(' expression ')' statement
                    { printf("iteration_statement -> while ( expression ) statement\n"); }
                    | DO statement WHILE '(' expression ')' ';'
                    { printf("iteration_statement -> do statement while ( expression ) ;\n"); }
                    | FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement
                    { printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
                    | FOR '(' declaration expression_opt ';' expression_opt ')' statement
                    { printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
                    ;

expression_opt:
                    expression
                    | /* epsilon */
                    ;

jump_statement:
                    GOTO IDENTIFIER ';'
                    { printf("jump_statement -> goto identifier ;\n"); }
                    | CONTINUE ';'
                    { printf("jump_statement -> continue ;\n"); }
                    | BREAK ';'
                    { printf("jump_statement -> break ;\n"); }
                    | RETURN expression_opt ';'
                    { printf("jump_statement -> return expression_opt ;\n"); }
                    ;

translation_unit:
                    external_declaration
                    { printf("translation_unit -> external_declaration\n"); }
                    | translation_unit external_declaration
                    { printf("translation_unit -> external_declaration\n"); }
                    ;

external_declaration:
                    function_definition
                    { printf("external_declaration -> function_definition\n"); }
                    | declaration
                    { printf("external_declaration -> declaration\n"); }
                    ;

function_definition:
                    declaration_specifiers declarator declaration_list_opt compound_statement
                    { printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
                    ;

declaration_list_opt:
                    declaration_list
                    | /* epsilon */
                    ;

declaration_list:
                    declaration
                    { printf("declaration_list -> declaration\n"); }
                    | declaration_list declaration
                    { printf("declaration_list -> declaration_list declaration\n"); }
                    ;

%%
/*Auxiliaries*/
void yyerror(char* s)
{
    printf("Found error %s\n", s);
}
