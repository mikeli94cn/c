/*
apply arr1[30],create and print
apply arr2[60],copy arr1 first 30 elements into arr2,print arr2
make arr1 point to arr2
print arr1
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr1;
	arr1=malloc(30*4);
	for(int i=1;i<=30;i++)
		*(arr1+i-1)=i;
	for(int i=1;i<=30;i++)
		printf("arr1[%d] adress is %p, value is %d\n",i-1,arr1+i-1, *(arr1+i-1));
	
	int *arr2;
	arr2=malloc(60*4);
	for(int i=1;i<=30;i++)
		*(arr2+i-1)=*(arr1+i-1);
	for(int i=31;i<=60;i++)
		*(arr2+i-1)=0;
	for(int i=1;i<=60;i++)
		printf("arr2[%d] adress is %p, value is %d\n",i-1,arr2+i-1, *(arr2+i-1));
	
	arr1=arr2;

	for(int i=1;i<=60;i++)
		printf("arr1[%d] adress is %p, value is %d\n",i-1,arr1+i-1, *(arr1+i-1));
	
printf();
}
