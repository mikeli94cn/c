#include <stdio.h>
int main()
{
	FILE *fp;
	//fp=fopen("lishuo.c","r");//only read
	//fp=fopen("lishuo.c","w");//write,if file not exist,file will be created
	//fp=fopen("lishuo.c","a");//append,if file not exist,file will be created
	if( (fp=fopen("lishuo.c","r"))==NULL )
	{
		printf("can't open file %s\n","lishuo.c");
	}	
	else
	{
		printf("open file %s success\n","lishuo.c");
		int c;
		int cnt=0;
		while( (c=getc(fp))!=EOF )
			cnt++;
			//putchar(c);
			//putc(c,stdout);
		printf("%d\n",cnt);
	}
}
