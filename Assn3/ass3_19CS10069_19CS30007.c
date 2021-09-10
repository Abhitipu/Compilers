#include <stdio.h>
extern yyin;
int main()
{
    // FILE *fp = fopen("ass3_19CS10069_19CS30007_test.c", "r");
    // yyin = fp;
    yylex();
    // fclose(fp);
    return 0;
}