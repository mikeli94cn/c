/*

 random access memory

1\memory express and memory scope in machine
2\data type
3\data structure
4\function
*/

/*
desc:
input:
output:

&
*

*/

#include <stdio.h>
int main()
{

    /*
    *: 取值；获取地址里存储的值（根据类型）
    &: 取地址；获取地址
    */

    /*
    int *p;
    p=&arr;
    printf("%d\n",*p);//p=6422136
    printf("%d\n",p);
    printf("%d\n",*(p+1));//p=6422136+4，注意地址根据类型（int）+4，不是+1
    printf("%d\n",p+1);
    char *p_new;
    p_new=&arr;
    printf("%d\n",*p_new);//p_new=6422136
    printf("%d\n",p_new);
    printf("%d\n",*(p_new+1));//p_new=6422136+1，注意地址根据类型大小（char）+1
    printf("%d\n",p_new+1);

    

    arr[0]=127;// 127 :_ _ _ 11111111  
    arr[1]=15;// 15 : _ _ _ 00001111
    arr[2]=3;// 3 : _ _ _ 00000011
    printf("%d\n",*p_new);//output:127
    printf("%d\n",*(p_new+1));//p_new=6422136+1,output:0
    printf("%d\n",*(p_new+2));//p_new=6422136+2,output:0
    printf("%d\n",*(p_new+3));//p_new=6422136+3,output:0
    printf("%d\n",*(p_new+4));//p_new=6422136+4=6422140,output:15

    arr[0]=256;// 256 :_ _ 1 _  
    printf("%d\n",*p_new);//output:0
    printf("%d\n",*(p_new+1));//p=6422136+1,output:1

    */


    char c1='A';
    char c2='B';
    char c3='C';
    int i1=1024;
    int i2=1025;

    printf("%d\n",c1);
    printf("%d\n",&c1);
    //printf("%n\n",&c1);
    printf("%p\n",&c1);
    printf("%d\n",*(&c1));
    /*
    printf("%lld\n",c1);
    printf("%lld\n",&c1);
    printf("%lld\n",*(&c1));

    printf("%d\n",c2);
    printf("%d\n",&c2);
    printf("%d\n",*(&c2));

    printf("%lld\n",c2);
    printf("%lld\n",&c2);
    printf("%lld\n",*(&c2));
    
    printf("%d\n",c3);
    printf("%d\n",&c3);
    printf("%d\n",*(&c3));

    printf("%lld\n",c3);
    printf("%lld\n",&c3);
    printf("%lld\n",*(&c3));
    
    printf("%d\n",i1);
    printf("%d\n",&i1);
    printf("%d\n",*(&i1));

    printf("%lld\n",i1);
    printf("%lld\n",&i1);
    printf("%lld\n",*(&i1));
    */

/* pointer, address, Array var ,* & */

/* 数据的物理存储和数学抽象，二进制，以及原码、反码、补码*/
}