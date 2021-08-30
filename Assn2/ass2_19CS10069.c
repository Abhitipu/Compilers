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
		:"S"(str), "d"(mxn)
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
	
	*n = res;
	return OK;
}

int printInt(int n) {
	// prints a signed integer with left alignment
	// Sign reqd
	// Success ? no of chars printed : ERR
	
	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(str), "d"(sz)
	);
}

int readFlt(float *f) {
	// Reads a floating point no in %f format 
	// success ? OK : ERR
	
	__asm__ __volatile__(
		"movl $0, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(str), "d"(sz)
	);
}

int printFlt(float f) {
	// prints floating point number with left alignment
	// Need to print sign for -ve number
	// Decimal point needed in all cases to distinguish from int
	// Return : Success ? no of chars printed : Err
	
	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(str), "d"(sz)
	);
}
