#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	time_t now_time;
	time(&now_time);

	printf("%s\n",ctime(&now_time));

	putenv("TZ=Europe/Paris");
	tzset();

	struct tm dest_tm;
	localtime_r(&now_time,&dest_tm);

	char custom_str[100];
	strftime(custom_str,sizeof(custom_str),"%Y-%m-%d %H:%M:%S %a %p %Z",&dest_tm);
	printf("convert time in timezone is %s\n",custom_str);

	return 0;
}
