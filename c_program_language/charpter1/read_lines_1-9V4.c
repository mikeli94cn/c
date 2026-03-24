/**
 * read lines
 * if this line longer than the longest line
 * save this line
 * update the length
 */

#define LIMIT 1000
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
	char arr[LIMIT];
	int len;
	bool flag;
} result;

result mygetline()
{
	result store_res;

	for(int i=1;i<=LIMIT;i++)
	{
		store_res.arr[i-1]='\0';
	}
	store_res.len=0;
	store_res.flag=false;

	
	char c;
	while( (c=getchar())!='\n' )
	{
		if(c==EOF)
		{
			store_res.flag=true;
			break;
		}
		store_res.arr[store_res.len]=c;
		store_res.len++;
	}
	return store_res;
}

void arrcopy(char from[],char to[])
{
	int i=1;
	while(true)
	{
		if(from[i-1]=='\0')
		{
			break;
		}
		else
		{
			to[i-1]=from[i-1];
			i++;
		}
	}
}

void main()
{
	int max_len=0;
	char max_arr[LIMIT];

	for(int i=1;i<=LIMIT;i++)
	{
		max_arr[i-1]='\0';
	}

	result real_res;
	while(true)
	{
		real_res=mygetline();
		
		if(max_len<real_res.len)
		{
			arrcopy(real_res.arr,max_arr);
			max_len=real_res.len;
		}

		if(real_res.flag==true)
		{
			break;
		}
	}

	printf("%d\n",max_len);
	printf("%s\n",max_arr);
}
