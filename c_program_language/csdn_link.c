#include <stdio.h>
#include <stdlib.h>

typedef struct lnode {
    char data;
    struct lnode *next;
} lnode;

// 生成单链表create
void creat(lnode *h) {
    lnode *t, *p;
    char ch;
    t = h;
    while ((ch = getchar()) != '\n') {	// 尾插法建立单链表
	p = (lnode *)malloc(sizeof(lnode));  // 生成新结点p。并分配存储空间
	p->data = ch;
	p->next = NULL;	 // p的指针域为空
	t->next = p;	 // p的next指向这个结点
	t = p;
    }
}
// 遍历单链表
void print(lnode *h) {
    lnode *p = h->next;
    while (p) {
	printf("%c", p->data);	// 输出p的数值域
	p = p->next;		// p指向下一结点
	// if(p->data!=' ')
	// printf(" ");
    }
}
// 求单链表的长度
void length(lnode *h) {
    lnode *p = h->next;
    int i = 0;
    while (p) {
	// if(p->data!=' ')
	// {
	i = i + 1;
	// }
	p = p->next;
    }
    // i=i-1;
    printf(" length: %d\n", i);
}
// 数据插入函数
int insert(lnode *h, char x,
	   int i)  // h:单链表的头指针 x:要插入的元素 i:要插入的位置
{
    int j;
    lnode *p, *s;
    p = h;
    j = 1;
    while (p && j < i)	// 找到要插入的位置
    {
	++j;
	p = p->next;
    }
    if (i > 0 && j == i) {
	s = (lnode *)malloc(sizeof(lnode));
	s->data = x;	    // 把x复制给s的数据域
	s->next = p->next;  // s指向p的下一个结点
	p->next = s;	    // p指向s
	return (1);
    } else
	return (0);
}
// 删除数据函数
int delete_(lnode *h, int i) {
    int j;
    lnode *p, *q;
    p = h;  // p为首结点
    j = 1;
    while (p && j < i) {
	++j;
	p = p->next;
    }
    if (i > 0 && j == i) {
	q = p->next;	    // q指向要删除结点的结点
	p->next = q->next;  // p的下一个结点位q的下一个结点
	free(q);	    // 释放q的空间
	return (1);
    } else
	return (0);  // 失败返回0
}
// 查找函数
void locate(lnode *h, char x) {
    lnode *p;
    int idx = 1;
    p = h->next;  // 此时p位首节点
    while (p && p->data != x) {
	idx++;
	p = p->next;  // s指向p的下一个结点
    }
    if (p) {
	printf("seccess!\n");
	printf("你想查看的数据位置 : pos: %d, val: %c", idx, p->data);
    } else
	printf("无法查看此结点\n");
}
// 主函数
// void main()
int main() {
    int i, j, k;
    char x, y;
    lnode *h;
    h = (lnode *)malloc(sizeof(lnode));	 // 建立表头结点
    h->next = NULL;
    printf("请输入一个单链表:\n");
    creat(h);  // 建立链表函数
    while (1)  // 功能选择菜单
    {
	printf("\n");
	printf("\n");
	printf("+++++++++++++++++++++++");
	printf("\n++++1.遍历单链表+++++++");
	printf("\n++++2.求单链表的长度+++");
	printf("\n++++3.单链表的插入+++++");
	printf("\n++++4.单链表的删除+++++");
	printf("\n++++5.查找数据地址++++++");
	printf("\n++++6.退出+++++++++");
	printf("\n++++7.反转+++++++++");
	printf("\n++++8.排序+++++++++");
	printf("\n+++++++++++++++++++++++");
	printf("\n");
	printf("选择查看1~6: ");
	scanf("%d", &i);
	if (i < 0 || i > 7) printf("超出查询范围!\n");
	if (i == 1) {
	    printf("输出单链表:");
	    print(h);
	}
	if (i == 2) {
	    printf("单链表的长度为；");
	    length(h);
	    printf("\n");
	}
	if (i == 3) {
	    getchar();
	    printf("输入插入内容");
	    x = getchar();
	    printf("\n输入插入数据位置；");
	    scanf("%d", &j);
	    insert(h, x, j);
	}
	if (i == 4)  // 删除函数
	{
	    printf("输入删除位置");
	    scanf("%d", &k);
	    delete_(h, k);
	}
	if (i == 5) {
	    getchar();
	    printf("输入所需要查找的数据");
	    y = getchar();
	    locate(h, y);
	}
	if (i == 6) break;
    }
    printf(" \n ...");
    // getch();
}
