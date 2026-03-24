#include <stdio.h>


int merge(int arr1[],int arr2[])
{
	int length1=sizeof(arr1)/4;
	int length2=sizeof(arr2)/4;
	int length3=length1+length2;
	int arr3[length3];
	
	int p1,p2;
	for(int i=1;i<=length3;i++)
	{	
		int pdx1,pdx2,idx;
		pdx1=p1-1;
		pdx2=p2-1;
		idx=i-1;
		if(p1<=length1 && p2<=length2)
		{
			if(arr1[pdx1]<=arr2[pdx2])
			{
				arr3[idx]=arr1[pdx1];
				p1++;
			}
			else
			{
				arr3[idx]=arr2[pdx2];
				p2++;
			}
		}
		else if(p1>length1)		//p1>length1. p1 reach the end. put remained p2 into arr3.(item from p2 to length2)
		{
			for(int j=p2;j<=length2;j++)
			{
				int jdx=j-1;
				arr3[jdx+length1]=arr2[jdx];
			}
			break;
		}
		else			//p2>length2 . p2 reach the end. put all remained p1 into arr3.(item from p1 to length1)
		{
			for(int j=p1;j<=length1;j++)
			{
				int jdx=j-1;
				arr3[jdx+length2]=arr1[jdx];
			}
			break;
		}
	}
	return arr3[length3];
}

int main()
{
	int arr1[100];
	int arr2[100];
	for(int i=1;i<=100;i++)
	{
		int idx=i-1;
		arr1[idx]=2*i-1;
		arr2[idx]=2*i;
	}
	int arr3[]=merge(arr1,arr2);
	printf("arr3[] length is %d\n",sizeof(arr3)/4);
}
