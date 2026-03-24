#include <stdio.h>

int fabb(int n)
{
	int rs;
	if(n==1)
		rs=1;
	else if(n==2)
		rs=1;
	else
		rs=fabb(n-1)+fabb(n-2);
	if(rs<=10000)
		printf("%d\n",rs);
	return rs;
}

int main()
{
	fabb(10);
}
