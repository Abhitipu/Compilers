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

KEYWORD             "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|""|"oat"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"Bool"|"continue"|"if"|"static"|"Complex"|"default"|"inline"|"struct"|"Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"
IDENTIFIER          [_a-zA-Z]({NONDIGIT}|{DIGIT})*
%%
{KEYWORD}           {printf("Keyword = %s\n", yytext);}
{IDENTIFIER}        {printf("IDENTIFIER = %s\n", yytext);}
{FLOATING-CONST}    {printf("FLOATING-CONST = %s\n", yytext);}
{INTEGER-CONST}     {printf("INTEGER-CONST = %s\n", yytext);}
\n              
.
%%
