#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE* fptr;

    fptr=fopen("example.txt","w");

    if(fptr==NULL){
        printf("error opening file\n");
        return 1;
    }

    fprintf(fptr, "hello world\n");
    fprintf(fptr, "welcome to c file handling");

    fclose(fptr);

    printf("data successfully written to example.txt\n");
    return 0;
}
