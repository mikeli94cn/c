/*
   统计行数
   统计单词数
   统计字符数
   If else的结构需要注意。
 */

#define OUT 0
#define IN 1
#include <stdio.h>

void main()
{
	int nl,nw,nc,flag;
	char c;
	nl=0;
	nw=0;
	nc=0;
	flag=OUT;

	while( (c=getchar())!=EOF )
	{
		/*
		nc++;
		if(c=='\n')
			nl++;
		*/
		if(c=='\n' || c==' ' || c=='\t')
			if(flag==IN)
				flag=OUT;
			else
				if(flag==OUT)
				{	
					flag=IN;
					nw++;
				}
	}
	printf("%d %d %d\n",nl,nw,nc);
}
