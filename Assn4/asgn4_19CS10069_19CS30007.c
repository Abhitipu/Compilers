#include "stdio.h"
#include "y.tab.h"

extern int yyparse();

int main() 
{
    extern int yydebug;
    yydebug = 1;            // yydebug is used for printing debug info

    int works = yyparse();

    if(works) {
        printf("Done!\n");
    } else {
        printf("Error!\n");
    }
    return 0;
}
