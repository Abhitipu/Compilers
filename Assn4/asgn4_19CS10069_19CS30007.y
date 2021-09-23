/*Declarations*/
%{
    #include<stdio.h>
    extern int yylex();
    extern void yyerror(char*);
%}

%union {
    int myIntVal;
    char myCharVal;
    float myFloatVal;
    double myDoubleVal;
    char* myStringVal;
}

%token BREAK RETURN CASE FOR WHILE GOTO SIZEOF CONTINUE IF DO SWITCH ELSE
%token FLOAT SHORT CHAR _BOOL _IMAGINARY _COMPLEX INT DOUBLE LONG VOID SIGNED AUTO UNSIGNED 
%token ENUM UNION STRUCT TYPEDEF 
%token CONST DEFAULT STATIC REGISTER RESTRICT VOLATILE EXTERN INLINE 

%token <myStringVal> IDENTIFIER
%token <myIntVal> INTEGER_CONST
%token <myCharVal> CHAR_CONST
%token <myFloatVal> FLOAT_CONST
%token <myDoubleVal> DOUBLE_CONST
%token <myStringVal> STRING_LITERAL

%token PLUS MINUS MULT DIVIDE ARROW INCREMENT DECREMENT RSHIFT LSHIFT LEQ GEQ EQ NEQ OR AND XOR NOT ELLIPSIS
%token ADD_ASGN SUB_ASGN MULT_ASGN DIV_ASGN MOD_ASGN LSHIFT_ASGN RSHIFT_ASGN AND_ASGN OR_ASGN XOR_ASGN 

%%
/*Rules*/
%%
/*Auxiliaries*/
