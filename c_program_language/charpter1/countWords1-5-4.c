/*
0，1都是无意义的幻数
改用定义常量
*/

#define OUT 0/*在单词内*/
#define IN 1/*在单词外*/

#include <stdio.h>

void main()
{

	/*
	   flag有两种表示（OUT，IN），OUT表示前一个字符是空白（\n \t ' '）,IN表示前一个字符是字母

	   1，遇到字母，flag==OUT。将flag改为IN，cnt+1
	   2，遇到字母，flag==IN。不改变
	   3，遇到空白，flag==OUT。不改变
	   4，遇到空白，flag==IN。将flag改为OUT
	 */
	char c;
	int flag,cnt;

	flag=OUT;
	cnt=0;

	while ( (c=getchar())!=EOF )
	{
		if(c=='\n' || c=='\t' || c==' ')
		{
			if(flag==IN)
				flag=OUT;
		}
		else
		{
			if(flag==OUT)
			{
				flag=IN;
				cnt++;
			}
		}
	}
	printf("%d words\n",cnt);
}
