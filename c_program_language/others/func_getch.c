/*
getche():不用缓存，输入这个字符就可以获取到然后使用。并且带回显（输入一个字符时会把这个字符显示出来）
getch():不用缓存，输入这个字符就可以获取到然后使用。不带回显（输入一个字符时不会把这个字符显示出来）
移植MS Turbor C 的getche() getch()函数到linux
*/

#include <termios.h>
#include <stdio.h>

static struct termios old,new;

void initTermios(int echo)
{
	tcgetattr(0,&old);//grab old terminal i/o settings
	new=old;//make new seetings same as old settings
	new.c_lflag&=~ICANON;//disable buffered i/o
	new.c_lflag&=echo ?ECHO : ~ECHO;//set echo mode
	tcsetattr(0,TCSANOW,&new);//apply terminal io settings
}

/*restore old terminal i/o settings*/
void resetTermios(void)
{
	tcsetattr(0,TCSANOW,&old);
}

/*read 1 character-echo defines echo mode*/
char getch_(int echo)
{
	char ch;
	initTermios(echo);
	ch=getchar();
	resetTermios();
	return ch;
}

/*
   read 1 character without echo
   getch() function definition.
 */
char getch(void)
{
	return getch_(0);
}

/*
   read 1 character with echo
   getche() function definition.
 */
char getche(void)
{
	return getch_(1);
}


int main(void)
{
	char c;
	
	printf("(getche example) please enter a character: ");
	c=getche();
	printf("\nYou entered:%c\n",c);

	printf("(getch example) please enter a charater:");
	c=getch();
	printf("\nYou entered:%c\n",c);

	return 0;
}

