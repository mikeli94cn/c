#define NUM 1000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void InitArr(int arr[],int len)
{
    srand(time(NULL));
    for(int i=1;i<=len;i++)
    {
        arr[i-1]=rand()%len;
    }
}

void PrintArr(int arr[],int len)
{
	for(int i=1;i<=len;i++)
		printf("%d ",arr[i-1]);
	printf("\n");
}

void BubbleSort(int arr[],int len)
{
    bool swagFlag=false;
    for(int i=1;i<=len;i++)
    {
        swagFlag=false;
        for(int j=1;j<=len-i;j++)
        {
            if(arr[j-1]>arr[j+1-1])
            {
                int tmp=arr[j+1-1];
                arr[j+1-1]=arr[j-1];
                arr[j-1]=tmp;
                swagFlag=true;
            }
        }
        if(swagFlag==false)
            break;
    }
}

void main()
{
    int arr[NUM];

    //initial array
    InitArr(arr,NUM);

	//print
	PrintArr(arr,NUM);

    //sort
    BubbleSort(arr,NUM);

	//print
	PrintArr(arr,NUM);

}