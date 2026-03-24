#include <stdio.h>
#include <stdlib.h>

struct list{
	int* arr;
	int length;
};

typedef struct list list_t;

int main()
{
	list_t* node;
	node=malloc(sizeof(list_t));
	(*node).arr=malloc(sizeof(int)*100);
	*((node->arr)+0)=1;
	*((node->arr)+1)=2;
	*((node->arr)+2)=3;

	node->length=3;

	printf("%d\n", *((node->arr)+0) );
	printf("%d\n", *((node->arr)+1) );
	printf("%d\n", *((node->arr)+2) );
	printf("length is %d\n", node->length );



}
