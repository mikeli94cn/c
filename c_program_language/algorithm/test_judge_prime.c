#include <stdio.h>
#include <time.h>
#include <math.h>
#include "judge_prime.c"
#define NUM 10000000

void main()
{
	int tab_num=0;
	time_t start_time;
	time_t end_time;
	
	start_time=time(NULL);
	
	for(int i=1;i<=NUM;i++)
	{
		bool flag=judge_prime_loop(i);
		if(flag==true)
		{
			printf("");
		}
	}
	
	end_time=time(NULL);

	printf("program execution time is %.0f\n",difftime(end_time,start_time));

	
	start_time=time(NULL);
	
	return_prime_echs(NUM);
	
	end_time=time(NULL);
	
	printf("program execution time is %.0f\n",difftime(end_time,start_time));
}
