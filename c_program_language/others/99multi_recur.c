/*
desc:implement 9*9 multi table in recursion.
input:none.
output:print 9*9 multi table.
*/

#include <stdio.h>

void singlePrint(int n,int m);//declaration method in advance
void single(int n);//declaration method in advance
void multi(int n);//declaration method in advance

int main()
{
	multi(9);
}

void multi(int n)
{
	if(n==1)
		;
	else
		multi(n-1);
	single(n);
}

void single(int n)
{
	singlePrint(n,n);
	printf("\n");
}

void singlePrint(int n,int m)
{
	if(m==1)
		;
	else
		singlePrint(n,m-1);
	printf("%d*%d=%d ",n,m,n*m);
}


