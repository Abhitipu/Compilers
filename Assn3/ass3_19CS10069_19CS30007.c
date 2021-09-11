#include <stdio.h>

int main() {
    int token;
    while (token = yylex()) {
        switch (token) {
            case KEYWORD:                   printf("KEYWORD = %s\n", yytext); 
                                            break;
            case IDENTIFIER:                printf("IDENTIFIER = %s\n", yytext); 
                                            break;
            case FLOATING_CONST:            printf("FLOATING_CONST = %s\n", yytext); 
                                            break;
            case INTEGER_CONST:             printf("INTEGER_CONST = %s\n", yytext); 
                                            break;
            case CHARACTER_CONST:           printf("CHARACTER_CONST = %s\n", yytext); 
                                            break;
            case ESCAPE_SEQUENCE:           printf("ESCAPE_SEQUENCE = %s\n", yytext); 
                                            break;
            case STRING_LITERAL:            printf("STRING_LITERAL = %s\n", yytext); 
                                            break;
            case PUNCTUATOR:                printf("PUNCTUATORS = %s\n", yytext); 
                                            break;
            case BEGIN_SINGLE_COMMENT:      printf("BEGIN_SINGLE_COMMENT = %s", yytext); 
                                            break;
            case END_SINGLE_COMMENT:        printf("\nEND_SINGLE_COMMENT\n"); 
                                            break;
            case SINGLE_COMMENT:            printf("%s", yytext); 
                                            break;
            case BEGIN_MULTI_COMMENT:       printf("BEGIN_MULTI_COMMENT = %s", yytext); 
                                            break;
            case MULTI_COMMENT:             printf("%s", yytext); 
                                            break;
            case END_MULTI_COMMENT:         printf("\nEND_MULTI_COMMENT\n"); 
                                            break;
            case WHITE_SPACE:               break;
            default:                        break;
        }
    }
}
