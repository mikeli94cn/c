/*
练习1-12 编写一个程序，以每行一个单词的形式打印输入-
*/

/*
这道题的注意点
一是记得改变flag的值
二是判断这个字符是不是字母
*/

/*
1、flag=IN,字母：flag不变，打印该字符
2、flag=IN,空白：flag改为OUT，打印换行
3、flag=OUT,字母：flag改为IN，打印该字符
4、flag=OUT,空白：flag不变，不打印
*/

#define OUT 0
#define IN 1
#include <stdio.h>

void main()
{
    char c;
    int flag;

    flag=0;

    while( (c=getchar())!=EOF )
    {
        //把上面的逻辑翻译成代码
        if(flag==IN)
        {
            if( ('a'<=c && c<='z') || ('A'<=c && c<='Z') )//判断字符是不是字母，此处容易出错。，不能用'a'<=c<'z'，要用'a'<=c && c<='z'
                putchar(c);//A:65,Z:90,a:97,z:122
            else
            {
                flag=OUT;
                putchar('\n');
            }
        }
        else
        {
            if( ('a'<=c && c<='z') || ('A'<=c && c<='Z') )
            {
                flag=IN;
                putchar(c);
            }
        }
    }
}