%{

%}

KEYWORD         "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|""|"oat"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"Bool"|"continue"|"if"|"static"|"Complex"|"default"|"inline"|"struct"|"Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"
%%
{KEYWORD}       {printf("Keyword = %s\n", yytext);}
\n              {return 0;}

%%
