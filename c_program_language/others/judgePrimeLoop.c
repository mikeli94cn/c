

#define PRIME 0         //define 0 is PRIME
#define COMPOSITE 1     //define 1 is COMPOSITE
#include <math.h>
#include <stdio.h>

/*
desc:judge an integer whether prime or not,print result on the console.
argv:pass an integer
return: 0:prime 1:composite -1:invalid input
*/


int judgePrimeLoop(int num)
{
    int upper,lower;
    char flag;
    upper= floor(sqrt((double)num));        //prime is cannot be divide by numbers except 1 and itself. 
    lower=2;                                //so number  is [2,sqrt(num)] , the biggest should not beyond sqrt(num)
    flag=PRIME;                             //default flag is prime. if exists i can be divided by num ,then num is composite, flag change to composite.
    if(num<=0)
        return -1;                              //invalid input,please input a positive integer
    else
    {    
        for(int i=lower;i<=upper;i++)           //upper from 2 to sqrt(num)               
        {
            if(num%i==0)                        //judge i whether can be divided by num
            {
                flag=COMPOSITE;                 //if divided, num is composite
                break;
            }
        }
        if(flag==PRIME)
            return 0;                           //prime
        else
            return 1;                           //composite              
    }
}


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
}
