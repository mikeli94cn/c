#include <string.h>
#include <stdio.h>

int main()
{
	char *arr="hello world";
	char str[30];
	for(int i=1;i<=30;i++)
		str[i-1]='\0';
	str[0]='h';
	str[1]='e';
	printf("length of arr is %ld\n",strlen(arr));
	printf("length of str is %ld\n",strlen(str));

}
