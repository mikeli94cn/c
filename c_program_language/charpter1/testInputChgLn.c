#include<stdio.h>

int main()
{
    char c;
    
    while(1==1)
    {
        c=getchar();
        if(c!='\n')
            //putchar(c);
            printf("%c\n",c);
        else
            break;
    }
    
    /*
        c=getchar();
        if(c!='0')
            putchar(c);
    */       
}
