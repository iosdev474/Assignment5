#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,k,sum=0;
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
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j){
				if(abs(arr[i]-arr[j])==k){
				sum+=1;
				}
			}
		}
	}
	printf("Output: %d",sum/2);
	
	return 0;
}
