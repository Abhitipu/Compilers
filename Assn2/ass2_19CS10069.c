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

int readFlt(float *f) {
	
	int mxn = 66;
	char temp[mxn];			// this is where the input is temporarily stored

	__asm__ __volatile__(
		"movl $0, %%eax \n\t"	// $0 is for the read mode
		"movq $1, %%rdi \n\t"
		"syscall \n\t"		// calling the scanf function
		:
		:"S"(temp), "d"(mxn)
	);

	int integral = 1;		// stores if we are scanning the integer part
	float multiplier = 0.1;		// multiplier for the decimal part
	float finVal = 0.0;		// this is the place where the resulting number is stored
	int expVal = 0, negExp = 0, expReached = 0;

	int ptr = 0, neg = 0;
	if(temp[ptr] == '-') {		// negative real number
		neg = 1;
		++ptr;
	} else if(temp[ptr] == '+') {	// ignore + sign
		++ptr;
	}
	
	if(temp[ptr] < '0' || temp[ptr] > '9') {	// reject cases like {+, -}
		return ERR;
	}

	for(; temp[ptr] != '\0' && temp[ptr] != ' ' && temp[ptr] != '\n'; ptr++) {
		if(temp[ptr] == 'e' || temp[ptr] == 'E') {	// if it is of the form 1.3e13
			if(expReached)
				return ERR;
			expReached = 1;
		} else if(expReached) {				// after the exponent value the remaining part is just an integer
			if(temp[ptr] == '+') {
				++ptr;
			} else if(temp[ptr] == '-') {
				++ptr;
				negExp = 1;
			}
			
			if(temp[ptr] < '0' || temp[ptr] > '9') {
				return ERR;
			} else {
				while(temp[ptr] != '\0' && temp[ptr] != ' ' && temp[ptr] != '\n') {	// storing the exponent in expVal
					if(temp[ptr] >= '0' && temp[ptr] <= '9') {
						expVal = expVal*10 + (temp[ptr] - '0');
					} else {
						return ERR;
					}
					++ptr;
				}
				--ptr;				// this is crucial as we already increment once in the for loop
			}	
		} else if(integral) {				// logic for the integrqal part
			if(temp[ptr] == '.') {
				integral = 0;
			} else if(temp[ptr] <= '9' && temp[ptr] >= '0') {
				finVal = finVal*10 + (temp[ptr] - '0');
			} else {
				return ERR;
			}
		} else {					// logic for the part after decimal point
			if(temp[ptr] <= '9' && temp[ptr] >= 0) {
				finVal += (temp[ptr] - '0')*multiplier;
				multiplier *= 0.1;
			} else {
				return ERR;
			}
		}
	}

	if(expReached) {					// in case input contains e or E
		for(int i = 0; i < expVal; i++) {		
			if(negExp) {
				finVal /= 10.0;			// divide by 10 for negative exponents
			} else {
				finVal *= 10.0;			// multiply by 10 for positive exponents
			}
		}
	}
	
	if(neg)							// reusing positive logic for negative numbers
		finVal = -finVal;

	*f = finVal;						// ultimately assigning the value
	return OK;
}

int printFlt(float f) {
	int mxn = 66, digAfterDecimal = 6;
	char temp[mxn];
	int ptr = 0, neg = 0;
	
	if(f < 0) {						// since we want to reuse logic
		neg = 1;
		temp[ptr] = '-';
		++ptr;
		f = -f;
	}

	float error = 1e-38;
	int expPart = 0;

	if(f < error) {						// 0.0 special case
		temp[ptr++] = '0';
	} else {
		if(f < 1.0) {
								// need a representation such as 3.2e-X
			while(f < 1.0) {
				f *= 10;
				expPart--;
			} 
		} else if(f > 1.1e9) {				// first we bring to integer range so that we may typecast later
			while(f > 1e9) {
				f /= 10;
				expPart++;
			}
		} 

		int integralPart = (int)f;
		int dig = 0;
		int m = integralPart;
		if(m == 0) {					// logic for printing the integer part (same as for printInt)
			temp[ptr++] = '0';
		} else {
			for(; m > 0; dig++)
				m /= 10;
			
			m = integralPart;
			ptr += dig;
			for(; dig > 0; dig--) {
				temp[dig-1+neg] = (char)(m%10 + '0');
				m /= 10;
			}
		}
	}		
	

	temp[ptr++] = '.';
	f -= (int)f;
	
	for(int i = 0; i < digAfterDecimal; i++) {		// always selecting 6 digits after decimal
		f *= 10;
		int curVal = (int)f;
		temp[ptr++] = (char)(curVal%10 + '0');
	}

	if(expPart != 0) {					// in case there is an exponential part
		temp[ptr++] = 'E';
		if(expPart < 0) {
			expPart = -expPart;
			temp[ptr++] = '-';
		}
		
		int m = expPart;
		int dig = 0;

		for(; m > 0; dig++)	// counting the number of digits
			m /= 10;

		int nDig = dig;

		m = expPart;
		for(; dig > 0; dig--){
			temp[ptr + dig - 1] = (char)(m%10 + '0');	// marking the digits from right to left
			m /= 10;
		}

		ptr += nDig;		// ptr will store the size of the string to be printed
	}

	__asm__ __volatile__(		// assembly code for printing the resultant number in the string
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(temp), "d"(ptr)
	);
	return ptr;			// returning the number of characters
}
