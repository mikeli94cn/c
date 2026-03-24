#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define NUM 50

void init_arr(int arr[],int len)
{
    srand(time(NULL));
    for(int i=1;i<=len;i++)
    {
        arr[i-1]=rand()%len+1;
    }
}

void print_arr(int arr[],int len)
{
    for(int i=1;i<=len;i++)
    {
        printf("%d ",arr[i-1]);
    }
    printf("\n");
}

void shell_sort_base_loc(int arr[],int len,int base,int loc)
{
    for(int i=loc+base;i<=len;i=i+base) 
    {
        int aimPos=i;
        for(int j=loc;j<=i-base;j=j+base) 
        {
            if(arr[i-1]<arr[j-1])
            {
                aimPos=j;
                break;
            }
        }

        //elements from position aimPos to i-base , all move backward base positions.
        //such as:aimPos move to aimPos+base , aimPos+base move to aimPos+2base, i-base move to i
        //at last,put i into position aimPos
        int saveElem=arr[i-1];
        for(int k=i-base ; k>=aimPos ; k=k-base) 
        {
            arr[k+base-1]=arr[k-1];
        }
        arr[aimPos-1]=saveElem;
    }
}

void shell_sort_base(int arr[],int len,int base)
{
    for(int loc=1;loc<=base;loc=loc+1) 
    {
        shell_sort_base_loc(arr,NUM,base,loc);
    }    
}

void shell_sort(int arr[],int len) 
{
    int max;
    max=(int)pow(2,(int)log2(len));
    for(int base=max;base>=1;base=base/2)
    {
        shell_sort_base(arr,NUM,base);
    }
}

void main() 
{
    
    int arr[NUM];

    init_arr(arr,NUM);

    print_arr(arr,NUM);

    shell_sort(arr,NUM);

    print_arr(arr,NUM);
    
}