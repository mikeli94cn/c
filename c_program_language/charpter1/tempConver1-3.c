/*
    desc:这个程序主要练习了循环
*/

#include <stdio.h>
main()
{
    /*
    Version 1
    Integer Division
    Straight Version
    */
    /*
    int c1=0;
    int c2=20;
    int c3=40;
    int c4=60;
    int c5=80;
    int c6=100;
    int c7=120;
    int c8=140;
    int c9=160;
    int c10=180;
    int c11=200;
    int c12=220;
    int c13=240;
    int c14=260;
    int c15=280;
    int c16=300;

    int f1=(c1-32)*5/9;
    int f2=(c2-32)*5/9;
    int f3=(c3-32)*5/9;
    int f4=(c4-32)*5/9;
    int f5=(c5-32)*5/9;
    int f6=(c6-32)*5/9;
    int f7=(c7-32)*5/9;
    int f8=(c8-32)*5/9;
    int f9=(c9-32)*5/9;
    int f10=(c10-32)*5/9;
    int f11=(c11-32)*5/9;
    int f12=(c12-32)*5/9;
    int f13=(c13-32)*5/9;
    int f14=(c14-32)*5/9;
    int f15=(c15-32)*5/9;
    int f16=(c16-32)*5/9;

    printf("(%d-32)*5/9=%d\n",c1,f1);
    printf("(%d-32)*5/9=%d\n",c2,f2);
    printf("(%d-32)*5/9=%d\n",c3,f3);
    printf("(%d-32)*5/9=%d\n",c4,f4);
    printf("(%d-32)*5/9=%d\n",c5,f5);
    printf("(%d-32)*5/9=%d\n",c6,f6);
    printf("(%d-32)*5/9=%d\n",c7,f7);
    printf("(%d-32)*5/9=%d\n",c8,f8);
    printf("(%d-32)*5/9=%d\n",c9,f9);
    printf("(%d-32)*5/9=%d\n",c10,f10);
    printf("(%d-32)*5/9=%d\n",c11,f12);
    printf("(%d-32)*5/9=%d\n",c13,f13);
    printf("(%d-32)*5/9=%d\n",c14,f14);
    printf("(%d-32)*5/9=%d\n",c15,f15);
    printf("(%d-32)*5/9=%d\n",c16,f16);
    */

    /*
    Version 2
    While-Version
    Integer
    */
    /*
    int c=0;
    int f=0;
    while(c<=300)
    {
        f=(c-32)*5/9;
        printf("(%d-32)*5/9=%d\n",c,f);
        c=c+20;
    }
    */

    /*
    Version 3
    do-While Version
    Integer
    */
    /*
    int c=0;
    int f=0;
    do
    {
        f=(c-32)*5/9;
        printf("(%d-32)*5/9=%d\n",c,f);
        c=c+20;
    }while(c<=300);   
    */

    /*
    Version 4
    For Loop
    Integer
    */
    int f;
    for(int c=0;c<=300;c=c+20)
    {
        f=(c-32)*5/9;
        printf("(%d-32)*5/9=%d\n",c,f);
    }

    //printf("(0-32)*5/9=%f\n",f2);
    //printf("(0-32)*5/9.0=%f\n",f3);

    //float f2=(c1-32)*5/9;
    //double f3=(c1-32)*5/9.0;
    //float f2
    
}