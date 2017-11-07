#include<stdio.h>
#define max 50
int main()
{
	int arr[max];
	int n,i,j,k,temp;
	printf("Enter the number of terms you required: ");
	scanf("%d",&n);
	printf("Enter an array of %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]==1)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("{");
	for(k=0;k<n;k++) 
	{
		printf("%d, ",arr[k]);
	}
	printf("\b\b}");
}
