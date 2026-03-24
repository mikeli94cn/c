#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc,char* argv[])
{
    /*
    char* str1="china";
    char* str2="china";

    printf("true is %d,false is %d\n",true,false);
    printf("%d\n", str1==str2 );
    printf("%d\n", strcmp(str1,str2));
    */


    char* str="china";

    printf("%s,%s\n",str,argv[1]);
    printf("%p,%p\n",str,argv[1]);
    if(str==argv[1])
    {
        printf("%s\n == %s\n",str,argv[1]);
    }
    if(strcmp(str,argv[1])==0)
    {
        printf("%s strcmp %s\n",str,argv[1]);
    }
    printf("%d\n",(str==argv[1]));
    printf("%d\n",strcmp(str,argv[1]) );

}