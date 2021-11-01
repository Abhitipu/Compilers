// Matrix chain multiplication recursive

int min(int a, int b) {
	if (a < b)
		return a;
	return b;
}

int MatrixChainMultiplication(int p[6], int start, int end) {
	if (start == end)
		return 0;

	int k;
	int min_val = 100000000;
	int count;

	for (k = start; k < end; k++) {
		count = MatrixChainMultiplication(p, start, k) * MatrixChainMultiplication(p, k + 1, end);
		int extra; // TODO I used something, whenever i see type specifier i want to lookup only inside current table, use a proper fix
		extra = p[start - 1] * (p[end] * (p[k])); // second term in parenthesis
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
