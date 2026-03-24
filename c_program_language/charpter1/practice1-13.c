/*
编写一个程序，打印其输入的文本中单词长度的直方图。横条的直方图比较容易绘制，竖条直方图则要困难些
*/
/*
1.satistics words length,store in array 
2.print graph
3.array increase capacity
*/
#define OUT 0
#define IN 1
#include <stdio.h>

void main()
{

    char c;
    int flag,nw;
    flag=0;
    nw=0;

    int arr[30];
    int arrSize;
    int wc;

    arrSize=sizeof(arr)/sizeof(arr[0]);
    wc=0;
    for(int i=0;i<arrSize;i++)
        arr[i]=0;

    while(  (c=getchar())!=EOF )
    {
        //if(flag==IN && (c=='\n' || c==' ' || c=='\t') )
        if(flag==IN)
        {    
            if( (c<'a'||c>'z')&&(c<'A'||c>'Z')&&(c<'0'||c>'9') )
            {
                flag=OUT;
                nw++;
                arr[wc]++;
                wc=0;
            }
            else
                wc++;
        }
        else
        {
            if((c>='a' && c<='z')||(c>='A'&&c<='Z') ||(c>='0' && c<='9') )
            {
                    flag=IN;
                    wc++;
            }
        }
    }
    //printf("words num is %d\n",nw);
    /*print v1*/
	for(int i=0;i<arrSize;i++)
    {
        if(arr[i]>0)
            printf("%d,%d\n",i,arr[i]);
    }
	/*print v2*/
	for(int i=0;i<arrSize;i++)
	{
		if(arr[i]>0)
		{
			printf("word length is %d:",i);
			printf("|");
			for(int j=1;j<=arr[i];j++)
				printf("==");
			printf("|\n");
		}
	}
}
