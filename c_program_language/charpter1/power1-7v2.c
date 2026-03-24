#include <stdio.h>

int power(int x,int y)
{
	int multi=1;
	for(int i=1;i<=y;i++)
		multi=multi*x;
	return multi;
}

int main()
{
	for(int i=1;i<=10;i++)
	{
		printf("2^%d=%d,",i,power(2,i));
		printf("(-3)^%d=%d",i,power(-3,i));
		printf("\n");
	}
}

