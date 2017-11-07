#include<stdio.h>
int checkprime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
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
