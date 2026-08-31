#include <stdio.h>
#include <string.h>

#define MAX_LINE 256
#define MAX_WORDS 50

int main(void){
    char line[MAX_LINE];
    char* words[MAX_WORDS];

    int count=0;

    printf("enter a line:");

    fgets(line, sizeof(line), stdin);

    char* token=strtok(line, " \n");

    while(token != NULL && count< MAX_WORDS ){
	words[count]=token;
	count++;

	token=strtok(NULL, " \n");
    }

    printf("words:\n");

    for(int i=0;i<count;i++){
	printf("word[%d]=%s\n",i,words[i]);
    }

    return 0;



}
