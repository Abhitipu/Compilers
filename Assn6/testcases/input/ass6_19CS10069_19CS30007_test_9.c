int printInt(int);
int printStr(char * p);
int main()
{
    int x = 707;
    printInt(x);
    printStr("\nHello World\n");
	if(x == 707)
	{
		printStr("If executed correctly\n");
	}
	if(x != 707)
	{
		printStr("If executed incorrectly\n");
	}
	else if (x > 500)
	{
		printStr("else if executed correctly\n");
	}
	else{
		printStr("else executed correctly\n");
	}
    return x;
}