/*
    程序练习if-else选择
*/
main()
{
    int aim,guess,num;
    aim=100;
    num=3;
    while(num>=1)
    {
        printf("please guess a number:\n");
        scanf("%d",&guess);
        if(guess<aim)
            printf("guess %d < aim,please retry,remain %d chance\n",guess,num-1);
        else
        {
            if(guess>aim)
                printf("guess %d > aim,please retry,remain %d chance\n",guess,num-1);
            else
            {
                printf("guess %d correct!aim is %d,congrutulations!\n",guess,aim);
                break;
            }
        }
        num--;
    }
}