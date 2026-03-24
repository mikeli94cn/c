int calcSumLoop(int num)
{
	int sum;
	sum=0;
	for(int i=1;i<=num;i++)
		sum=sum+i;
	return sum;
}

int calcSumRecur(int num)
{
	if(num==1)
		return 1;
	else
		return calcSumRecur(num-1)+num;
}
