#include <stdio.h>
 
int fun(int arr[], int n)
{
	int sum=arr[0];
	int max=arr[0];
	int i;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum<0)
			sum=0;
		if(max<sum)
			max=sum;
	}
	return max;
}
 
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    printf("\nLargest sum = %d",fun(arr,n));
    return 0;
}
