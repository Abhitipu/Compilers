// Test file 1 Coverage: Global declarations, Diff data types, binary operations
int printInt(int);
int printStr(char * p);

// Global declarations
float you = 1e-18;
int and, me[8];                            
int got = -4, *a, whole;                      
int lot = 0;
char of;
int* history;

int main() {
	int a, i, j, n;

	float myFloatValue = 2e-10;
	int sum=0;
	char myCharValue='X';

	// Binary operators
	printStr("Testing some binary operations\n");

	i = 24;
	n = 8;
	int a1 = i+n;
	printInt(i); printStr(" + "); printInt(n); printStr(" = "); printInt(a1);printStr("\n");
	int a2 = i-n;
	printInt(i); printStr(" - "); printInt(n); printStr(" = "); printInt(a2);printStr("\n");
	int a3 = i*n;
	printInt(i); printStr(" * "); printInt(n); printStr(" = "); printInt(a3);printStr("\n");
	int a4 = i/n;
	printInt(i); printStr(" / "); printInt(n); printStr(" = "); printInt(a4);printStr("\n");

	return 0;
}