/*
desc:input several lines.print lines and max line char count,print all input lines.
input:several lines,end by EOF
output:print lines ,print max line char count,print all input lines.
*/
#include <stdio.h>
#include <string.h>

#define COL 30
int main()
{
	char tmp[30]={};
	char maxLine[30]={};
	char c='\0';
	int lines=0;
	int charCnt=0;
	int max=0;
	while( (c=getchar()) != EOF )
	{
		if(c!='\n')
		{
			tmp[charCnt]=c;
			charCnt++;
		}
		else
		{
			/*
			1.if charCnt>max,set max
			2.if charCnt>max,set maxLine[]
			
			4.tmp[] reset
			5.charCnt reset
			6.lines++
			*/
			if(max<charCnt)
			{
				max=charCnt;
				for(int i=1;i<=charCnt;i++)
				{
					maxLine[i-1]=tmp[i-1];
				}
			}
			for(int i=1;i<=charCnt;i++)
				tmp[i-1]='\0';
			charCnt=0;
			lines++;
		}
	}
	/*
	handle the last line:
	1.if charCnt>max,set max
	2.if charCnt>max,set maxLine[]
	

	*/
	if(max<charCnt)
	{
		max=charCnt;
		for(int i=1;i<=charCnt;i++)
		{
			maxLine[i-1]=tmp[i-1];
		}
	}
	

	/*print line,the max line char count,the max line*/
	printf("lines is %d\n",lines);
	printf("the max line char count is %d\n",max);
	printf("%s\n",maxLine);

	return 0;
}