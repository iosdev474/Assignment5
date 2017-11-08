#include <stdio.h>

int main()
{
	int n,x,i,j;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter x: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if((x==(arr[i]+arr[j]))&&arr[i]!=arr[j])
			{
				printf("%d+%d=%d",arr[i],arr[j],x);
				return 0;
			}
		}
	}
    printf("No the number cant be expressed as sum of two different elements from array");
    return 0;
}
