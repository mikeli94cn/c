#include <stdio.h>
main()
{
    /* 
    transform meaning character in C 
    \n
    \t
    \b
    \"
    \\
    */
    printf("hello \cworld\n");//print character c
    printf("hello \aworld\n");//print a bell
    printf("hello \bworld\n");//print backspace
    printf("hello \dworld\n");//print character d
    printf("hello \eworld\n");//print  <- symbol
    printf("hello \fworld\n");//print  male symbol
    printf("hello \gworld\n");//print character g
    printf("hello \hworld\n");//print character h
    printf("hello \iworld\n");//print character i
    printf("hello \vworld\n");//print character right up symbol
    printf("hello \/world\n");//print character /
    printf("hello \Aworld\n");//print character A
    

}