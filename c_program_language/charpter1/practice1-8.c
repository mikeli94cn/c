/*
count blankspace, table, change line symbol
*/
#include <stdio.h>

char c;
int blank=0;
int table=0;
int line=0;

int main()
{
    while( (c=getchar())!=EOF )
    {
        if(c==' ')
            blank++;
        else if (c=='\t')
        {
            table++;
        }
        else if (c=='\n')
        {
            line++;
        }      
    }
    printf("blankspace is %d,table symbol is %d,newLine symbol is %d",blank,table,line);
}
