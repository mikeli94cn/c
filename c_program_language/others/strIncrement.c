/*
desc:Array increase capacity and whether arrSize will change automatically

1.create 30 elem array1,initialize and print
2.create 60 elem array2,initialize and print
3.make array1 varible point to array2
4.print array1 new elems

input:
output:
*/

#include <stdlib.h>
#include <stdio.h>
int main()
{
	/*1*/
	char *p1;
	p1=malloc(30+1);			//apply more one space , for the string last char '\0'
	for(int i=1;i<=30;i++)		
		*(p1+i-1)=48+i;			//'0' ascii is 48. so this means put from '0' to 'N' into applied memory.
	*(p1+31-1)='\0';			//the last char need to assign '\0',to remark the end of string
	printf("str p1 is %s\n",p1);
	printf("p1[0] is %c\n",p1[0]);
	printf("p1[1] is %c\n",p1[1]);
	printf("p1[2] is %c\n",p1[2]);
	
	/*2*/
	char *p2;
	p2=malloc(60+1);
	for(int i=1;i<=60;i++)
		*(p2+i-1)=48+i;
	*(p2+61-1)='\0';
	printf("str p2 is %s\n",p2);
	/*3*/
	p1=p2;
	/*4*/
	printf("str p1 is %s\n",p1);

	printf("sizeof(p1) is %ld\n",sizeof(p1));
	printf("sizeof(p2) is %ld\n",sizeof(p2));

}
