#include <stdio.h>

void truepyramid()
{
	for(int i=1;i<=5;i++)
	{
		for(int k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void invertedpyramid()
{
	for(int i=5;i>=1;i--)
	{
		for(int k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

}

void rectanglepyramid()
{
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void main()
{
	truepyramid();
	invertedpyramid();
	rectanglepyramid();
}
