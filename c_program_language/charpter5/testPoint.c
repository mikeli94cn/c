#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	printf("char:pointer and malloc ,start\n");
	/*
	char *r;
	r=malloc(strlen("hello")+1);
	if(!r)
	{
		complain();
		exit(1);
	}
	free(r);
	*/
	char *p=malloc(16);
	printf("%p\n",p);
	printf("%p\n",p+1);
	printf("%p\n",p+2);
	printf("%p\n",p+3);
	printf("%p\n",p+4);
	printf("%p\n",p+5);
	printf("%p\n",p+6);
	printf("%p\n",p+7);
	printf("%p\n",p+8);
	printf("%p\n",p+9);
	printf("%p\n",p+10);
	printf("%p\n",p+11);
	printf("%p\n",p+12);
	printf("%p\n",p+14);
	printf("%p\n",p+15);
	printf("%p\n",p+16);
	printf("%p\n",p+17);
	printf("%p\n",p+18);
	
	for(int i=0;i<=16-1;i++)
		*(p+i)='\0';
	printf("Init p : %s\n",p);

	*p='h';
	*(p+1)='e';
	*(p+2)='l';
	*(p+3)='l';
	*(p+4)='o';
	printf("assighment hello : %s\n",p);
	
	free(p);
	
	printf("char : pointer and malloc ,end\n");

	char arr1[]="hello";
	char arr2[]="hello world";
	
	/*
	char *arr1="hello";
	char *arr2="hello world";
	*/
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%p\n",arr1);	//OK
	printf("%p\n",arr2);	//OK
	
	/*
	printf("%p\n",&arr1);	//BAD
	printf("%p\n",&arr2);	//BAD
	
	//arr1=&arr2;
	*/
	//arr1=arr2;
	//*(&arr1)=*(&arr2);
	
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	
	printf("%p\n",arr1);
	printf("%p\n",arr2);
	
}
