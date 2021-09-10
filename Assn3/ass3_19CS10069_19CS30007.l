%{

%}
DIGIT           [0-9]
NONDIGIT        [_a-zA-Z]
NONZERO-DIGIT   [1-9]
INTEGER-CONST   {NONZERO-DIGIT}{DIGIT}*

SIGN            [+-]
DIGIT-SEQUENCE  {DIGIT}+


KEYWORD         "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|""|"oat"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"Bool"|"continue"|"if"|"static"|"Complex"|"default"|"inline"|"struct"|"Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"
IDENTIFIER      [_a-zA-Z]({NONDIGIT}|{DIGIT})*
%%
{KEYWORD}       {printf("Keyword = %s\n", yytext);}
{IDENTIFIER}    {printf("IDENTIFIER = %s\n", yytext);}
{INTEGER-CONST} {printf("INTEGER-CONST = %s\n", yytext);}
\n              
.
%%
