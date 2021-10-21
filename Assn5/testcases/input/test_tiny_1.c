// Test file 1 Coverage: Global declarations, Diff data types, Multi dim arrays, loops

// Global declarations
float eps = 1e-18;
float you[5][3];                          
int and, me[8];                            
int got = -4, *a, whole;                      
int lot = 0;
char of;
int* history;

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
	int a, i, j, n;

	float myFloatValue = 2e-10;
	int sum=0;
	char myCharValue='X';

	// arrar decarations for diff dimensions
	int my1DArray[10]; 
	int my2DArray[12][4]; 
	int my3DArray[12][4][3];

	n=5, j=100, i=0;

	my1DArray[1] = -234;
	int t1 = my1DArray[1];

	my2DArray[5][3] = 122;
	int t2 = my2DArray[5][3];
	
	my3DArray[5][3][1] = 191;
	int t3 = my3DArray[5][3][1];

	myFloatValue = n * myFloatValue;

	i = 0;
	// while loops
	while(i < 10) {
		j += 2;
		my1DArray[i] = i*4 + j;
		i++;
	}

	i = 0;
	n = 10;
	// do-while loops
	do {
		sum = sum + my1DArray[i];
		i++;
	}while(i<n);

	// Nested for loops
	for(int ii = 0; ii < 12; ii++) {
		for(int jj = 0; jj < 4; jj++) {
			for(int kk = 0; kk < 3; kk++) {
				my3DArray[ii][jj][kk] = ii*3 + jj*4 + kk*5;
			}
		}
	}

	// Binary operators
	int a1 = i*n;
	int a2 = i+n;
	int a3 = i-n;
	int a4 = i%n;
	int a5 = i/n;
	int a6 = i^n;
	int a7 = i|n;

	// shift
	int a9 = 1 << 23;
	int a10 = a9 >> 23;
	return 0;
}

