#include "stdio.h"
#include "y.tab.h"

extern int yyparse();
// yyparse() returns a value of 0 if the input it parses is valid according to the given grammar rules. It returns a 1 if the input is incorrect and error recovery is impossible
int main() 
{
    extern int yydebug;
    yydebug = 1;

    int error = yyparse();

    if(error) {
        printf("Error!\n");
    }
    else {
        printf("Done!\n");
    } 
    return 0;
}
