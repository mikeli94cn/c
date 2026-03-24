#include<stdio.h>

int main()
{
    char c;
    while(1==1)
    {
        c=getchar();
        if(c!=EOF)
            putchar(c);
        else
            break;
    }
}
