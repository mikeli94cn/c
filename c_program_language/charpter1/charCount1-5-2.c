#include <stdio.h>

void main()
{
    int c; /*Type: char or int */
    //char c;
    int cnt;
    cnt=0;
    while ( (c=getchar())!=EOF )
    {
        cnt++;
    }
    printf("the num of characters is %d\n",cnt);
}