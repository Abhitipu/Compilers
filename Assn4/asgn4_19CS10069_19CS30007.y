/*Declarations*/
%{
    #include<stdio.h>
    extern int yylex();
    void yyerror(char*);
%}

%union {
    int myIntVal;
    char myCharVal;
    float myFloatVal;
    double myDoubleVal;
    char myCharArray[60];
    char* myStringVal;
}

%token BREAK RETURN CASE FOR WHILE GOTO SIZEOF CONTINUE IF DO SWITCH ELSE
%token FLOAT SHORT CHAR _BOOL _IMAGINARY _COMPLEX INT DOUBLE LONG VOID SIGNED AUTO UNSIGNED 
%token ENUM UNION STRUCT TYPEDEF 
%token CONST DEFAULT STATIC REGISTER RESTRICT VOLATILE EXTERN INLINE 


%token <myCharArray> IDENTIFIER
%token <myIntVal> INTEGER_CONST
%token <myCharVal> CHAR_CONST
%token <myFloatVal> FLOAT_CONST
%token <myDoubleVal> DOUBLE_CONST
%token <myStringVal> STRING_LITERAL

%token PLUS MINUS MULT DIVIDE ARROW INCREMENT DECREMENT RSHIFT LSHIFT LT GT LEQ GEQ EQ NEQ BITWISE_OR LOGICAL_OR BITWISE_AND LOGICAL_AND XOR BITWISE_NOT LOGICAL_NOT ELLIPSIS MODULO ASGN ENUMERATION_CONST
%token ADD_ASGN SUB_ASGN MULT_ASGN DIV_ASGN MOD_ASGN LSHIFT_ASGN RSHIFT_ASGN AND_ASGN OR_ASGN XOR_ASGN 

%nonassoc ')'
%nonassoc ELSE
%start translation_unit

/*Rules*/
%%
constant:
                    INTEGER_CONST
                    | FLOAT_CONST
                    | CHAR_CONST
                    ;

primary_expression:
                    IDENTIFIER
                    { printf("primary_expression -> identifier\n"); }
                    | constant
                    { printf("primary_expression -> constant\n"); }
                    | STRING_LITERAL
                    { printf("primary_expression -> string-literal\n"); }
                    | '(' expression ')'
                    { printf("primary_expression -> ( expression )\n"); }
                    ;


postfix_expression:
                    primary_expression
                    { printf("postfix_expression -> primary_expression\n"); }
                    | postfix_expression '[' expression ']'
                    { printf("postfix_expression -> postfix_expression [ expression ]\n"); }
                    | postfix_expression '(' argument_expression_list_opt ')'
                    { printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
                    | postfix_expression '.' IDENTIFIER
                    { printf("postfix_expression -> postfix_expression . identifier\n"); }
                    | postfix_expression ARROW IDENTIFIER
                    { printf("postfix_expression -> postfix_expression -> identifier\n"); }
                    | postfix_expression INCREMENT
                    { printf("postfix_expression -> postfix_expression ++\n"); }
                    | postfix_expression DECREMENT
                    { printf("postfix_expression -> postfix_expression --\n"); }
                    | '(' type_name ')' '{' initializer_list '}'
                    { printf("postfix_expression -> ( type_name ) { initializer_list }\n"); }
                    | '(' type_name ')' '{' initializer_list ',' '}'     
                    { printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
                    ;  

argument_expression_list:
                            assignment_expression
                            { printf("argument_expression_list -> assignment_expression\n"); }
                            | argument_expression_list ',' assignment_expression   
                            { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); } 
                            ;

argument_expression_list_opt:
                                argument_expression_list
                                | /* epsilon */
                                ;

unary_expression:
                    postfix_expression
                    { printf("unary_expression -> postfix_expression\n"); }
                    | INCREMENT unary_expression
                    { printf("unary_expression -> ++ unary_expression\n"); }
                    | DECREMENT unary_expression
                    { printf("unary_expression -> −− unary_expression\n"); }
                    | unary_operator cast_expression
                    { printf("unary_expression -> unary_operator cast_expression\n"); }
                    | SIZEOF unary_expression
                    { printf("unary_expression -> sizeof unary_expression\n"); }
                    | SIZEOF '(' type_name ')'  
                    { printf("unary_expression -> sizeof ( type_name ) \n"); }
                    ;    

/*Changes made here*/
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

/*Made changes here*/
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
/* changes made here */
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

/* Check convention */
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

enum_specifier:
                    ENUM identifier_opt '{' enumerator '}'
                    { printf("enum_specifier -> enum identifier_opt { enumerator_list }\n"); }
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
                    IDENTIFIER ASGN constant_expression
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
