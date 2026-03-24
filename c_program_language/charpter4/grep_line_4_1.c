#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool checkpattern(char arr[],int len)
{
	char pattern[]="ould";
	int ptn_len=strlen(pattern);
	bool mch_flag=false;
	for(int i=1;i<=len;i++)
	{
		int mch_cnt=0;
		mch_flag=false;
		for(int j=1;j<=ptn_len;j++)
		{
			if(arr[i-1]==pattern[j-1])
			{
				mch_cnt++;
				i++;
			}
			else
			{
				break;
			}
			if(mch_cnt==ptn_len)
			{
				mch_flag=true;
			}
		}
		if(mch_flag==true)
		{
			break;
		}
	}
	return mch_flag;
}

typedef struct
{
	char* arr;
	int limit;
} dynamic_arr_t;

dynamic_arr_t scalearr(char* arr,int limit)
{
	char* new_arr;
	new_arr=malloc(1*2*limit);
	for(int i=1;i<=2*limit;i++)
	{
		if(i<=limit)
		{
			new_arr[i-1]=arr[i-1];
		}
		else
		{
			new_arr[i-1]='\0';
		}
	}

	dynamic_arr_t scale_arr;
	scale_arr.arr=new_arr;
	scale_arr.limit=2*limit;
	return scale_arr;
}

typedef struct
{
	char* arr;
	int arr_len;
	bool eof_flag;
} line_res_t;

/*
 * desc:getline() function
 * param:NULL
 * return: a struct,contain arr,arr_len,eof_flag
 */
line_res_t newgetline()
{
	int limit;
	char* arr;
	int arr_len;
	bool eof_flag;
	char c;
	
	limit=10;
	arr=malloc(1*limit);
	for(int i=1;i<=limit;i++)
	{
		arr[i-1]='\0';
	}
	arr_len=0;
	eof_flag=false;
	c='0';


	while( (c=getchar())!='\n' )
	{
		if(c!=EOF)
		{
			arr[arr_len]=c;
			arr_len++;
		}
		else
		{
			eof_flag=true;
			break;
		}
		if(arr_len==limit-1)
		{
			dynamic_arr_t dynamic_arr=scalearr(arr,limit);
			limit=dynamic_arr.limit;
			arr=dynamic_arr.arr;
		}
	}

	line_res_t line_res;
	line_res.arr=arr;
	line_res.arr_len=arr_len;
	line_res.eof_flag=eof_flag;
	return line_res;
}


void main()
{
	while(true)
	{
		line_res_t line=newgetline();
		if( checkpattern(line.arr,line.arr_len) )
		{
			printf("%s\n",line.arr);
		}
		if( line.eof_flag==true )
		{
			break;
		}
	}
}
