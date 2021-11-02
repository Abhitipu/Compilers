// Our famous gcd algorithm
int printInt(int);
int printStr(char * p);
int fib(int n);

int gcdAlgorithm(int a, int b) { 
    if (a == 0) return b; 
    return gcdAlgorithm(b % a, a); 
} 

int main()  
{  
    int num1 = 10;
    int num2 = 20;

    if(num2 != 0) {
        int g = euclidGCD(num1, num2);   // recursive function call
        num1 /= g;
        num2 /= g;
    } else {
        // cant divide by zeroooo!!
    }

    int xx = fib(100);  // this will take ages

    return 0;  
}  

// Our slow fibonacci function
int fib(int n) {
	return fib(n-1) + fib(n-2);
}