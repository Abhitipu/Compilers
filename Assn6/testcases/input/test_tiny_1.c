//This testfile checks the functioning of the library functions printInt, readInt and printStr

#define OK 1
#define ERROR 0

int printInt(int n) {	
	int mxn = 13;
	char temp[mxn];			// this is the string that will be printed
	int ptr = 0, neg = 0;
	
	if(n == -2147483648) {
		char target[] = "-2147483648";	// again.. the INT_MIN special case
		for(int i = 0; i < 11; i++) {
			temp[ptr++] = target[i];
		}
	} else if(n == 0) {		// n = 0 special case
		temp[ptr++] = '0';
	} else {
		if(n < 0) {		// To use the same logic for negative integers
			n = -n;
			neg = 1;	// negative integer flag
			temp[ptr++] = '-';	// just an additional -sign
		}
		int dig = 0;
		int m = n;
		
		for(; m > 0; dig++)	// counting the number of digits
			m /= 10;

		ptr += dig;		// ptr will store the size of the string to be printed
		m = n;
		for(; dig > 0; dig--){
			temp[dig-1+neg] = (char)(m%10 + '0');	// marking the digits from right to left
			m /= 10;
		}
	}

	__asm__ __volatile__(		// assembler directives
		"movl $1, %%eax \n\t"	// $1 is for print mode
		"movq $1, %%rdi \n\t"	
		"syscall \n\t"		// calling the print function
		:
		:"S"(temp), "d"(ptr)
	);
	return OK;			// success code
}
int printStr(char * c);
int readInt(int *eP);

void NestyFunction(int a) {
	int b = a;
	{
		int c = b + 1;
		b += c;
		printInt(b);
		{
			int d = b + 1;
			b += d;
			printInt(b);
		}
	}
	printInt(b);
	return;
}
int main() {
    NestyFunction(1);
    return 0;
}