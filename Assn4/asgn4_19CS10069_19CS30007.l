/*definitions for each token*/
%{
    #include <stdio.h>  // check this, if it does not work replace <, > by ""
    #include "y.tab.h"
%}

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

{IDENTIFIER}                {return IDENTIFIER;}
{FLOATING_CONST}            {return FLOATING_CONST;}
{INTEGER_CONST}             {return INTEGER_CONST;}
{CHARACTER_CONST}           {return CHARACTER_CONST;}
{ENUMERATION_CONST}         {return ENUMERATION_CONST;}
{STRING_LITERAL}            {return STRING_LITERAL;}

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
"&"                         {return '&';                }                                 
"*"                         {return MULT;               }                                 
"+"                         {return '+';                }                                 
"-"                         {return MINUS;              }                                 
"~"                         {return '~';                }                                 
"!"                         {return '!';                }                                 
"/"                         {return '/';                }                                 
"%"                         {return '%';                }                                 
"<<"                        {return LSHIFT;             }                                  
">>"                        {return RSHIFT;             }                                  
"<"                         {return '<';                }                                 
">"                         {return '>';                }                                 
"<="                        {return LEQ;                }                                  
">="                        {return GEQ;                }                                  
"=="                        {return EQ;                 }                                  
"!="                        {return NEQ;                }                                  
"^"                         {return '^';                }                                 
"|"                         {return '|';                }                           
"&&"                        {return AND;                }                                  
"||"                        {return OR;                 }                           
"?"                         {return '?';                }                                 
":"                         {return ':';                }                                 
";"                         {return ';';                }                                 
"..."                       {return ELLIPSIS;           }                               
"="                         {return '=';                }                                 
"*="                        {return MULT_ASSIGN;        }                                  
"/="                        {return DIV_ASSIGN;         }                                  
"%="                        {return MOD_ASSIGN;         }                                  
"+="                        {return ADD_ASSIGN;         }                                  
"-="                        {return SUB_ASSIGN;         }                                  
"<<="                       {return LSHIFT_ASSIGN;      }                               
">>="                       {return RSHIFT_ASSIGN;      }                               
"&="                        {return BIN_AND_ASSIGN;     }                                  
"^="                        {return BIN_XOR_ASSIGN;     }                                  
"|="                        {return BIN_XOR_ASSIGN;     }                        
","                         {return ',';                }                                 
"#"                         {return '#';                }                                 


"//"                        {BEGIN(SINGLE_COMMENT_STATE); return BEGIN_SINGLE_COMMENT;}
<SINGLE_COMMENT_STATE>"\n"  {BEGIN(INITIAL); return END_SINGLE_COMMENT;}
<SINGLE_COMMENT_STATE>.     {return SINGLE_COMMENT;}
"/*"                        {BEGIN(MULTI_COMMENT_STATE); return BEGIN_MULTI_COMMENT;}
<MULTI_COMMENT_STATE>"*/"   {BEGIN(INITIAL); return END_MULTI_COMMENT;}
<MULTI_COMMENT_STATE>.      {return MULTI_COMMENT;}
<MULTI_COMMENT_STATE>"\n"   {return MULTI_COMMENT;}
[ \t\n]                     {return WHITE_SPACE;}
%%
