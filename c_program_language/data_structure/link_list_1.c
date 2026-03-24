
//define link list struct.
//contain value and next element pointer

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct link_list
{
	char val;
	struct link_list* ptr;
};

//define type 
typedef struct link_list link_list_t;

/*
   create link

   insert node
   delete node
   update node
   search node

   iterator link
   reverse link
   sort link
 */

link_list_t* createlink(char* arr)
{
	int num;
	for(num=1;num<=INT_MAX;num++)
	{
		if(arr[num-1] == '\0')
		{
			break;
		}
	}
	link_list_t* node;
	link_list_t* prv_node;
	//prv_node->ptr=NULL;

	for(int i=num;i>=1;i--)
	{
		node->val=arr[i-1];
		node->ptr=prv_node;
		prv_node=node;
	}
	return node;
}

//insertnode()

//deletenode()

//updatenode()

//searchnode()

void iterlink(link_list_t* lk)
{
	//while((*lk).ptr != NULL)
	for(int i=1;i<=5;i++)
	{
		printf("%c->",(*lk).val);
		lk=(*lk).ptr;
	}
}

//revlink()

//sortlink()

int main()
{
	char* str="hello";
	link_list_t* prv_node;
	link_list_t* node;
	prv_node->ptr=NULL;
	node->val='o';
	node->ptr=prv_node;
	prv_node=node;
	node->val='l';
	node->ptr=prv_node;
}
