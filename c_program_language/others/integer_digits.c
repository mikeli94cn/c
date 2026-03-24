/*
desc:input an integer,return how many digits,implement in Loop and recursion
input:an integer
output:digits number
*/
#include <stdio.h>

int intDigitsLoop(int number);
int intDigitsRecur(int number);

/*
desc:main function
argv:null
return:0
*/
int main()
{
    int number;
    number=0;
    printf("please input an integer:\n");
    scanf("%d",&number);
    printf("%d have %d digits\n",number,intDigitsLoop(number));
    printf("%d have %d digits\n",number,intDigitsRecur(number));
}

/*
desc:input an integer,return how many digits,implement in Loop
argv:number
return:digits
*/
int intDigitsLoop(int number)
{
    int digits;
    digits=1;               //at least have 1 digit
    while(number/10!=0)     //number divide 10, result >0 mean number have more than 1 digit
    {
        digits++;
        number=number/10;   //num decrease 1 digit
    }
    return digits;
}
/*
desc:input an integer,return how many digits,implement in Recursion
argv:number
return:digits
*/
int intDigitsRecur(int number)
{
    if(number==0)                           //recursion formula:f(n)=f(n/10)+1
        return 0;                           //   stop condition:f(0)=0
    else
        return intDigitsRecur(number/10)+1; 
}