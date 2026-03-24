#include <stdio.h>

int main()
{
	int arr[10000]={};
	arr[0]=1;
	arr[1]=1;
	int n=2;
	while(1==1)
	{
		if((arr[n-1]+arr[n-2])<=10000   )
			arr[n]=arr[n-1]+arr[n-2];
		else
			break;
		n++;
	}
	for(int i=1;i<=10000;i++)
	{
		if(arr[i-1]!='\0')
			printf("%d\n",arr[i-1]);
	}
}
