#include <stdio.h>
#include<math.h>

int main()
{
	int num=789;
	int num_ori=789;
	int digit=0;
	int ch=0;

	
	while(num!=0)
	{
		num=num/10;
		digit++;
	}
	
	while(digit!=0)
	{
		ch=num_ori/ ceil(pow(10,digit-1));	
		printf("%d\n",ch);
		num_ori= num_ori % (int)ceil(pow(10,digit-1));
		printf("%d\n",num_ori);
		//printf("%.50f\n",pow(10,digit-1));
		//printf("%d\n", ceil(pow(10,digit-1))) ;
		digit--;
	}


	/*
	do
	{
		digit=num%10;
		printf("%d",digit);
		num=num/10;
	}while(num!=0);
	*/

}
