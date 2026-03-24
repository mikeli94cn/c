#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main()
{
	srand(1);
	printf("%d\n",rand());
	
	srand(2);
	printf("%d\n",rand());
	
	//execution clocks
	printf("%ld\n",clock());
	
	//CLOCKS period Per second
	printf("%ld\n",CLOCKS_PER_SEC);

	//execution time (unit:second)
	printf("%f\n",((double)clock())/CLOCKS_PER_SEC);

	//unix timestamp
	printf("%ld\n",time(NULL));

	time_t cur_time=time(NULL);
	printf("%s",ctime(&cur_time));

	time_t start_time=time(NULL);
	
	/* execute a subroutine */
	
	time_t end_time=time(NULL);
	
	double exec_sec=difftime(end_time,start_time);

	printf("program excute duration is %.0f seconds\n",exec_sec);
}

