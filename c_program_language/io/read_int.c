#include <stdio.h>
#include <stdbool.h>

void main()
{
        int arr[100];
        int temp;
        int num=1;
        while( scanf("%d",&temp) == 1 )
        {
                arr[num-1]=temp;
                num++;
        }

        for(int i=1;i<=100;i++)
        {
                printf("%d\n",arr[i-1]);
        }
}