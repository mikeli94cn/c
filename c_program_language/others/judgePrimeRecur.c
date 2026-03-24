int judgePrimeRecurAction(int m,int n)
{
	if(n>=2 && n<=m-1)
		return judgePrimeRecurAction(m,n-1)*(m%n);
	else if(n==1)
		return 1;
}

int judgePrimeRecur(int num)
{
	return judgePrimeRecurAction(num,num-1);
}
