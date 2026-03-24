/*
 * head and tail node are added into linked-list before,
 * but it seems that the taverse is ok without head and node,
 * so what is the function of head and node?
 * let us try a program without head and node
 * */

/*
 * here we still use link_list_t not link_list_p_t
 * */

#include <stdio.h>
#include <stdlib.h>

struct link_list{
	int val;
	struct link_list* ptr;
};

typedef struct link_list link_list_t;

link_list_t* init_link();

void trav_link(link_list_t* cursor);

int length(link_list_t* cursor);

int insert(link_list_t* cursor,int val,int pos);

int main()
{
	link_list_t* cursor;
	cursor=init_link();
	trav_link(cursor);
	printf("length of link is %d\n",length(cursor));
	//int res=insert(cursor,99,1);
	//trav_link(cursor);
}

link_list_t* init_link()
{
	link_list_t* node=NULL;
	link_list_t* prev_node=NULL;
	for(int i=5;i>=1;i--)
	{
		node=malloc(sizeof(link_list_t));
		(*node).val=i;
		(*node).ptr=prev_node;
		prev_node=node;
	}

	link_list_t* head;
	head=malloc(sizeof(link_list_t));
	(*head).ptr=node;

	return head;
}

void trav_link(link_list_t* cursor)
{
	int num=1;
	while(cursor!=NULL)
	{
		if(num>=2)
		{
			printf( "%d\n", (*cursor).val );
		}
		cursor=(*cursor).ptr;
		num++;
	}
}

int length(link_list_t* cursor)
{
	int num=1;
	while(cursor!=NULL)
	{
		cursor=(*cursor).ptr;
		num++;
	}
	return num;
}

/*
 * desc:insert a node into specific position
 * param:
 *      val:node value
 *      pos:position
 *      cursor:current link
 * return: 1:insert success
 *        -1:insert failed
 * */

/*
 * if not have a virtual-head node,
 * when insert at head position,it must handle specially
 * so virtual-head node is needed.
 * */
int insert(link_list_t* cursor,int val,int pos)
{
}
