
#include <stdio.h>
int main()
{

    int num1,num2,res;
    char opt;
    /*
    printf("please input num1,operator,num2:");
    scanf("%d %c %d",&num1,&opt,&num2);
    */
       
    switch(opt)
    {
        case '+':
            res=num1+num2;
            break;
        case '-':
            res=num1-num2;
            break;
        case '*':
            res=num1*num2;
            break;
        case '/':
            res=num1/num2;
            break;
        case '%':
            res=num1%num2;
            break;
        default:
            ;
    }

    printf("%d %c %d= %d\n",num1,opt,num2,res);
}