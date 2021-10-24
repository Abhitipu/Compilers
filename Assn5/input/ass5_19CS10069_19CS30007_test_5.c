
int checkPrime (int n) {
  int i = 2;
  int n1 = 1;
  int flag = 0;
  for(i = 2; i<n; i++) {
      n1 = n%i;
      if(n1 == 0) {
	      flag = 1;
	      break;
	  }	
  }

  return (flag);
}

int main () 
{ 
  int n = 9; 
  int fib_num;
  fib_num = fib(n);
  return 0; 
} 