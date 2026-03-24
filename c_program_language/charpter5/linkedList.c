#include <stdio.h>

struct man
{
	char * name;
	int age;
	double height;
	struct man * father;
};



struct linkedList{
	int value;
	struct linkedList *ptr;
	int num;
};

struct worker{
	int age;
	int salary;
};

int main()
{
	struct man man1,man2,man3;
	man1.name="Shuo Li";
	man1.age=31;
	man1.height=176.0;
	man1.father=&man2;

	man2.name="JunYou Li";
	man2.age=56;
	man2.height=174.0;
	man2.father=&man3;

	man3.name="JianQuan Li";
	man3.age=87;
	man3.height=173.0;
	
	printf("the first man address is %p,he\'s name is %s,he\'s age is %d,he\'s height is %f,he\'s father address is %p\n",&man1,man1.name,man1.age,man1.height,man1.father);
	printf("the second man address is %p,he\'s name is %s,he\'s age is %d,he\'s height is %f,he\'s father address is %p\n",&man2,man2.name,man2.age,man2.height,man2.father);
	printf("the first man address is %p,he\'s name is %s,he\'s age is %d,he\'s height is %f\n",&man3,man3.name,man3.age,man3.height);

	printf("man1.name address is %p,man1.name is %s,man1.name[0] is %c,man1.name[1] is %c,man1.name[2] is %c\n",man1.name,man1.name,*man1.name,*(man1.name+1),*(man1.name+2));

	char arr[3];
	arr[0]='1';
	arr[1]='2';
	arr[2]='3';
	char *str;
	str="123";
	printf("%p\n",arr);
	printf("%p\n",str);

	struct linkedList lst1;
	lst1.value=1;
	struct linkedList lst2;
	lst2.value=2;
	struct linkedList lst3;
	lst3.value=3;
	lst1.ptr=&lst2;
	lst2.ptr=&lst3;
	printf("sizeof lst1 is %ld\n",sizeof(lst1));
	printf("lst1 address is %p\n",&lst1);
	printf("sizeof lst1.value is %ld\n",sizeof(lst1.value));
	printf("lst1.value address is %p\n",&lst1.value);
	printf("size of lst1.ptr is %ld\n",sizeof(lst1.ptr));
	printf("lst1.ptr address is %p\n",&lst1.ptr);
	printf("%p\n",&lst2);
	printf("%p\n",&lst3);
	
	struct worker wker1,wker2;
	wker1.age=22;
	wker1.salary=5000;
	wker2.age=31;
	wker2.salary=14000;
	printf("%ld\n",sizeof(wker1));
	printf("%p\n",&wker1);
	printf("%p\n",&wker1.age);
	printf("%p\n",&wker1.salary);
	printf("%p\n",&wker2);
}
