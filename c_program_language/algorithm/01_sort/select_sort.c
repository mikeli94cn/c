#define NUM 1000
#include <stdlib.h>
#include <stdio.h>


void PrintArr(int arr[],int len)
{
	for(int i=1;i<=len;i++)
		printf("%d ",arr[i-1]);
	printf("\n");
}

void SelectSort(int arr[],int len)
{
	for(int i=1;i<=len;i++)
	{
		int minV=arr[i-1];
		int minP=i;
		for(int j=i+1;j<=len;j++)
		{
			if(minV>arr[j-1])
			{
				minV=arr[j-1];
				minP=j;
			}
		}
		arr[minP-1]=arr[i-1];
		arr[i-1]=minV;
	}
}

void main()
{
	//define and initialize array
	int arr[NUM];
	for(int i=1;i<=NUM;i++)
	{
		arr[i-1]=rand()%1000;
	}
	//print
	PrintArr(arr,NUM);

	//select-sort
	SelectSort(arr,NUM);

	//print
	PrintArr(arr,NUM);

}

