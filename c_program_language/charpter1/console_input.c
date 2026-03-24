#include <stdio.h>
#include<stdlib.h>
#include<conio.h>


void main()
{
	/**
	 *输入一个字符，输出一个字符
	 char c=getchar();
	 putchar(c);
	 */

	/**
	 *输入一段文本，统计其中的换行符
	 *
	 char c;
	 int n=0;
	 while(   (c=getchar()) !=EOF)
	 {
	 if(c=='\n')
	 n++;
	 }
	 printf("======\n");
	 printf("%d\n",n);
	 */

	/**
	 *统计空格、制表符、换行符个数
	 *


	 int c;
	 int n_s,n_t,n_l;
	 n_s=0;
	 n_t=0;
	 n_l=0;

	 while ( (c=getchar()) !=EOF)
	 {
	 if(c==' ')
	 n_s++;
	 else if(c=='\t')
	 n_t++;
	 else if(c=='\n')
	 n_l++;
	 }
	 printf("space:%d,table:%d,new line:%d\n",n_s,n_t,n_l);
	 */


	/**
	 *输入复制到输出，连续多个空格用一个空格代替
	 *
	 
	char c,prev_c;
	c='\0';
	prev_c='\0';


	while(1)
	{
		c=getchar();

		if (c!=EOF)
		{
			

			if(c==' '&&prev_c==' ')
				printf("");
			else
				printf("%c",c);
			prev_c=c;
		}
		else 
			break;
	}
	*/

	/**
	 *输入复制到输出，制表符替换成\t，回退符替换成\b，反斜杠替换成\\
	 */
	 char c;
	 while(  (c=getch()) != EOF  )
	 {
	 	if(c==9)
		{
			printf("\\t");
			//printf("%d",c);
			//printf("t");
		}
		else if(c==8)
		{
			printf("\\b");
			//printf('b');
		}
		else if(c==92)
		{
			printf("\\\\");
			//printf("");
		}
		else
			printf("%c",c);

	 }


}
