#include <stdio.h>

void printValue(int val)
{
	printf("%d\n",val);
}


void printValue(double val)
{
	printf("%f\n",val);
}

void main()
{
	int i=10;
	double d=20.0;
	printValue(i);
	printValue(d);
}
