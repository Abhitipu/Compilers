int printInt(int);
int printStr(char * p);
int readInt(int * n);

void swapTwoNumbers(int* a, int* b) {
	int temp;
    temp = *a;
    *a = *b;
	*b = temp;
	return;
}

int main() {
	int a;
	int b;
	a = 2;
	b = 3;
	printStr("\n\n------------------------------------------\n\n");
	printStr("Testing function calls\n");
	printStr("Numbers before swapping\n");
	printInt(a); printStr(" "); printInt(b); printStr("\n");
	swapTwoNumbers(&a, &b);
	printStr("Numbers after swapping\n");
	printInt(a); printStr(" "); printInt(b); printStr("\n");
	printStr("\n\nDone test\n\n");
	return 0;
}

// int main()
// {
//     int a;
//     a = 5;
//     int *b;
//     b = &a;
//     printInt(&a); printStr("\n");
//     printInt(b); printStr("\n");
//     readInt(&a);
//     printInt(a); printStr("\n");
//     return 0;
// }