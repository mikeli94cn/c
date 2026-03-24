#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	char res[4][4];
	x1=0;
	x2=1;
	x3=2;
	x4=3;
	for(y1=0;y1<=3;y1++)
		for(y2=0;y2<=3;y2++)
		{
			if(y2==y1)
				continue;
			else if( abs( (y2-y1) / (x2-x1))==1 )
				continue;
			else
				for(y3=0;y3<=3;y3++)
				{
					if(y3==y1 || y3==y2)
						continue;
					else if( abs((y3-y1) / (x3-x1))==1 || abs( (y3-y2)/ (x3-x2) )==1 )
						continue;
					else
						for(y4=0;y4<=3;y4++)
						{
							if(y4==y1 || y4==y2 || y4==y3)
								continue;
							else if(  abs((y4-y1)/(x4-x1))==1  || abs((y4-y2)/(x4-x2))==1 || abs((y4-y3)/(x4-x3))==1  )
								continue;
							else
							{
								for(int i=0;i<=3;i++)
									for(int j=0;j<=3;j++)
										res[i][j]='*';
								res[x1][y1]='@';
								res[x2][y2]='@';
								res[x3][y3]='@';
								res[x4][y4]='@';
								printf("======\n");
								for(int i=0;i<=3;i++)
								{
									for(int j=0;j<=3;j++)
										printf("%c",res[i][j]);
									printf("\n");
								}
										
							}
						}
				}
		}
}
