#include<stdio.h>
void fun(int B[],int n)
{
	int A[n];
int i,j,k;
int sum;
j=n-1,k=0,sum=n-1;
for(i=0;i<n-2;i++)
{
A[i]=(B[k]+B[k+1]-B[sum])/2;
k=sum;
j--;
sum=sum+j;
}
A[n-2]=B[n-3]-A[0];
A[n-1]=B[n-2]-A[0];
int z;
for(z=0;z<n;z++){
	printf("%d ",A[z]);
}
}


int main(){
	int n,i;
	scanf("%d",&n);
	int temp=(n*(n-1))/2;
	int arr[temp];
	for(i=0;i<temp;i++){
		scanf("%d",&arr[i]);
	}
	fun(arr,n);
	return 0;
}
