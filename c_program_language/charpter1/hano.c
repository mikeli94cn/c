#include <stdio.h>

void mov(int n ,char pos1,char pos2)
{
    printf("%d move from %c to %c\n",n,pos1,pos2);

}

void hano(int n,char pos1,char pos2)
{
    
    if(n>1)
    {
        char pos3;
        char poses[]={'A','B','C'};
        for(int i=1;i<=  sizeof(poses)/sizeof(poses[0]);i++)
        {
            int idx=i-1;
            if(poses[idx]!=pos1 & poses[idx]!=pos2)
                pos3=poses[idx];
        }

        hano(n-1,pos1,pos3);
        mov(n,pos1,pos2);
        hano(n-1,pos3,pos2);
    }
    else
    {
        mov(n,pos1,pos2);
    }
}

int main()
{
    hano(3,'A','B');
}
