/*
这个程序实现了将光标定位到屏幕X，Y像素，然后输出
移植一个MS Tubor C上面的方法到linux
*/


#include <stdio.h>

//gotoxy() function definition
void gotoxy(int x,int y)
{
	printf("%c[%d;%df",0x1B,y,x);
}

int main()
{
	int x=30,y=20;
	gotoxy(x,y);//move cursor position
	printf("hello wolrd!");//print message
	return 0;
}
