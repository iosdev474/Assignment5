#include<stdio.h>
int main(){
	int n,i,j,max,min;
	scanf("%d",&n);
	if(n<=5)
	return 1;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	printf("max:%d\nmin:%d",max,min);
	return 0;
}
