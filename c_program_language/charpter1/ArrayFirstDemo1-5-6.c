/*
下面编写一个用来统计各个数字、空白符（空格符、制表符及换行符）以及所有其他字符出现次数的程序。
*/

#include <stdio.h>

void main()
{
    char c;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    int nwhite,nothers;
    nwhite=0;
    nothers=0;

    while( (c=getchar())!=EOF  )
    {
        if(c>='0' && c<='9') //0~9的字符，要用字符来表示，不能当做数值处理
            arr[c-'0']++; //这里利用了字符型和数字型的互相转换。并且用到了数学里映射（散列）的思想
            /*
            如果不用映射（散列）的思想，就要写一个switch函数
            */
            /*
            {
                switch (c)
                {
                    case '0':
                        arr[0]++;
                        break;
                    case '1':
                        arr[1]++;
                        break;                    
                    case '2':
                        arr[2]++;
                        break;                 
                    case '3':
                        arr[3]++;
                        break;
                    case '4':
                        arr[4]++;
                        break;
                    case '5':
                        arr[5]++;
                        break;                                                               
                    case '6':
                        arr[6]++;
                        break;  
                    case '7':
                        arr[7]++;
                        break;
                    case '8':
                        arr[8]++;
                        break;
                    case '9':
                        arr[9]++;
                        break;                                                                              
                    default:
                        break;
                }
            }//switch 函数太长了，还是用映射的思想简化
            */


        /*
        if(c>=48 && c<=57) //如果用数值表示，要用ASCII码值，0是48
            arr[c-48]++; //如果用数值表示，0是48
        */
        else if(c==' ' || c=='\t' || c=='\n')
                nwhite++;
             else
                nothers++;
    }
    
    //array size
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=arrSize-1;i++)
        printf("%d ",arr[i]);
    printf("white space is %d,others char is %d\n",nwhite,nothers);
}