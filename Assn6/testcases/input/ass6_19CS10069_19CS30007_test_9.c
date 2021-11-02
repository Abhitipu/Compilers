int printInt(int);
int printStr(char * p); // bug
int main()
{
    int x = 707;
    printInt(x);
    printStr("\nHello World\n");
    return x;
}