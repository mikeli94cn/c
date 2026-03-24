#include<stdio.h>

int main()
{
    double x,y;
    for(int x=0;x<=300;x=x+20)
    {
    //y=(11/20)*x-17
    y=11*x/20-17;
    printf("x=%.2d,y=%.2d\n",x,y);
    }
}
