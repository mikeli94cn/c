struct link_list{
	int value;
	struct link_list* ptr;
};
typedef struct link_list* link_node_p_t;

link_node_p_t init_link();

void trav_link(link_node_p_t cursor);

int main()
{
	link_node_p_t cursor=init_link();
	trav_link(cursor);
}

link_node_p_t init_link()
{

}

void trav_link(link_node_p_t cursor)
{

}


