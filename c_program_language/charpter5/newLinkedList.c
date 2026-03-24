struct linkedList{
	int value;
	struct linkedList * ptr;
};

typedef struct link{
	int value;
	struct link * ptr;
} link;

/*
typedef struct{
	int value;
	struct link2 *ptr;
}link2;
*/

int main()
{
	struct linkedList lk1;
	struct linkedList lk2;
	lk1.value=10;
	lk1.ptr=&lk2;


	link lk3;
	link lk4;
	lk3.value=100;
	lk3.ptr=&lk4;

	/*
	link2 lk5;
	link2 lk6;
	lk5.value=1000;
	lk5.ptr=&lk6;
	*/
}

