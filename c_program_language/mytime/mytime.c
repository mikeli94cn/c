#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	int* p1;
	long int* p2;
	long long int* p3;
	printf("p1:%p\n",p1);
	printf("p2:%p\n",p2);
	printf("p3:%p\n",p3);
	
	*p1=1;
	*p2=2;
	*p3=3;
	printf("p1:%p\n",p1);
	printf("p2:%p\n",p2);
	printf("p3:%p\n",p3);
	*/
	
	//Q: how many bytes does int type occupy? and double and long?
	//and how to print them.
	int i1=100;
	double d1=9.99;
	long long int l1=8000000000;

	printf("%d\n",i1);
	printf("%lf\n",d1);
	printf("%lld\n",l1);
	printf("size of int is %ld\n",sizeof(i1));	
	printf("size of double is %ld\n",sizeof(d1));	
	printf("size of long long int is %ld\n",sizeof(l1));	

	long long int* ptr_m_1;
	printf("declare:pointer varible ptr_m_1:%p\n",ptr_m_1);
	ptr_m_1=malloc(sizeof(long long int));
	printf("after malloc:pointer varible ptr_m_1:%p\n",ptr_m_1);
	
	*ptr_m_1=3011112222LL;
	printf("after assign value,value pointer point to is:%lld\n",*ptr_m_1);
	printf("after assign value,pointer varible ptr_m_1:%p\n",ptr_m_1);


	time_t t1=time(NULL);
	time_t* t_ptr1=&t1;
	struct tm* tm_ptr1=localtime(t_ptr1);
	char* str1=asctime(tm_ptr1);
	printf("%s\n",str1);
}
