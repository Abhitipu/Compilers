int bsrch (int arr[6],int num, int start,int end)
{
    if(start>end)
    	return -1;
    int mid=(start+end)/2;
    if(arr[mid]==num)
    	return mid;
    else if(arr[mid]<num)
    	return bsrch(arr,num,mid+1,end);
    else if(arr[mid]>num)
    	return bsrch(arr,num,start,mid-1);

}
int main()
{
    int i,n,num,index,chk;
    int arr[6];
    arr[0] = -1111;
    arr[1] = -12;
    arr[2] = -2;
    arr[3] = 10;
    arr[4] = 20;
    arr[5] = 122;
    n=6;
    chk=arr[0];
    for(i=1;i<n;++i)
   	{
   		if(chk>=arr[i])
   			{
   			// printf("Array not in increasing fashion!!!\n");
   			return 0;
   			}
   	}

    num = 12;
    index=bsrch(arr,num,0,n-1);
    if(index==-1) {
   	    return 0;
   	}
    return 0;
}

