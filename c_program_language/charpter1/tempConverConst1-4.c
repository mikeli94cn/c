/*
    desc:这个程序主要是练习了常量
*/

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    int c,f;
    for(c=LOWER;c<=UPPER;c=c+STEP)
    {
        f=(c-32)*5/9;
        printf("(%d-32)*5/9=%d\n",c,f);
    }
}