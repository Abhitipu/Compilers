#include <stdio.h>

extern int yylex();
int main()
{
    int token;
    while (token = yylex()) {
        switch (token) {
            case KEYWORD: printf("KEYWORD = %s\n", yytext); break;
            case IDENTIFIER: printf("IDENTIFIER = %s\n", yytext); break;
            case FLOATING_CONST: printf("FLOATING_CONST = %s\n", yytext); break;
            case INTEGER_CONST: printf("INTEGER_CONST = %s\n", yytext); break;
            case CHARACTER_CONST: printf("CHARACTER_CONST = %s\n", yytext); break;
            case ESCAPE_SEQUENCE: printf("ESCAPE_SEQUENCE = %s\n", yytext); break;
            case STRING_LITERAL: printf("STRING_LITERAL = %s\n", yytext); break;
            case PUNCTUATORS: printf("PUNCTUATORS = %s\n", yytext); break;
            case BEGIN_SINGLE_COMMENT: printf("BEGIN_SINGLE_COMMENT = %s\n", yytext); break;
            case SINGLE_COMMENT_STATE: printf("SINGLE_COMMENT_STATE = %s\n", yytext); break;
            case END_SINGLE_COMMENT: printf("END_SINGLE_COMMENT = %s\n", yytext); break;
            case SINGLE_COMENT: printf("SINGLE_COMENT = %s\n", yytext); break;
            case BEGIN_MULTI_COMMENT: printf("BEGIN_MULTI_COMMENT = %s\n", yytext); break;
            case MULTI_COMMENT: printf("MULTI_COMMENT = %s\n", yytext); break;
            case END_MULTI_COMMENT: printf("END_MULTI_COMMENT = %s\n", yytext); break;
        }
    }
}