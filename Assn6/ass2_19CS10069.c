#include "myl.h"

int printStr(char *str) {
	
	int sz = 0;
	while(str[sz] != '\0')		// Counting the number of characters
		sz++;

	__asm__ __volatile__(		// assembly code volatile ensures that there are no optimizations
		"movl $1, %%eax \n\t"	// $1 is used for print mode
		"movq $1, %%rdi \n\t"
		"syscall \n\t"		// calling the print function
		:
		:"S"(str), "d"(sz)
	);
	
	return sz;			// Returning the size of the string
}

int readInt(int *n) {
	
	int mxn = 13;			// since this space would suffice for the decimal representation of an integer
	char temp[mxn];

	__asm__ __volatile__(		// assembly code
		"movl $0, %%eax \n\t"	// difference is that we are using $0 for scan mode
		"movq $1, %%rdi \n\t"
		"syscall \n\t"		// calling the scanf function
		:
		:"S"(temp), "d"(mxn)
	);

	int ptr = 0, neg = 0;
	if(temp[ptr] == '-') {		// for a negative integer
		neg = 1;
		ptr++;
		char cmp[] = "2147483648";	// a corner case Here our logic of reusing the code for positive integers wont work
		int works = 1;

		for(int i = 0; i < 10 && temp[i+ptr] <= '9' && temp[i+ptr] >= '0'; i++) {	// So we special case this out
			if(cmp[i] != temp[i+ptr]) {
				works = 0;
				break;
			}
		}

		if(works) {			// this is the special case for INT_MIN
			*n = -2147483648;
			return 11;
		}

	} else if(temp[ptr] == '+') {		// May also start with +
		ptr++;
	}
	
	if(temp[ptr] < '0' || temp[ptr] > '9') {		// if not an integer, its not a valid integer {+, -}
		return ERR;
	}

	int res = 0;						// res stores the final value

	for( ;temp[ptr] != ' ' && temp[ptr] != '\0' && temp[ptr] != '\n'; ptr++) {
		if(temp[ptr] >= '0' && temp[ptr] <= '9') {	// all should be digits
			res = res*10 + (temp[ptr] - '0');
		} else {					// else it is not an integer
			return ERR;
		}
	}

	if(neg)
		res = -res;		// flag was activated earlier in case of negative values
	
	*n = res;			// storing the result
	return OK;			// well formed integer
}

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