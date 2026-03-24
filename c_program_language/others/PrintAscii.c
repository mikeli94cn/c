/*
打印ascii码，对应的数值和字符
*/

#include <stdio.h>

void main()
{
    for(int i=1;i<=127;i++)
    {
        printf("%d,%c\n",i,i);
    }
}