#include <stdio.h>

int main()
{
	int a=1;
	int b=1;
	int c=0;
	printf("%d\n",a);
	printf("%d\n",b);
	while(1==1)
	{
		c=a+b;
		if(c<=10000)
		{
			printf("%d\n",c);
			a=b;
			b=c;
		}
		else
			break;
	}
}
