#define AIM 3
#include <stddef.h>
#include <stdio.h>
/*
        printf("\n++++0.创建单链表+++++++");
        printf("\n++++1.遍历单链表+++++++");
        printf("\n++++2.求单链表的长度+++");
        printf("\n++++3.单链表的插入+++++");
        printf("\n++++4.单链表的删除+++++");
        printf("\n++++5.查找数据地址++++++");
        printf("\n++++6.退出+++++++++");
        printf("\n++++7.反转+++++++++");
        printf("\n++++8.排序+++++++++");        
*/

typedef struct LinkList{
    char value;
    struct LinkList *ptr;
}Link;

/*
* Desc : each query single-linkedList 
* Parameter : single-linkedList
* Return : null,print single-linkedList value
*/
void eachQuery(Link lk)
{
    Link *p;
    p=&lk;
    while( (*p).ptr!=NULL)
    {
        if( (*p).value!=0 )
            printf("%c ",(*p).value);
        p=(*p).ptr;
    }
}

/*
* Desc : get length of single-linkedList 
* Parameter : single-linkedList
* Return : length of single-linkedList
*/
int getLen(Link lk)
{
    Link *p;
    int num;
    p=&lk;
    num=0;
    while( (*p).ptr!=NULL )
    {
        if( (*p).value!=0 )
            num++;
        p=(*p).ptr;
    }
    return num;
}

void insertPos(char ch,int pos,Link *lk)
{

    Link *curr,*prev;
    curr=lk;
    for(int num=0;num<pos;num++)
    {
        prev=curr;
        curr=(*curr).ptr;
    }
    Link newNode;
    newNode.value=ch;
    newNode.ptr=curr;
    (*prev).ptr=&newNode;
}

int main()
{
    //0.创建单链表
    Link lk,lk1,lk2,lk3,lk4,lk5;
    lk.value=0;
    lk.ptr=&lk1;    //为了确保头结点固定不变，不受内容结点变动的影响，在开始添加一个虚结点

    lk1.value='Q';
    lk1.ptr=&lk2;

    lk2.value='W';
    lk2.ptr=&lk3;
    
    lk3.value='E';
    lk3.ptr=&lk4;
    
    lk4.value='R';
    lk4.ptr=&lk5;   //指针和整数之间不相互转换，但0是唯一的例外，常量0可以复制给指针，指针也可以和常量0进行比较，
                    //程序中经常用符号常量NULL代替常量0，这样比如清晰的说明常量0是指针的一个特殊值。
                    //符号常量NULL定义在<stddef.h>中。
    
    lk5.value=0;    //为了便于处理，在最后定义一个虚结点
    lk5.ptr=NULL;   
    
    
    
    //1.遍历单链表
    eachQuery(lk);

  

    
    //2.求单链表的长度
    printf("length is %d\n",getLen(lk));


    
    //3.单链表的插入
    insertPos('H',1,&lk);
    eachQuery(lk);




 
    
}

