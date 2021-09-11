%{

%}
DIGIT               [0-9]
NONDIGIT            [_a-zA-Z]
NONZERO-DIGIT       [1-9]
INTEGER-CONST       ({NONZERO-DIGIT}{DIGIT})*|[0]+

SIGN                [+-]
DIGIT-SEQUENCE      {DIGIT}+
EXPONENT-PART       [Ee]({SIGN}?){DIGIT-SEQUENCE}
FRACTIONAL-CONST    (({DIGIT-SEQUENCE}?)("."){DIGIT-SEQUENCE})|({DIGIT-SEQUENCE}("."))
FLOATING-CONST      ({FRACTIONAL-CONST}({EXPONENT-PART}?))|({DIGIT-SEQUENCE}{EXPONENT-PART})

ESCAPE-SEQUENCE     "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\t"|"\\v"
C-CHAR              [^\\\'\n]|{ESCAPE-SEQUENCE}
C-CHAR-SEQUENCE     {C-CHAR}+
CHARACTER-CONST     \'{C-CHAR-SEQUENCE}\'

S-CHAR              [^\\\"\n]|{ESCAPE-SEQUENCE}
S-CHAR-SEQUENCE     {S-CHAR}+
STRING-LITERAL      \"{S-CHAR-SEQUENCE}?\"

KEYWORD             "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"_Bool"|"continue"|"if"|"static"|"_Complex"|"default"|"inline"|"struct"|"_Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"
IDENTIFIER          [_a-zA-Z]({NONDIGIT}|{DIGIT})*
%%
{KEYWORD}           {printf("KEYWORD = %s\n", yytext);}
{IDENTIFIER}        {printf("IDENTIFIER = %s\n", yytext);}
{FLOATING-CONST}    {printf("FLOATING-CONST = %s\n", yytext);}
{INTEGER-CONST}     {printf("INTEGER-CONST = %s\n", yytext);}
{CHARACTER-CONST}   {printf("CHARACTER-CONST = %s\n", yytext);}
{STRING-LITERAL}    {printf("STRING-LITERAL = %s\n", yytext);}

\n              
.
%%
