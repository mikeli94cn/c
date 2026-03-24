#include <stdio.h>

int main()
{
	char *p1="hello";
	char p2[]="hello world";
	char *p3="cross the wall,go to the world";

	printf("p1 address is %p\n",p1);
	printf("p2 address is %p\n",p2);

	printf("p1 string content is %s\n",p1);
	printf("p2 string content is %s\n",p2);
	
	printf("p1 point to p2\nafter point\n");
	p1=p2;
	//p2=p3;
	printf("p1 address is %p\n",p1);
	printf("p2 address is %p\n",p2);

	printf("p1 string content is %s\n",p1);
	printf("p2 string content is %s\n",p2);
}
