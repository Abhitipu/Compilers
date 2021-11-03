int printInt(int);
int printStr(char * p);
int main()
{
    int a;
    a = 60;
    int i = 10;
    for(i = 0; i<10; ++i)
    {
        printStr("Loop iteration "); printInt(i); printStr("\n");
        printStr("a = ");printInt(a);printStr("\n");
        a = a + i;
    }
    return 0;
}