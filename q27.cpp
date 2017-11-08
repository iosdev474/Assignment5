#include<stdio.h>

    void segregate0and1(int arr[], int n)
    {
        int count = 0;
     
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0)
                count++;
        }

        for (int i = 0; i < count; i++)
            arr[i] = 0;
 
        for (int i = count; i < n; i++)
            arr[i] = 1;
    }
     
    void print(int arr[], int n)
    {
	int i;
        printf("Array after segregation is ");
        for (i = 0; i < n; i++)
            printf("%d ",arr[i]);    
    }
     
    int main()
    {
        int n,i;
	scanf("%d",&n);
 	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
        segregate0and1(arr, n);
        print(arr, n);
        return 0;
    }
