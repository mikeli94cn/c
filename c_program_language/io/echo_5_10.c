#include <stdio.h>

int main(int argc,char* argv[])
{
        int i;

        for(int i=1;i<argc;i++)
        {
                printf("%s%s",argv[i],(1<argc-1)?" ":"" );
        }
        printf("\n");
        return 0;
}