#include<stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("First repeating element: %d",arr[i]);
				return 0;
			}
		}
	}
	printf("No repeating element");
	return 0;
} 
