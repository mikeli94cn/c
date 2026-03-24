/*
   an integer
   convert to demical,binary,octdecimal
   judge return or not
   if all are return,then is return;if not,then not return.
 */
#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

void main()
{
	char * demConvert(int num,int exp)
	{
		char * res;
		res=malloc(31);
		for(int i=1;i<=31;i++)
			*(res+i-1)='\0';

		int j=1;
		while(num!=0)
		{
			*(res+j-1)='0'+num%exp;
			num=num/exp;
			j++;
		}

		int length=j-1;
		char tmp='\0';
		for(int n=1;n<=length/2;n++)
		{
			tmp=*(res+n-1);
			*(res+n-1)=*(res+length-n);
			*(res+length-n)=tmp;
		}

		//printf("%s\n",res);
		return res;
	}

	int judgeRt(char * str)
	{
		int length=0;
		while(1==1)
		{
			if(*(str+length)=='\0')
				break;
			else
				length++;
		}
		int res=TRUE;
		for(int i=1;i<=length/2;i++)
		{
			if( *(str+i-1)!=*(str+length-i) )
			{
				res=FALSE;
				break;
			}
		}
		return res;
	}
	


	for(int num=101;num<=1000;num++)
	{
		char * demStr=demConvert(num,10);
		char * binStr=demConvert(num,2);
		char * octStr=demConvert(num,8);
		//char * hexStr=demConvert(num,16);

		if(judgeRt(demStr) && judgeRt(binStr) && judgeRt(octStr))
		{
			printf("%d\n",num);
		}
	}
	
}


