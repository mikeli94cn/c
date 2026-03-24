/*练习1-9 编写一个程序，把它的输入复制到输出，并在此过程中将相连的多个空格用一个空格代替*/

#include <stdio.h>

void main()
{
    char c;
    int flag;

    flag=0;

    while( (c=getchar())!=EOF  )
    {
        if (c==' ' && flag==1)
            ;
        else
        {
            if(c==' ')
                flag=1;
            else
                flag=0;
            putchar(c);            
        }
    }
}