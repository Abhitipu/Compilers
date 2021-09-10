%{

%}
DIGIT               [0-9]
NONDIGIT            [_a-zA-Z]
NONZERO-DIGIT       [1-9]
INTEGER-CONST       {NONZERO-DIGIT}{DIGIT}*

SIGN                [+-]
DIGIT-SEQUENCE      {DIGIT}+
EXPONENT-PART       [Ee]({SIGN}{0,1}){DIGIT-SEQUENCE}
FRACTIONAL-CONST    (({DIGIT-SEQUENCE}{0,1})("."){DIGIT-SEQUENCE})|({DIGIT-SEQUENCE}("."))
FLOATING-CONST      ({FRACTIONAL-CONST}({EXPONENT-PART}{0,1}))|({DIGIT-SEQUENCE}{EXPONENT-PART})

ESCAPE-SEQUENCE     "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\t"|"\\v"

KEYWORD             "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"_Bool"|"continue"|"if"|"static"|"_Complex"|"default"|"inline"|"struct"|"_Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"
IDENTIFIER          [_a-zA-Z]({NONDIGIT}|{DIGIT})*
%%
{KEYWORD}           {printf("KEYWORD = %s\n", yytext);}
{IDENTIFIER}        {printf("IDENTIFIER = %s\n", yytext);}
{FLOATING-CONST}    {printf("FLOATING-CONST = %s\n", yytext);}
{INTEGER-CONST}     {printf("INTEGER-CONST = %s\n", yytext);}
{ESCAPE-SEQUENCE}   {printf("ESCAPE-SEQUENCE = %s\n", yytext);}
\n              
.
%%
