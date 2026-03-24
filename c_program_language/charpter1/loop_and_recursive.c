#include <stdio.h>
void loop(int num)
{
    while(1==1)
    {
        printf("%d\n",num%10);
        num=num/10;
        if(num==0)
            break;
    }
}


void recur(int num)
{
    if(num>=10)
    {
        recur(num/10);
        recur(num%10);
    }
    else
        printf("%d\n",num);
}

int main()
{
    loop(789);
    recur(789);
}
