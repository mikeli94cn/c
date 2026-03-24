void PrintLoop(int num)
{
	for(int i=1;i<=num;i++)
	{
		printf("%d\n",i);
	}
	return ;
}

void PrintRecur(int num)
{
	if(num==1)
		printf("%d\n",num);
	else
	{
		PrintRecur(num-1);
		printf("%d\n",num);
	}
	return ;
}

int SumLoop(int num)
{
	int sum;
	sum=0;
	for(int i=1;i<=num;i++)
		sum=sum+i;
	return sum;
}

int SumRecur(int num)
{
	if(num==1)
		return 1;
	else
		return SumRecur(num-1)+num;
}

char PrimeLoop(int num)
{
	char primeFlag;
	for(int i=2;i<=num-1;i++)
		if(num%i==0)
			return 'c';
	return 'p';
}


int PrimeRecurImpl(int m,int n)
{
	if(n>2)
		return PrimeRecurImpl(m,n-1) * (m%n);
	else
		return m%2;
}

char PrimeRecur(int num)
{
	if( PrimeRecurImpl(num,num-1)==0 )
		return 'c';
	else
		return 'p';
}
