int printInt(int);
int printStr(char * p);
// TODO Array
void printArray(int arr[6], int n)
{
    printStr("Printing the array\n");
    for(int i=0;i<n;++i) 
    {
   		printInt(arr[i]); printStr(", ");
   	}
    printStr("\n");
    return ;
}

int main() {
    int i,n;
    int arr[6];
    arr[0] = 5;
    arr[1] = -2;
    arr[2] = -78;
    arr[3] = 98;
    arr[4] = 14;
    arr[5] = 12;
    n=6;

    printStr("Sorting Arrays using insertion sort\n");
    printStr("Before Sorting: \n");
    // printInt(&arr);printStr("\n");
    // printArray(arr, n);
    for(i=0;i<n;++i)
   	{
   		printInt(arr[i]); printStr(", ");
   	}
    printStr("\n");

    int key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printStr("After Sorting: \n");
    for(i=0;i<n;++i)
   	{
   		printInt(arr[i]); printStr(", ");
   	}
    printStr("\n");
    return 0;
}

