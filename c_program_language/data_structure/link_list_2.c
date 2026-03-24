
//define link list struct.
//contain value and next element pointer

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>


//define type 
struct link_list
{
	char val;
	struct link_list* ptr;
};

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
	//get char_arr length
	int num;
	for(num=0;num<=INT_MAX;num++)
	{
		if( *(arr+num) =='\0')
		{
			break;
		}
	}
	
	//create tail node
	link_list_t* next_node;
	next_node=(link_list_t* )malloc(sizeof(link_list_t));
	(*next_node).ptr=NULL;

	//declare head node
	link_list_t* node;

	//create each node
	for(int i=num;i>=1;i--)
	{
		node=(link_list_t* )malloc(sizeof(link_list_t));
		(*node).val=*(arr+i-1);
		(*node).ptr=next_node;
		next_node=node;
	}

	link_list_t* head_node;
	head_node=(link_list_t* )malloc(sizeof(link_list_t));
	(*head_node).ptr=node;

	//return head node
	return head_node;
}

/*
desc : insert node in link_list
param : position(int type) and element(char type)
return : 0 (success) and 1 (failed)
*/
int insertnode(link_list_t* node,int pos,char elem)
{
	link_list_t* cur_node;
	link_list_t* prv_node;
	link_list_t* tmp_node;

	cur_node=node;
	for(int i=1;i<=pos;i++)
	{
		prv_node=cur_node;
		cur_node=(*cur_node).ptr;
	}

	tmp_node=(link_list_t* )malloc(sizeof(link_list_t));
	(*tmp_node).val=elem;
	(*tmp_node).ptr=cur_node;
	(*prv_node).ptr=tmp_node;

}

//deletenode()

//updatenode()

//searchnode()

void iterlink(link_list_t* lk)
{
	int i=1;
	while( (*lk).ptr != NULL)
	{
		if(i != 1)
		{
			printf("%c ",(*lk).val);
		}
		lk=(*lk).ptr;
		i=i+1;
	}
}

//revlink()

//sortlink()

int main()
{
	char* str="hello";
	link_list_t* lk;
	
	//create link_list
	lk=createlink(str);



	//insert link_list
	insertnode(lk,3,'U');

	iterlink(lk);
}
