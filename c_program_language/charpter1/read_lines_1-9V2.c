#include <stdio.h>

#define LINE 30
#define COL 100
int main()
{
	char arr[LINE][COL];
	int length1=sizeof(arr)/sizeof(arr[0]);
	int length2=sizeof(arr[0])/sizeof(arr[0][0]);
	
	for(int i =1;i<=LINE;i++)
		for(int j=1;j<=COL;j++)
			arr[i][j]='\0';
	
	int lines=0;
	int charCnt=0;
	int ldx=0;
	int cdx=0;
	char c;
	int max=0;
	while( (c=getchar())!=EOF )
	{
		
		if(c=='\n')
		{
			if(max<charCnt)
				max=charCnt;
			lines++;
			charCnt=0;
		}
		else
		{	
			ldx=lines+1-1;
			cdx=charCnt+1-1;
			arr[ldx][cdx]=c;
			charCnt++;
		}
	}
	if(max<charCnt)
		max=charCnt;
	printf("lines is %d,max line char is %d\n",lines,max);
	int endFlag=0;
	for(int i=1;i<=LINE;i++)
	{
		int idx=i-1;
		if(arr[idx][0]=='\0')
			break;
		else
			printf("%s\n",arr[idx]);
	}
}
