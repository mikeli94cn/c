#include <stdlib.h>
#include <stdio.h>
struct link_list{
	int value;
	struct link_list* ptr;
};

typedef struct link_list link_list_t;

link_list_t* init_link();

void trav_link(link_list_t* cursor);

int main()
{

	link_list_t* cursor;

	cursor=init_link();

	trav_link(cursor);

}

link_list_t* init_link()
{

	link_list_t* node;
	link_list_t* prev_node;
	for(int i=6;i>=1;i--)
	{

		node=malloc(sizeof(link_list_t));

		if((i!=1) && (i!=6))
		{
			(*node).value=i;
		}

		if(i==6)
		{
			(*node).ptr=NULL;	
		}
		else
		{
			(*node).ptr=prev_node;
		}
		prev_node=node;
	}

	return node;
}

void trav_link(link_list_t* cursor)
{
	int num=1;
	while( (*cursor).ptr != NULL )
	{
		if(num>=2)
		{
			printf("%d\n",(*cursor).value);
		}
		cursor=(*cursor).ptr;
		num++;
	}
}
