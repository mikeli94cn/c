#include <stdio.h>

void main()
{
    char c;
    int cnt;
    cnt=0;
    while( (c=getchar())!=EOF )
    {
        if(c=='\n')
            cnt++;
    }
    printf("the input has %d lines\n",cnt);
}