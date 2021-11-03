int printInt(int);
int printStr(char * p);

int main() {
    int x = 707;
    printInt(x);
    printStr("\nHello World\n");
	if(x == 707)
	{
		printStr("If executed correctly\n");        // correct
	}
	if(x != 707) 
    {
		printStr("If executed incorrectly\n");
	}
	else if (x > 500 && x < 999)
	{
		printStr("else if executed correctly\n");   // correct
	}
	else{
		printStr("else executed incorrectly\n"); // wont be printed
	}

    if(x > 900 || x < 800) {
        printStr("if executed correctly\n");     // correct
    } else {
        printStr("Else executed incorrectly\n");
    }

    if(x > 1000 || x == 200) {
        printStr("If executed incorrectly\n");
    } else if(x - 7 != 700){
        printStr("else if executed incorrectly\n");
    } else if(x) {
        printStr("else executed correctly\n");      // correct
    } else {
        printStr("else executed incorrectly\n");
    }
    return x;
}