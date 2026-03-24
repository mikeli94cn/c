#include <stdio.h>

void nineninemulti()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
}

void main()
{
	nineninemulti();
}
