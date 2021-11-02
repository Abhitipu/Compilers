int printInt(int);
// int printStr(char * p);

// // pointers

// void swapTwoNumbers(int* a, int* b) //pointers
// {
// 	// int temp = *a;
// 	// *a = *b;
// 	// *b = temp;
// 	return;
// }

// int main() {
// 	int a;
// 	int b;
// 	a = 2;
// 	b = 3;

// 	printStr("\n\n------------------------------------------\n\n");
// 	printStr("Testing function calls\n");

// 	printStr("Numbers before swapping\n");
// 	printInt(a); printStr(" "); printInt(b); printStr("\n");

// 	swapTwoNumbers(&a, &b);

// 	printStr("Numbers after swapping\n");
// 	printInt(a); printStr(" "); printInt(b); printStr("\n");

// 	printStr("\n\nDone test\n\n");

// 	return 0;
// }

int main()
{
    int a;
    a = 5;
    int *b;
    b = &a;
	printInt(*b);
    return 0;
}