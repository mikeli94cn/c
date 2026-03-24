#include <stdio.h>
#include "printOneToHundred.c"
#include "calcSum.c"

int main()
{
	
	int num=100;
	/*
	printOneToNumLoop(num);
	printOneToNumRecur(num);
	*/
	printf("sum by loop:%d\n",calcSumLoop(num));
	printf("sum by recur:%d\n",calcSumRecur(num));


	return 0;
}
