%{
    #define KEYWORD 260
    #define IDENTIFIER 261
    #define FLOATING_CONST 262
    #define INTEGER_CONST 263
    #define CHARACTER_CONST 264
    #define ESCAPE_SEQUENCE 265
    #define STRING_LITERAL 266
    #define PUNCTUATOR 267
    #define SINGLE_COMMENT 268
    #define BEGIN_SINGLE_COMMENT 269
    #define END_SINGLE_COMMENT 270
    #define MULTI_COMMENT 271
    #define BEGIN_MULTI_COMMENT 272
    #define END_MULTI_COMMENT 273
%}


%x MULTI_COMMENT_STATE
%x SINGLE_COMMENT_STATE

DIGIT                       [0-9]
NONDIGIT                    [_a-zA-Z]
NONZERO-DIGIT               [1-9]
INTEGER_CONST               {NONZERO-DIGIT}{DIGIT}*

SIGN                [+-]
DIGIT-SEQUENCE      {DIGIT}+
EXPONENT-PART       [Ee]({SIGN}?){DIGIT-SEQUENCE}
FRACTIONAL-CONST    (({DIGIT-SEQUENCE}?)("."){DIGIT-SEQUENCE})|({DIGIT-SEQUENCE}("."))
FLOATING_CONST      ({FRACTIONAL-CONST}({EXPONENT-PART}?))|({DIGIT-SEQUENCE}{EXPONENT-PART})

ESCAPE_SEQUENCE     "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\t"|"\\v"
C-CHAR              [^\\\'\n]|{ESCAPE_SEQUENCE}
C-CHAR-SEQUENCE     {C-CHAR}+
CHARACTER_CONST     \'{C-CHAR-SEQUENCE}\'

S-CHAR              [^\\\"\n]|{ESCAPE_SEQUENCE}
S-CHAR-SEQUENCE     {S-CHAR}+
STRING_LITERAL      \"{S-CHAR-SEQUENCE}?\"

PUNCTUATORS         "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"
KEYWORD             "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"_Bool"|"continue"|"if"|"static"|"_Complex"|"default"|"inline"|"struct"|"_Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"
IDENTIFIER          [_a-zA-Z]({NONDIGIT}|{DIGIT})*
%%
{KEYWORD}                   {printf("KEYWORD = %s\n", yytext); return KEYWORD;}
{IDENTIFIER}                {printf("IDENTIFIER = %s\n", yytext); return IDENTIFIER;}
{FLOATING_CONST}            {printf("FLOATING_CONST = %s\n", yytext); return FLOATING_CONST;}
{INTEGER_CONST}             {printf("INTEGER_CONST = %s\n", yytext); return INTEGER_CONST;}
{CHARACTER_CONST}           {printf("CHARACTER_CONST = %s\n", yytext); return CHARACTER_CONST;}
{ESCAPE_SEQUENCE}           {printf("ESCAPE_SEQUENCE = %s\n", yytext); return ESCAPE_SEQUENCE;}
{STRING_LITERAL}            {printf("STRING_LITERAL = %s\n", yytext); return STRING_LITERAL;}
{PUNCTUATORS}               {printf("PUNCTUATORS = %s\n", yytext); return PUNCTUATOR;}
"//"                        {BEGIN(SINGLE_COMMENT_STATE); return BEGIN_SINGLE_COMMENT;}
<SINGLE_COMMENT_STATE>"\n"  {BEGIN(INITIAL); return END_SINGLE_COMMENT;}
<SINGLE_COMMENT_STATE>.     {return SINGLE_COMMENT;}

"/*"                        {BEGIN(MULTI_COMMENT_STATE); return BEGIN_MULTI_COMMENT;}
<MULTI_COMMENT_STATE>"*/"   {BEGIN(INITIAL); return END_MULTI_COMMENT;}
<MULTI_COMMENT_STATE>.      {return MULTI_COMMENT;}
<MULTI_COMMENT_STATE>"\n"   {return MULTI_COMMENT;}
%%
