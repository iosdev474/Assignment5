#include <stdio.h>
 
void fun(int arr[], int n)
{
    int i, min_first, min_second, max_first, max_second;
 
    if (n < 2)
    {
        printf(" Invalid Input ");
        return;
    }
 	max_first = max_second = -2147483646;
    min_first = min_second = 2147483647;
    for (i = 0; i < n ; i ++)
    {
        if (arr[i] < min_first)
        {
            min_second = min_first;
            min_first = arr[i];
        }
 
        else if (arr[i] < min_second && arr[i] != min_first)
            min_second = arr[i];
    	
		if (arr[i] > max_first)
        {
            max_second = max_first;
            max_first = arr[i];
        }
 
        else if (arr[i] > max_second && arr[i] != max_first)
            max_second = arr[i];
    	
    }
    printf("The Second smallest element is %d\nThe Second largest element is %d\n", min_second, max_second);
}
 
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    fun(arr,n);
    return 0;
}
