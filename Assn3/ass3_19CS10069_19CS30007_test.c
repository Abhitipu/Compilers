#include<stdio.h>

int main() {

    // Lets test some data types first
    int n;
    n = 34;
    float f;
    f = 3.4e-12;
    char c;
    c = 'X';
    c = '-';     

    /*
     * Here we will be exploring some strings
     * We'll do these things:
     * 1. We'll convert a string to upper case.
     * 2. Then we'll convert it back to lower case.
     */
    
    char str[] = "Oh dear! When will this online sem end?!";
    // Lets convert the string tp upper case
    for(register int i = 0; str[i] != '\0'; i++) {
        if(str[i] <= 'z' && str[i] >= 'a')
            str[i] -= 32;
    }

    // Lets go back to lower case using a while loop now
    register int i = 0;
    while(str[i] != '\0') {
        if(str[i] <= 'Z' && str[i] >= 'A')
            str[i] += 32;
        i++;
    }
    
    char nullChar = '\0';
    
	return 0;	
}
