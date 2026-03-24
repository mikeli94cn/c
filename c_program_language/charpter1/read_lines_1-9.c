/*
   @desc:read several lines,print the longest line,and print the length of longest line.
   @input:several lines
   @output:print the longest line,print the length
 */


#include <stdio.h>

int lenLmt;

struct result
{
	int len;
	int flag;
};

struct result readLine(char tmp[],char mLine[])
{
	for(int i=1;i<=lenLmt;i++)
		tmp[i-1]=0;
	struct result rs;
	rs.len=0;
	rs.flag=0;
	char c;
	while( (c=getchar())!=EOF && c!='\n' )
	{
		tmp[rs.len]=c;
		rs.len++;
		if(rs.len==lenLmt)
		{
			int newLenLmt=lenLmt*2;
			//tmp
			char newTmp[newLenLmt];
			char newMLine[newLenLmt];
			for(int i=1;i<=newLenLmt;i++)
			{
				if(i<=lenLmt)
				{
					newTmp[i-1]=tmp[i-1];
					newMLine[i-1]=mLine[i-1];
				}
				else
				{
					newTmp[i-1]='\0';
					newMLine[i-1]='\0';
				}
			}
			tmp=&newTmp;
			mLine=&newMLine;
		}
	}
	if(c==EOF)
		rs.flag=1;
	return rs;
}

void cpLine(char from[],char to[])
{
	for(int i=1;i<=lenLmt;i++)
		to[i-1]=from[i-1];
	return ;
}

int main()
{
	int max=0;
	lenLmt=30;		//EXTERNAL variable.  initial vaule is 30
	char tmp[lenLmt]={};
	char mLine[lenLmt]={};
	//repeatly read lines,until get EOF
	while(1==1)
	{
		struct result rs=readLine(tmp,mLine);
		if(max<rs.len)
		{
			max=rs.len;
			cpLine(tmp,mLine);
		}
		if(rs.flag==1)
			break;
	}
	printf("max line is %s\n",mLine);
	printf("it has char number is %d\n",max);
}
