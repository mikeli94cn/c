#include <stdio.h>

int ftoc(int f_temp)
{
	int c_temp;
	c_temp=(f_temp-32)*5/9;
	return c_temp;
}

void main()
{
	for(int i=0;i<=300;i=i+20)
	{
		printf("%d,%d\n",i,ftoc(i));
	}
}
