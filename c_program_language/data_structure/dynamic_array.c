#include <stdio.h>
#include <stdlib.h>

int* create(int capacity);

void set_v(int* arr,int index,int value);

int get_v(int* arr,int index);

void add_item(int* arr,int value);

int* scale_arr(int* arr);

int length(int* arr);

void main()
{
	int* my_arr;
	my_arr=create(10);
	
	for(int i=1;i<=10;i++)
	{
		set_v(my_arr,i-1,11-i);
	}
	
	for(int i=1;i<=10;i++)
	{
		printf("%d\n",get_v(my_arr,i-1));
	}
	
	for(int i=1;i<5;i++)
	{
		add_item(my_arr,i);
	}
	/*
	printf("%d\n",length(my_arr));

	for(int i=1;i<=length(my_arr);i++)
	{
		printf("%d\n",get_v(my_arr,i-1));
	}
	*/
}


int* create(int capacity)
{
	int* arr;
	arr=malloc(sizeof(int)*(capacity+2));
	*(arr+0)=capacity;
	*(arr+1)=0;
	return arr;
}

void set_v(int* arr,int index,int value)
{
	*(arr+index-1+2)=value;
}

int get_v(int* arr,int index)
{
	return *(arr+index-1+2);
}

void add_item(int* arr,int value)
{
	int capacity=*(arr+0);
	int used=*(arr+1);
	if(used==capacity)
	{
		arr=scale_arr(arr);
	}
	
	capacity=*(arr+0);
	used=*(arr+1);
	*(arr+used+1-1)=value;
	*(arr+1)=*(arr+1)+1;
}

int* scale_arr(int* arr)
{
	int capacity=*(arr+0);
	int* new_arr;
	new_arr=malloc(sizeof(int)*(2*capacity+2));
	for(int i=1;i<=capacity+2;i++)
	{
		*(new_arr+i-1)=*(arr+i-1);
	}
}


int length(int* arr)
{
	return *(arr+1);
}
