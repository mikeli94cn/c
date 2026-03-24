#include <stdio.h>
#define INILEN 100

int main()
{
	char chArr[INILEN];
	char c;
	int idx=0;
	while( (c=getchar()) != EOF)
	{
		chArr[idx]=c;
		idx++;
	}
	
	chArr[idx]='\0';
	printf("\n");//new line
	printf("%s\n",chArr);
}
