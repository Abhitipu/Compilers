#include "myl.h"

int printStr(char *str) {
	// Prints a string of characters
	// Terminated by '\0'
	// Returns the number of characters printed
	
	int sz = 0;
	while(str[sz] != '\0')
		sz++;

	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(str), "d"(sz)
	);
	
	return sz;
}

int readInt(int *n) {
	// Reads a signed integer in %d format
	// Returns OK for success and ERR on failure
	
	int mxn = 20;
	char temp[mxn];

	__asm__ __volatile__(
		"movl $0, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(temp), "d"(mxn)
	);

	int ptr = 0, neg = 0;
	if(temp[ptr] == '-') {
		neg = 1;
		ptr++;
	} else if(temp[ptr] == '+') {
		ptr++;
	} else if(temp[ptr] < '0' || temp[ptr] > '9') {
		return ERR;
	}

	int res = 0;
	for( ;temp[ptr] != ' ' && temp[ptr] != '\0' && temp[ptr] != '\n'; ptr++) {
		if(temp[ptr] >= '0' && temp[ptr] <= '9') {
			res = res*10 + (temp[ptr] - '0');
		} else {
			return ERR;
		}
	}

	if(neg)
		res = -res;
	
	*n = res;
	return OK;
}

int printInt(int n) {
	// prints a signed integer with left alignment
	// Sign reqd
	// Success ? no of chars printed : ERR
	
	int mxn = 20;
	char temp[mxn];
	int ptr = 0, neg = 0;
		
	if(n == 0) {
		temp[ptr++] = '0';
	} else {
		if(n < 0) {
			n = -n;
			neg = 1;
			temp[ptr++] = '-';
		}
		int dig = 0;
		int m = n;
		
		for(; m > 0; dig++)
			m /= 10;

		ptr += dig;
		m = n;
		for(; dig > 0; dig--){
			temp[dig-1+neg] = (char)(m%10 + '0');
			m /= 10;
		}
	}

	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(temp), "d"(ptr)
	);
	return OK;
}

int readFlt(float *f) {
	// Reads a floating point no in %f format 
	// success ? OK : ERR
	
	int mxn = 66;
	char temp[mxn];
	__asm__ __volatile__(
		"movl $0, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(temp), "d"(mxn)
	);
	return OK;
}

int printFlt(float f) {
	// prints floating point number with left alignment
	// Need to print sign for -ve number
	// Decimal point needed in all cases to distinguish from int
	// Return : Success ? no of chars printed : Err
	int mxn = 66;
	char temp[mxn];
	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(temp), "d"(mxn)
	);
	return mxn;
}
