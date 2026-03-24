#include <stdio.h>
int main()
{
	int num=789;
	int digit=-1;

	/*
	while(num!=0)
	{
		digit=num%10;
		printf("%d",digit);
		num=num/10;
	}
	*/
	
	do
	{
		digit=num%10;
		printf("%d",digit);
		num=num/10;
	}while(num!=0);
	
}
