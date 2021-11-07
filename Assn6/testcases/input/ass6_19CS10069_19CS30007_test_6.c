// A nested function to check the formation of blocks and 
// indicates whether flattening was done properly

int printInt(int);
int printStr(char * p);

int NestyFunction(int n) {
	int k = 2;
	{
		int k = 3;
		{
			int k = 4;
			{
				int k = 5;
				{
					k++;
					printStr("K(should be 6) inside nested block = "); printInt(k);printStr("\n");
				}
			}
		}
	}
	printStr("K(should be 2) outside nested block = "); printInt(k);printStr("\n");
	return n + k;
}

int main() {
	printStr("Program to find sum of all elements of an array\n");
	int myInput[6];
	myInput[0] = 1;
	myInput[1] = 10;
	myInput[2] = 100;
	myInput[3] = 1000;
	myInput[4] = 10000;
	myInput[5] = 100000;

	int sum = 0;
	// A wierd way of finding the sum of elements of an array
	for(int i = 0; i < 6; i++)
		sum = sum + NestyFunction(myInput[i] - 2);

	printStr("Sum of all elements of the array is: "); printInt(sum); printStr("\n");
	return 0;
}
