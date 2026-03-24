#include <stdio.h>
main()
{
    printf("hello world\n");

    /* 
    transform meaning character in C 
    \n
    \t
    \b
    \"
    \\
    */
    printf("hello \nworld");
    printf("hello \tworld");
    printf("hello \bworld");
    printf("hello \"world");
    printf("hello \\world");
}