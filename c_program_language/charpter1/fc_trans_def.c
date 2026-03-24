#include <stdio.h>
#define MAX 300
#define MIN 0
#define INTERVAL 20

int main()
{
    double f=0;
    for(f=MAX;f>=MIN;f=f-INTERVAL)
    {
        printf("f=%f,c=%f\n",f,(5.0/9.0)*(f-32));
    }
}
