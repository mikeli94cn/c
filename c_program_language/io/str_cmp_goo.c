#include <stdio.h>
#include <string.h>

int main()
{
    char* str1="apple";
    char* str2="banana";
    char* str3="apple";

    int result1=strcmp(str1,str2);  //-1
    int result2=strcmp(str2,str3);  //1
    int result3=strcmp(str1,str3);  //0

    printf("str1:%s str2:%s str3:%s\n",str1,str2,str3);
    if(result1>0)
    {
        printf("str1 is greater than str2\n");
    }
    else if(result1<0)
    {
        printf("str1 is less than str2\n");
    }
    else
    {
        printf("str1 is euqals str2\n");
    }

    if(result2>0)
    {
        printf("str2 is greater than str3\n");
    }

    if(result3==0)
    {
        printf("str1 equals str3\n");
    }
}