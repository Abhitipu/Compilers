// function calling and conditional statements (ternary and if-else)
int abs(int x) {
   	int ans;
   	if(x > 0)  // if-else-if-else
   		ans = x;
   	else if( x < 0)
   		ans= x;
	else
		ans = 0;
    return ans;
}

int min(int x, int y) 
{
   int ans;
   // TODO: check
   ans = x > y ? y : x; // ternary
   ans = 1;
   return ans;
}

int a;

int absMin(int a, int b){
	int i, j;
	i = min(a, b);
	j = abs(i);
	return j;
}

int main(){
	int a, b, d;
	a = 10, b = 5;
	d = absMin(a,b);
	return 0;
}
