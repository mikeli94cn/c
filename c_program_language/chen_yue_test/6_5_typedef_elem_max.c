#include <stdio.h>

#define MAXN 10

typedef float ElementType;

ElementType max(ElementType S[],int N);

int main()
{
	ElementType S[MAXN];
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
		scanf("%f",&S[i-1]);
	printf("%.2f\n",max(S,N));
}

ElementType max(ElementType S[],int N)
{
	ElementType max=S[0];
	for(int i=2;i<=N;i++)
	{
		if(S[i-1]>max)
			max=S[i-1];
	}
	return max;
}
