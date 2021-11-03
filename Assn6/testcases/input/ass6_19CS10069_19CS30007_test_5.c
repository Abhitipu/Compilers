int printInt(int);
int printStr(char * p);

int fib(int n) {
  int ans;
  if(n <= 1)
    ans =  n;
  else
    ans = fib(n-1) + fib(n-2);
  return ans;
}

int main () { 
  int n;
  int ans;
  printStr("Program to print fibonacci numbers upto 10\n");
  for(n = 1; n<=10; n++)
  {
    ans = fib(n);
    printStr("Fib("); printInt(n); printStr(") = "); printInt(ans); printStr("\n");
  }
  return 0; 
} 