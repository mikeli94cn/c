#define NUM 1000
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[NUM];
    for(int i=1;i<=NUM;i++)
    {
        arr[i-1]=rand()%1000;
    }

    for(int i=1;i<=NUM;i++)
    {
        printf("%d ",arr[i-1]);
    }
    printf("\n");

    for(int i=1;i<=NUM;i++)
    {
        //1.find postion
        int aimPos=i;
        for(int j=1;j<i;j++)
        {
            if(arr[i-1]<arr[j-1])
            {
                aimPos=j;
                break;
            }
        }

        //2.insert into postion
        int store=arr[i-1];
        for(int k=i-1;k>=aimPos;k--)
        {
            arr[k-1+1]=arr[k-1];
        }
        arr[aimPos-1]=store;
    }

    for(int i=1;i<=NUM;i++)
    {
        printf("%d ",arr[i-1]);
    }
    printf("\n");


}