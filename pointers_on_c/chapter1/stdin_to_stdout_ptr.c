#include <stdio.h>
#include <stdlib.h>
#define INILEN 100

void initCharArr(char* ptr,int len);

int main() {
	char c;
    char* chArr;
	int n;
	chArr=malloc(sizeof(char)*INILEN);
    n=0;
	initCharArr(chArr,INILEN);

	while ( (c = getchar()) != EOF) {
    	*(chArr+n)=c;
		n++;
	}
	printf("%s\n",chArr);
}

void initCharArr(char* ptr,int len)
{
	for(int i=1;i<=len;i++){
		*(ptr+i-1)='\0';
	}
}
