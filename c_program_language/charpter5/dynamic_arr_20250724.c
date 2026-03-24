#include <stdio.h>
#include <stdlib.h>

void initarr(char* arr,int len)
{
    for(int i=1;i<=len-1;i++)
    {
        arr[i-1]='a';
    }
    arr[len-1]='\0';
}


char* scale(char* arr,int len)
{
    char* newArr;
    newArr=malloc(sizeof(char)*len*2);
    for(int i=1;i<=2*len-1;i++)
    {
        if(i<=len-1)
        {
            newArr[i-1]=arr[i-1];
        }
        else
        {
            newArr[i-1]='b';
        }
    }
    newArr[2*len-1]='\0';
    return newArr;
}

void main()
{
    char* arr;
    arr=malloc(sizeof(char)*10);
    int len=sizeof(arr)/sizeof(char);

    initarr(arr,len);

    printf("%s\n",arr);
    
    arr=scale(arr,len);

    printf("%s\n",arr);

    free(arr);

}

