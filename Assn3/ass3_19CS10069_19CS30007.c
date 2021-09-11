int main() { 
    int token;
    while (token = yylex()) {
        switch (token) {
            case INT:       printf("<KEYWORD, %d, %s>\n",token, yytext); 
                            break;
            case FLOAT:     printf("<KEYWORD, %d, %s>\n",token, yytext); 
                            break;
            case ID:        printf("<IDENTIFIER, %d, %s>\n",token, yytext); 
                            break;
            case PLUS:      printf("<OPERATOR, %d, %s>\n",token, yytext); 
                            break;
            case MULT:      printf("<OPERATOR, %d, %s>\n",token, yytext); 
                            break;
            case ASSIGN:    printf("<OPERATOR, %d, %s>\n",token, yytext); 
                            break;
            case LBRACE:    printf("<SPECIAL SYMBOL, %d, %s>\n",token, yytext); 
                            break;
            case RBRACE:    printf("<SPECIAL SYMBOL, %d, %s>\n",token, yytext); 
                            break;
            case SEMICOLON: printf("<PUNCTUATION, %d, %s>\n",token, yytext); 
                            break;
            case CONST:     printf("<INTEGER CONSTANT, %d, %s>\n",token, yytext); 
                            break;
        }
    }
    return 0;
}
