#define NUM 100000
#include <stdio.h>

int binSearch(int aim,int arr[],int lo,int hi);

int main()
{
    int arr[NUM];
    for(int i=1;i<=NUM;i++)
    {
        arr[i-1]=2*i-1;
    }
    int res=binSearch(1,arr,1,NUM);
    printf("result is %d\n",res);
    return 0;
}

int binSearch(int aim,int arr[],int lo,int hi)
{
    if(lo>hi)
        return -1;
    else
    {
        int mid=(lo+hi)/2;
        if(aim==arr[mid-1])
            return mid;
        else if(aim<arr[mid-1])
            return binSearch(aim,arr,lo,mid-1);
        else
            return binSearch(aim,arr,mid+1,hi);
    }
}