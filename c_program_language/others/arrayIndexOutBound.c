#include <stdio.h>

int main()
{
	char arr[3];
	arr[0]='o';
	arr[1]='k';
	arr[2]='r';
	for(int i=1;i<=10;i++)
		printf("arr[%d] is %c\n",i-1,arr[i-1]);
}
