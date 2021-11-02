int printInt(int);
int printStr(char * p);

// function calling and conditional statements (ternary and if-else)
// Return from functions

int abs(int x) {
	if(x < 0)
		return -x;
	return x;
}

int min(int x, int y) {
   int ans;
   ans = x > y ? y : x; // ternary
   return ans;
}

int max(int x, int y) {
   int ans;
   ans = x < y ? y : x; // ternary
   return ans;
}

int main(){
	int x = -23;
	int y = 24;

	printStr("Testing the abs function\n");
	int ans1 = abs(x);
	printStr("abs("); printInt(x); printStr(") = "); printInt(ans1); printStr("\n");
	
	int ans2 = abs(y);
	printStr("abs("); printInt(y); printStr(") = "); printInt(ans2); printStr("\n");

	int ans3 = min(x, y);
	printStr("Testing the min function\n");
	printStr("Min("); printInt(x); printStr(", "); printInt(y); printStr(") = "); printInt(ans3);

	int ans4 = max(x, y);
	printStr("Testing the max function\n");
	printStr("Max("); printInt(x); printStr(", "); printInt(y); printStr(") = "); printInt(ans4);

	return 0;
}
