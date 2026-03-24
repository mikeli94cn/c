#include <stdlib.h>
#include <stdio.h>

int main()
{
    //define an array, char type ,10K elements
    char genes[1000];

    //random to assign value to char array
    for(int i=1;i<=1000;i++)
    {
        genes[i-1]='a'+rand()%26;
        printf("%c ",genes[i-1]);
    }

    printf("\n");

    char geneParts[996][6];
    for(int i=1;i<=996;i++)
    {
        geneParts[i-1][0]=genes[i-1];
        geneParts[i-1][1]=genes[i-1+1];
        geneParts[i-1][2]=genes[i-1+2];
        geneParts[i-1][3]=genes[i-1+3];
        geneParts[i-1][4]=genes[i-1+4];
        geneParts[i-1][5]='\0';
    }
    
}