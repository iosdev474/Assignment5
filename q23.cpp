#include<stdio.h>
int checkprime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n,i=2;
	scanf("%d",&n);
	if(n<=20)
		return 1;
	while(n)
	{
		if(checkprime(i++))
		{
			printf("%d ",i-1);
			n--;
		}
	}
	return 0;
} 
