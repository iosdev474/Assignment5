#include <stdio.h>
#define R 3
#define C 6

int main()
{
	int a[R][C];
	int i,j;
	for(i=0;i<R;i++)
		for(j=0;j<C;j++)
			scanf("%d",&arr[i][j]);
	int m=R,n=C;
	int i, k = 0, l = 0;

	while (k < m && l < n)
	{
		for (i = l; i < n; i++)
		{
			printf("%d ", a[k][i]);
		}
		k++;
		for (i = k; i < m; i++)
		{
			printf("%d ", a[i][n-1]);
		}
		n--;
		if ( k < m)
		{
			for (i = n-1; i >= l; --i)
			{
				printf("%d ", a[m-1][i]);
			}
			m--;
		}
		if (l < n)
		{
			for (i = m-1; i >= k; --i)
			{
				printf("%d ", a[i][l]);
			}
			l++; 
		}	 
	}
	return 0;
}

