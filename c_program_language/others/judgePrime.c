/*
desc:judge an integer whether prime
input:an integer
output:print this integer is prime or composite
*/
#include <stdio.h>
#include <math.h>
#include "judgePrimeLoop.c"

int main()
{
    int num;
    printf("input num:\n");                                                                                                                                                                                                                                                                                                                                        
    scanf("%d",&num);   
    
	switch(judgePrimeLoop(num))
    {
        case 0:
            printf("prime\n");
            break;
        case 1:
            printf("composite\n");
            break;
        case -1:
            printf("invalid input,please input a positive integer\n");
        default:
            ;               
    }
	/*
    switch(judgePrimeRecur(num)) 
	{
		case 0:
            printf("composite\n");
            break;
        default:
            printf("prime\n");
            ;               
	}
	*/
}

