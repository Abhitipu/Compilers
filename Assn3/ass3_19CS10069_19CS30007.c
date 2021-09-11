#include <stdio.h>

int main() {
    int token;
    while (token = yylex()) {
        switch (token) {
            case KEYWORD:                   printf("<KEYWORD, %d, %s>\n", token, yytext); 
                                            break;
            case IDENTIFIER:                printf("<IDENTIFIER, %d, %s>\n", token, yytext); 
                                            break;
            case FLOATING_CONST:            printf("<FLOATING_CONST, %d, %s>\n", token, yytext); 
                                            break;
            case INTEGER_CONST:             printf("<INTEGER_CONST, %d, %s>\n", token, yytext); 
                                            break;
            case CHARACTER_CONST:           printf("<CHARACTER_CONST, %d, %s>\n", token, yytext); 
                                            break;
            case ESCAPE_SEQUENCE:           printf("<ESCAPE_SEQUENCE, %d, %s>\n", token, yytext); 
                                            break;
            case STRING_LITERAL:            printf("<STRING_LITERAL, %d, %s>\n", token, yytext); 
                                            break;
            case PUNCTUATOR:                printf("<PUNCTUATOR, %d, %s>\n", token, yytext); 
                                            break;
            case BEGIN_SINGLE_COMMENT:      printf("<BEGIN_SINGLE_COMMENT, %d, %s>\n", token, yytext); 
                                            break;
            case SINGLE_COMMENT:            printf("%s", yytext); 
                                            break;
            case END_SINGLE_COMMENT:        printf("\n<END_SINGLE_COMMENT, %d, >\n",token); 
                                            break;
            case BEGIN_MULTI_COMMENT:       printf("<BEGIN_MULTI_COMMENT, %d, %s>\n", token, yytext); 
                                            break;
            case MULTI_COMMENT:             printf("%s", yytext); 
                                            break;
            case END_MULTI_COMMENT:         printf("\n<END_MULTI_COMMENT, %d, %s>\n", token, yytext); 
                                            break;
            case WHITE_SPACE:               break;
            default:                        break;
        }
    }
    return 0;
}
