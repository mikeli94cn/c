/*
2^10
3^5
10^3
4^3
6^-2
10^-3
*/
#include <stdio.h>

int power(int n,int e)
{
	int multi;
	multi=1;
	for(int i=1;i<=e;i++)
	{
		multi=multi*n;
	}
	return multi;
}

void main()
{
	int n,e,res;
	scanf("%d",&n);
	printf("\n");
	scanf("%d",&e);
	res=power(n,e);
	printf("%d\n",res);
}
