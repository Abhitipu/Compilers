/*definitions for each token*/
%{
    #include "stdio.h"
    #include "ass5_19CS10069_19CS30007_translator.h"
    #include "y.tab.h"
    int line = 1;

    extern YYSTYPE yylval;
    extern int line;
    line = 1; // check
%}

/* %option noyywrap check */ 

/* Start conditions */
%x MULTI_COMMENT_STATE
%x SINGLE_COMMENT_STATE

/* Regular expressions for different tokens */
DIGIT                       [0-9]
NONDIGIT                    [_a-zA-Z]
NONZERO-DIGIT               [1-9]
INTEGER_CONST               ({NONZERO-DIGIT}{DIGIT}*)|[0]+

SIGN                [+-]
DIGIT-SEQUENCE      {DIGIT}+
EXPONENT-PART       [Ee]({SIGN}?){DIGIT-SEQUENCE}
FRACTIONAL-CONST    (({DIGIT-SEQUENCE}?)("."){DIGIT-SEQUENCE})|({DIGIT-SEQUENCE}("."))
FLOATING_CONST      ({FRACTIONAL-CONST}({EXPONENT-PART}?))|({DIGIT-SEQUENCE}{EXPONENT-PART})

ESCAPE_SEQUENCE     "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\t"|"\\v"|"\\0"
C-CHAR              [^\\\'\n]|{ESCAPE_SEQUENCE}
C-CHAR-SEQUENCE     {C-CHAR}+
CHARACTER_CONST     \'{C-CHAR-SEQUENCE}\'

S-CHAR              [^\\\"\n]|{ESCAPE_SEQUENCE}
S-CHAR-SEQUENCE     {S-CHAR}+
STRING_LITERAL      \"{S-CHAR-SEQUENCE}?\"

PUNCTUATOR          "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"
KEYWORD             "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"_Bool"|"continue"|"if"|"static"|"_Complex"|"default"|"inline"|"struct"|"_Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"
IDENTIFIER          [_a-zA-Z]({NONDIGIT}|{DIGIT})*

ENUMERATION_CONST   {IDENTIFIER}

/*Rules begin*/
%%

"auto"                      {return AUTO;}
"enum"                      {return ENUM;}
"restrict"                  {return RESTRICT;}    
"unsigned"                  {return UNSIGNED;}    
"break"                     {return BREAK;}
"extern"                    {return EXTERN;}    
"return"                    {return RETURN;}    
"void"                      {return VOID;}
"case"                      {return CASE;}
"float"                     {return FLOAT;}
"short"                     {return SHORT;}
"volatile"                  {return VOLATILE;}    
"char"                      {return CHAR;}
"for"                       {return FOR;}
"signed"                    {return SIGNED;}    
"while"                     {return WHILE;}
"const"                     {return CONST;}
"goto"                      {return GOTO;}
"sizeof"                    {return SIZEOF;}    
"_Bool"                     {return _BOOL;}
"continue"                  {return CONTINUE;}    
"if"                        {return IF;}
"static"                    {return STATIC;}    
"_Complex"                  {return _COMPLEX;}    
"default"                   {return DEFAULT;}    
"inline"                    {return INLINE;}    
"struct"                    {return STRUCT;}    
"_Imaginary"                {return _IMAGINARY;}        
"do"                        {return DO;}
"int"                       {return INT;}
"switch"                    {return SWITCH;}    
"double"                    {return DOUBLE;}    
"long"                      {return LONG;}
"typedef"                   {return TYPEDEF;}    
"else"                      {return ELSE;}
"register"                  {return REGISTER;}    
"union"                     {return UNION;}

{IDENTIFIER}                {
                                yylval.symp = ST->lookup(yytext);
                                return IDENTIFIER;
                            }
{FLOATING_CONST}            {
                                yylval.float_val = atof(yytext); // check
                                return FLOAT_CONST;
                            }
{INTEGER_CONST}             {
                                yylval.int_val = atoi(yytext);
                                return INTEGER_CONST;
                            }
{CHARACTER_CONST}           {
                                yylval.char_val = yytext;
                                return CHAR_CONST;
                            }
"\n"                        { line++; printf("\n#################### LINE NO : %d ####################\n", line); }
{STRING_LITERAL}            {
                                yylval.char_val = yytext; //check
                                return STRING_LITERAL;
                            }

"["                         {return '[';                }                                 
"]"                         {return ']';                }                                 
"("                         {return '(';                }                                 
")"                         {return ')';                }                                 
"{"                         {return '{';                }                                 
"}"                         {return '}';                }                                 
"."                         {return '.';                }                                 
"->"                        {return ARROW;              }                                  
"++"                        {return INCREMENT;          }                                  
"--"                        {return DECREMENT;          }                                  
"&"                         {return BITWISE_AND;        }                                 
"*"                         {return MULT;               }                                 
"+"                         {return PLUS;               }                                 
"-"                         {return MINUS;              }                                 
"~"                         {return BITWISE_NOT;        }                                 
"!"                         {return LOGICAL_NOT;        }                                 
"/"                         {return DIVIDE;             }                                 
"%"                         {return MODULO;             }                                 
"<<"                        {return LSHIFT;             }                                  
">>"                        {return RSHIFT;             }                                  
"<"                         {return LT;                 }                                 
">"                         {return GT;                 }                                 
"<="                        {return LEQ;                }                                  
">="                        {return GEQ;                }                                  
"=="                        {return EQ;                 }                                  
"!="                        {return NEQ;                }                                  
"^"                         {return XOR;                }                                 
"|"                         {return BITWISE_OR;         }                           
"&&"                        {return LOGICAL_AND;        }                                  
"||"                        {return LOGICAL_OR;         }                           
"?"                         {return '?';                }                                 
":"                         {return ':';                }                                 
";"                         {return ';';                }                                 
"..."                       {return ELLIPSIS;           }                               
"="                         {return ASGN;               }                                 
"*="                        {return MULT_ASGN;          }                                  
"/="                        {return DIV_ASGN;           }                                  
"%="                        {return MOD_ASGN;           }                                  
"+="                        {return ADD_ASGN;           }                                  
"-="                        {return SUB_ASGN;           }                                  
"<<="                       {return LSHIFT_ASGN;        }                               
">>="                       {return RSHIFT_ASGN;        }                               
"&="                        {return AND_ASGN;           }                                  
"^="                        {return XOR_ASGN;           }                                  
"|="                        {return OR_ASGN;            }                        
","                         {return ',';                }                                 
"#"                         {return '#';                }                                 


"//"                        {BEGIN(SINGLE_COMMENT_STATE);}
<SINGLE_COMMENT_STATE>"\n"  {line++; printf("\n#################### LINE NO : %d ####################\n", line);BEGIN(INITIAL);}
<SINGLE_COMMENT_STATE>.     {;}
"/*"                        {BEGIN(MULTI_COMMENT_STATE);}
<MULTI_COMMENT_STATE>"*/"   {BEGIN(INITIAL);}
<MULTI_COMMENT_STATE>.      {;}
<MULTI_COMMENT_STATE>"\n"   {line++; printf("\n#################### LINE NO : %d ####################\n", line);}
[ \t]                       {;}
%%

int yywrap (void) {return 1;}
