// typecasting and pointers
void swapTwoNumbers(int* a, int* b) //pointers
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}

float areaOfCircle(int r) {
	float pi = 3.14, area;
	int rSquare = r*r;
	area = pi *rSquare; // type casting int -> float
	return area;
}

int main() {
	int q=8,r=2;
	float x=2.5, area;
	area = areaOfCircle(r);
	swapTwoNumbers(&q,&r);
	area = areaOfCircle(r);
	return 0;
}