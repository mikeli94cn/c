#include <stdlib.h>
#include <stdio.h>

void main()
{
	int* arr;
	arr=malloc(4*20);
	for(int i=1;i<=20;i++)
	{
		arr[i-1]=i;
	}

	int* new_arr;
	new_arr=malloc(4*40);
	for(int i=1;i<=20;i++)
	{
		new_arr[i-1]=arr[i-1];
	}

	arr=new_arr;
}
