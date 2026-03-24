/*
   address
   int type address
   char type address
   float type address

   next int type address
   next char type address
   next float type address

   how to show address

   fetch address symbol

   int array address
   char array address

   address and point type

   point type symbol

   function address
 */

#include <stdio.h>
int main()
{
	int i1,i2;
	char c1,c2;
	float f1,f2;
	double d1,d2;

	i1=256;
	i2=2;
	c1='A';
	c2='B';
	f1=1.1;
	f2=1.2;
	d1=2.1;
	d2=2.2;

	printf("%d\n",&i1);
	printf("%d\n",&i2);
	char *p1;
	char *p2;
	p1=&i1;
	p2=p1+1;
	printf("%d\n",p1);
	printf("%d\n",p2);
	printf("%d\n",*p1);
	printf("%d\n",*p2);
	/*
	printf("%d\n",&c1);
	printf("%d\n",&c2);
	printf("%d\n",&f1);
	printf("%d\n",&f2);
	printf("%d\n",&d1);
	printf("%d\n",&d2);
	*/
	return 0;
}
