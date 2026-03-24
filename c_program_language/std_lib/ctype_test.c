#include <ctype.h>
#include <stdio.h>

void main()
{
	char c='9';
	printf("%d\n",isalnum(c));
	printf("%d\n",isdigit(c));

	char lowC='a';
	printf("%c\n",toupper(lowC));
	printf("%c\n",tolower(lowC));

	char upC='A';
	printf("%c\n",tolower(upC));

}
