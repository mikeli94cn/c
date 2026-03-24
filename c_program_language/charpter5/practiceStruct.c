#include <stdio.h>
#include <stdlib.h>

struct contract
{
	char *name;
	char *manager;
	//struct date dt;
	int days;
	double amount;
	//struct project proj;
};

struct date
{
	int year;
	int month;
	int day;
};

struct project
{
	char *name;
};

int main()
{
	struct date myDate;
	myDate.year=2025;
	myDate.month=6;
	myDate.day=25;
	printf("year:%d month:%d day:%d\n",myDate.year,myDate.month,myDate.day);
}
