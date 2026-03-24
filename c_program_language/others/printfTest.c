/*
int:
%d demical can express int or long? No,%d just express int, especially signed int
%o
%x

char(byte):
%c

long long:
%lld
%llo
%llx

so if we printf a number which may beyond int scope,we should not use %d,we should use %lld

*/

#include <stdio.h>

int main()
{

    int i1=1024;
    long lo1=1048576L; //1024*1024=1048576
    printf("%d\n",i1);
    printf("%d\n",lo1);
    long long lo2=22000000000;  //22*10^9
    long long lo3=1099511627776;//= 2^40 = 16^10
    printf("%lld\n",lo2);//22000000000
    printf("%llx\n",lo3);//10000000000


    /*
    int : 4 Bytes _ _ _ _ -2^31 ~ 2^31-1 ~=2*10^9
    long: 4 Bytes _ _ _ _ ,we dont use it
    long long : 8 Bytes _ _ _ _ _ _ _ _ -2^63 ~ 2^63-1 ~=8*10^18
    */

}