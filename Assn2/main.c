#include "myl.h"						// header file containing functions

int main() {
	printStr("Hey there! Good to see you here!!\n");	// testing printStr
	int n;
	printStr("Enter an integer: ");			

	if(readInt(&n) == 0) {					// readInt test returns 0 in case of failure
		printStr("Error in reading integer");
	} else {
		printStr("The integer entered is: ");		
		printInt(n);					// printInt test
	}
	
	printStr("\n");

	printStr("Enter a floating point value: ");

	float f;
	if(readFlt(&f) == 0) {					// readFlt test
		printStr("Error in reading float");
	} else {
		printStr("The floating point value entered is: ");
		printFlt(f);					// printFlt test
	}

	printStr("\n");
	return 0;
}
