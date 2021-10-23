// Matrix chain multiplication recursive

int min(int a, int b) {
	if (a < b)
		return a;
	return b;
}

int MatrixChainMultiplication(int p[], int start, int end) {
	if (start == end)
		return 0;

	int k;
	int min_val = 100000000;
	int count;

	for (k = start; k < end; k++) {
		count = MatrixChainMultiplication(p, start, k) * MatrixChainMultiplication(p, k + 1, end);
		// TODO: check expression (2 arrays multiplied)
		int extra = p[start - 1] * (p[end] * (p[k])); // second term in parenthesis
		count += extra;
		min_val = min(min_val, count);
	}
	return min_val;
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
