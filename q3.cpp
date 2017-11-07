#include<stdio.h>
void rotate(int arr[], int n, int k)
{
	int i,temp;
	while(k--)
	{
		for(i=0;i<n-1;i++)
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		printf("Input:{");
	for(i=0;i<n;i++){
		printf("%d, ",arr[i]);
	}	printf("\b\b},k=");
	scanf("%d",&k);
	rotate(arr,n,k);
		printf("Output:{");
	for(i=0;i<n;i++){
		printf("%d, ",arr[i]);
	}	printf("\b\b}");
		
	return 0;
}
