#include <stdio.h>

void pr(int *ip)
{
	printf("ip point to %p,and the value in the address is %d\n",ip,*ip);
}

void swapWrong(int x,int y)
{
	int tmp;
	tmp=y;
	y=x;
	x=tmp;
}

/*
void swapAnd(int x,int y)
{
	int tmp;
	tmp=&y;
	&y=&x;
	&x=tmp;
}

void swapPt(int x,int y)
{
	int *px;
	int *py;
	px=&x;
	py=&y;
	&x=py;
	&y=px;
}
*/
void swap(int *px,int *py)
{
	int tmp=*py;
	*py=*px;
	*px=tmp;
}

int main()
{
	int x=1,y=2,z[10];
	int *ip;
	int *iq;
	double *dp;
	double atof(char *);

	
	z[0]=999;
	ip=&x;
	pr(ip);
	y=*ip;
	pr(ip);
	*ip=0;
	pr(ip);
	ip=&z[0];
	pr(ip);

	*ip=*ip+10;
	y=*ip+1;
	iq=ip;

	int m=1;
	int n=2;
	printf("m=%d,n=%d\n",m,n);
	swap(&m,&n);
	printf("m=%d,n=%d\n",m,n);

}
