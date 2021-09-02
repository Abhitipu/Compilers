#include "myl.h"

int main() {
	printStr("Hey there! Good to see you here!!\n");
	int n;

	printStr("Enter an integer: ");

	if(readInt(&n) == 0) {
		printStr("Error in reading integer");
	} else {
		printStr("The integer entered is: ");
		printInt(n);
	}
	
	printStr("\n");

	printStr("Enter a floating point value: ");

	float f;
	if(readFlt(&f) == 0) {
		printStr("Error in reading float");
	} else {
		printStr("The floating point value entered is: ");
		printFlt(f);
	}

	printStr("\n");
	return 0;
}
