%{
    #define KEYWORD 260
    #define IDENTIFIER 261
    #define FLOATING-CONST 262
    #define INTEGER-CONST 263
    #define CHARACTER-CONST 264
    #define ESCAPE-SEQUENCE 265
    #define STRING-LITERAL 266
    #define PUNCTUATOR 267
    #define BEGIN-SINGLE-COMMENT 268
    #define SINGLE-COMMENT 269
    #define BEGIN-SINGLE-COMMENT 270
    #define END-SINGLE-COMMENT 271
    #define MULTI-COMMENT 272
    #define BEGIN-MULTI-COMMENT 273
    #define END-MULTI-COMMENT 274
%}

%x MULTI_COMMENT_STATE
%x SINGLE_COMMENT_STATE

DIGIT                       [0-9]
NONDIGIT                    [_a-zA-Z]
NONZERO-DIGIT               [1-9]
INTEGER-CONST               {NONZERO-DIGIT}{DIGIT}*

SIGN                        [+-]
DIGIT-SEQUENCE              {DIGIT}+
EXPONENT-PART               [Ee]({SIGN}?){DIGIT-SEQUENCE}
FRACTIONAL-CONST            (({DIGIT-SEQUENCE}?)("."){DIGIT-SEQUENCE})|({DIGIT-SEQUENCE}("."))
FLOATING-CONST              ({FRACTIONAL-CONST}({EXPONENT-PART}?))|({DIGIT-SEQUENCE}{EXPONENT-PART})

ESCAPE-SEQUENCE             "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\t"|"\\v"
C-CHAR                      [^\\\'\n]|{ESCAPE-SEQUENCE}
C-CHAR-SEQUENCE             {C-CHAR}+
CHARACTER-CONST             \'{C-CHAR-SEQUENCE}\'

KEYWORD                     "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"_Bool"|"continue"|"if"|"static"|"_Complex"|"default"|"inline"|"struct"|"_Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"
IDENTIFIER                  [_a-zA-Z]({NONDIGIT}|{DIGIT})*

%%
{KEYWORD}                   {printf("KEYWORD = %s\n", yytext); return KEYWORD;}
{IDENTIFIER}                {printf("IDENTIFIER = %s\n", yytext); return IDENTIFIER;}
{FLOATING-CONST}            {printf("FLOATING-CONST = %s\n", yytext); return FLOATING-CONST;}
{INTEGER-CONST}             {printf("INTEGER-CONST = %s\n", yytext); return INTEGER-CONST;}
{CHARACTER-CONST}           {printf("CHARACTER-CONST = %s\n", yytext); return CHARACTER-CONST;}
{ESCAPE-SEQUENCE}           {printf("ESCAPE-SEQUENCE = %s\n", yytext); return ESCAPE-SEQUENCE;}
{STRING-LITERAL}            {printf("STRING-LITERAL = %s\n", yytext); return STRING-LITERAL;}
{PUNCTUATORS}               {printf("PUNCTUATORS = %s\n", yytext); return PUNCTUATOR;}
\n              
.

"//"                        {BEGIN(SINGLE-COMMENT-STATE); return BEGIN-SINGLE-COMMENT;}
<SINGLE-COMMENT-STATE>"\n"  {BEGIN(INITIAL); return END-SINGLE-COMMENT;}
<SINGLE-COMMENT-STATE>.     {return SINGLE-COMMENT;}

"/*"                        {BEGIN(MULTI-COMMENT-STATE); return BEGIN-MULTI-COMMENT;}
<MULTI-COMMENT-STATE>"*/"   {BEGIN(INITIAL); return END-MULTI-COMMENT;}
<MULTI-COMMENT-STATE>.      {return MULTI-COMMENT;}
<MULTI-COMMENT-STATE>"\n"   {return MULTI-COMMENT;}
%%
