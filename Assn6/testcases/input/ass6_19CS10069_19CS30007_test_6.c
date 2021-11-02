int printInt(int);
int printStr(char * p);
// A really useless nested function
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
				}
			}
		}
	}
	return k + 12;
}

int main() {
	int myInput[6];
	myInput[0] = 1;
	myInput[1] = 23;
	myInput[2] = 45;
	myInput[3] = 222;
	myInput[4] = 1;
	myInput[5]= 1222;
	int n = 6;

	int minMults = MatrixChainMultiplication(myInput, 1, n - 1);

	return 0;
}
