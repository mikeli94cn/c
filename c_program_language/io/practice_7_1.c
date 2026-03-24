#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc,char* argv[])
{
    char c;
    while( (c=getchar()) !=EOF )
    {
        if( strcmp(argv[1],"lower")==0 )
        {
            putchar(tolower(c));
        }
        else if( strcmp(argv[1],"upper")==0 )
        {
            putchar(toupper(c));
        }
    }
}