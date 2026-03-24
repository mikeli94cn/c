/*
清理屏幕
移植MS Turbor C的clrscr()函数到linux
*/
#include <stdio.h>

//clrscr() function definition
void clrscr(void)
{
	system("clear");
}

int main()
{
	clrscr();//clear output screen
	printf("hello world!");//print message
	return 0;
}
