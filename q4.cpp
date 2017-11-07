#include<stdio.h>
#define n 3
int main(){
	int arr[n][n],i,j,k,sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){	
				sum+=arr[i][j];
			}
	}
	printf("sum = %d",sum);
return 0;
}
