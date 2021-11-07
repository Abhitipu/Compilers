// Our famous gcd algorithm
int printInt(int);
int printStr(char * p);
int fib(int n);
int readInt(int *n);

int gcdAlgorithm(int a, int b) { 
    if (a == 0) 
        return b; 
    else 
        return gcdAlgorithm(b % a, a); 
} 

int main()  {  
    printStr("Program to find gcd of two numbers\n");

    printStr("Enter the first number: ");
    int num1;
    readInt(&num1);

    printStr("Enter the second number: ");
    int num2;
    readInt(&num2);

    int res = gcdAlgorithm(num1, num2);
    printStr("The gcd comes out to be: "); printInt(res); printStr("\n\n");

    return 0;  
}  