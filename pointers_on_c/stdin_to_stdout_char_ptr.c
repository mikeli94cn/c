#include <stdio.h>
#include <stdlib.h>
#define INITSTR 10
#define INITNUM 10
#define INITLEN 100
#include "pub_lib.c"

int main()
{
    

    int int_arr[INITNUM];    
    for(int i=1;i<=INITNUM;i++)
    {
        int_arr[i-1]=-1;
    }
    int int_idx=0;
    
    char *str_arr[INITSTR];
    str_arr[0]=(char*)&int_arr[0];

    for (int i = 2; i <= sizeof(str_arr) / sizeof(str_arr[0]); i++)
    {
        // char chArr[100];
        // str_arr[i-1]=chArr;
        str_arr[i - 1] = malloc(sizeof(char) * INITLEN);
    }

    
    
    char c;
    char prev='\0';
    int str_idx = 0;
    int len_idx = 0;

    char num[10];
    int num_idx=0;


    while ((c = getchar()) != EOF)
    {
        if (str_idx==0)
        {
            if(c!='-')
            {
                num[num_idx]=c;
                num_idx++;
            }
            else
            {
                prev='-';
                
            }

            if(c=='1'&&prev=='-')
            {
                //skip store this number && reset prev flag to avoid misuse
                prev='\0';
            }

            if(c==' ')
            {
                int char_num=num_idx;
                exch(num,char_num);
                num[num_idx]='\0';
                int int_num=atoi(num);
                int_arr[int_idx]=int_num;
                int_idx++;
            }
            if(c=='\n')
            {
                str_idx++;
            }
        }
        else
        {
            if (c != '\n')
            {
                *(str_arr[str_idx] + len_idx) = c;
                len_idx++;
            }
            else
            {
                *(str_arr[str_idx] + len_idx) = '\0';
                str_idx++;
                len_idx = 0;
            }
        }
    }

    for(int i=1;i<=str_idx;i++)
    {
        if(i==1)
        {
            int* ptr=(int*)str_arr[0];
            /*
            for(int n=1;n<=INITNUM;n++)
            {
                if( *(ptr+n-1) != -1 )
                {
                    printf("%d ",*(ptr+n-1));
                }
            }            
            printf("\n");
            */
           printf("%d\n",*ptr);
        }
        else
        {
            printf("%s\n",str_arr[i-1]);
        }
    }
    
}

