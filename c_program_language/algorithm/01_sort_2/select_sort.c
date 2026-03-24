#define NUM 1000

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initarr(int arr[],int len)
{
	srand(time(NULL));
	for(int i=1;i<=len;i++)
	{
		arr[i-1]=random()%NUM;
	}
}

void printarr(int arr[],int len)
{
	for(int i=1;i<=len;i++)
	{
		printf("%d ",arr[i-1]);
	}
	printf("\n");
}

void selectsort(int arr[],int len)
{
	for(int i=1;i<=len;i++)
	{
		int min_idx=i;
		for(int j=i+1;j<=len;j++)
		{
			if(arr[min_idx-1]>arr[j-1])
			{
				min_idx=j;
			}
		}
		int tmp=arr[i-1];
		arr[i-1]=arr[min_idx-1];
		arr[min_idx-1]=tmp;
	}
}


void main()
{
	int arr[NUM];

	initarr(arr,NUM);

	printarr(arr,NUM);

	selectsort(arr,NUM);

	printarr(arr,NUM);
}
