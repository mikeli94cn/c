#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
	char* arr;
	int arr_limit;
	int arr_len;
	bool eof_flag;
}line_res_t;

line_res_t newgetline()
{
	line_res_t line;
	line.arr_limit=5;
	line.arr=malloc(1*line.arr_limit);
	line.arr_len=0;
	line.eof_flag=false;
	for(int i=1;i<=line.arr_limit;i++)
	{
		line.arr[i-1]='\0';
	}
	
	char c;
	while( (c=getchar()) != '\n')
	{
		line.arr[line.arr_len]=c;
		line.arr_len++;

		if(line.arr_len==line.arr_limit-1)
		{
			char* new_arr;
			new_arr=malloc(1*2*line.arr_limit);
			for(int j=1;j<=2*line.arr_limit;j++)
			{
				if(j<=line.arr_limit)
				{
					new_arr[j-1]=line.arr[j-1];
				}
				else
				{
					new_arr[j-1]='\0';
				}
			}
			line.arr=new_arr;
			line.arr_limit=2*line.arr_limit;
		}
	}

	return line;
}

void main()
{
	line_res_t my_line;
	my_line=newgetline();
	printf("%d\n",my_line.arr_len);
	printf("%s\n",my_line.arr);
}
