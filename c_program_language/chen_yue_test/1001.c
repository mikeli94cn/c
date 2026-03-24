#include <stdio.h>

int threeplusone(int n)
{
	if(n==1)
		return 1;
	else if(n%2==0)
		return n/2;
	else
		return (3*n+1)/2;
}

int main()
{
	int n;
	if(scanf("%d",&n) != EOF)
	{
	int count=1;
	while( (n=threeplusone(n)) !=1  )
	{
		count++;
	}
	printf("%d\n",count);
	}
}
