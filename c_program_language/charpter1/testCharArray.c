#include <stdio.h>
void main()
{
	char str[]="hello";
	printf("%ld\n",sizeof(str));
	printf("%s\n",str);
	
	char arr[10];
	for(int i=1;i<=10;i++)
		arr[i-1]=i-1+'0';
	printf("%ld\n",sizeof(arr));
	printf("%s\n",arr);
	
	char newArr[]="0123456789";
	printf("%ld\n",sizeof(newArr));
	printf("%s\n",newArr);
	
	return ;
}
