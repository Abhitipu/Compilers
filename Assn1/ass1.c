#include <stdio.h>
#define MAXSIZE 100

void inst_sort(int num[],int n);
int bsearch(int num[],int n,int item);

int main()
{
    int n, a[MAXSIZE], item, i, loc;
    
    printf("Enter how many elements you want:\n");	// LC0
    scanf("%d", &n);					// LC1
    
    printf("Enter the %d elements:\n", n);		// LC2
    for(i = 0; i < n; i++) scanf("%d", &a[i]);		// where is this?
    
    inst_sort(a,n);
    
    printf("\nEnter the item to search\n");		// LC3
    scanf("%d", &item);					// is it LC2 again?
    loc=bsearch(a,n,item);
    
    if (item == a[loc]) {
        printf("\n%d found in position: %d\n", item, loc + 1);	// LC4
    } else {
        printf("\nItem is not present in the list.\n");		// LC5
    }
    
    return 0;
}

void inst_sort(int num[],int n)
{
    int i,j,k;
    
    for(j=1;j<n;j++) {
        k=num[j];
        for(i=j-1;i>=0 && k<num[i];i--) num[i+1]=num[i];
            num[i+1]=k;
    }
}

int bsearch(int a[],int n,int item)
{
    int mid, top, bottom;
    
    bottom = 1;
    top = n;
    do {
        mid = (bottom + top) / 2;
        if (item < a[mid])
            top = mid - 1;
        else if (item > a[mid])
            bottom = mid + 1;
    } while (item != a[mid] && bottom <= top);
    return mid;
}
