#include <stdio.h>

int euclid(int a,int b)
{
	int temp;
	while(a%b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	
	
	return b;
}

int main()
{
	int a=72;
	int b=60;
	printf("%d\n",euclid(a,b));
	
}
