#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int len=10;
	char *arr=malloc(len);;
	for(int i=1;i<=len;i++)
	{
		*(arr+i-1)=('A'+i);
		if(i==len)
		{
			printf("array before is:\n");
			for(int n=1;n<=len;n++)
				printf("%c",*(arr+n-1));
			printf("\n");
			int newLen=2*len;
			char *p=malloc(newLen);
			for(int j=1;j<=len;j++)
			{
				*(p+j-1)=*(arr+j-1);
			}
			for(int k=len+1;k<=newLen;k++)
				*(p+k-1)=('B'+k);
			arr=p;
			printf("array after is:\n");
			for(int n=1;n<=newLen;n++)
				printf("%c",*(arr+n-1));
			printf("\n");
			//free old memory
		}
	}
}
