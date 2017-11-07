#include<stdio.h>

int Union(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (arr1[i] < arr2[j])
      printf(" %d ", arr1[i++]);
    else if (arr2[j] < arr1[i])
      printf(" %d ", arr2[j++]);
    else
    {
      printf(" %d ", arr2[j++]);
      i++;
    }
  }
  while(i < m)
   printf(" %d ", arr1[i++]);
  while(j < n)
   printf(" %d ", arr2[j++]);
}

int printIntersection(int arr1[], int arr2[], int m, int n)
{
	printf("\n");
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (arr1[i] < arr2[j])
      i++;
    else if (arr2[j] < arr1[i])
      j++;
    else
    {
      printf(" %d ", arr2[j++]);
      i++;
    }
  }
}

int main()
{
  int arr1[1000];
  int arr2[1000];
  int m=0,n=0;
  char temp;
  do{
  	scanf("%d%c",&arr1[m++],&temp);
  }while(temp!='\n');
  do{
  	scanf("%d%c",&arr2[n++],&temp);
  }while(temp!='\n');
  Union(arr1, arr2, m, n);
  printIntersection(arr1, arr2, m, n);
  return 0;
}
