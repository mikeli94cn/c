#include<stdio.h>

int main()
{
    char c;
    int num=0; 
    while(1==1)
    {
        c=getchar();
        if(c!='\n')
        {
            num++;
            putchar(c);
        }    
        else
            break;
    }
    printf("总共%d个字符\n",num);
    
    /*
        c=getchar();
        if(c!='0')
            putchar(c);
    */       
}
