#include <stdio.h>
#include "read_int.c"

int main()
{
	arr_with_len_t* ptr=read_int();
	
	for(int i=1;i<=ptr->len;i++)
	{
		printf("%d ",ptr->arr[i-1]);
	}
	printf("\n");
	return 0;
}
