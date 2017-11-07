#include<stdio.h>
void sort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i=0;
	while(i<n){
		scanf("%d",&arr[i++]);
	}
	sort(arr,n);
	for(i=0;i<n;i+=2){
		if(arr[i]!=arr[i+1]){
			printf("%d",arr[i]);
			break;
		}
	}
	return 0;
}
