#include <stdio.h>

int main()
{
	int a=1;
	int b=1;
	int tmp=0;
	printf("%d\n",a);
	printf("%d\n",b);
	while(1==1)
	{
		if( (a+b)<=10000 )
		{
			printf("%d\n",a+b);
			tmp=b;
			b=a+b;
			a=tmp;
		}
		else
			break;
	}
}
