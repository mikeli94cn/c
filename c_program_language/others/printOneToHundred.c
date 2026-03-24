
/*
desc:print one to num in loop
argv:a positive integer
return:null
*/
void printOneToNumLoop(int num)
{
	for(int i=1;i<=num;i++)
		printf("%d\n",i);
	return;
}


/*
desc:print one to num in recursion
argv:a positive integer
return:null
*/
void printOneToNumRecur(int num)
{
	if(num>=2)
		printOneToNumRecur(num-1);
	printf("%d\n",num);
	return;
}
