#include <stdbool.h>
#include <math.h>

int judge_prime_loop(long num)
{
	bool flag=true;
	int sub_num=sqrt(num);
	for(int i=2;i<=sub_num;i++)
	{
		if(num%i==0)
		{
			flag=false;
			break;
		}
	}
	return flag;
}


void return_prime_echs(int range)
{
	int arr[range+1];

	for(int i=1;i<=range;i++)
	{
		arr[i]=0;
	}

	for(int base=2;base<=sqrt(range);base++)
	{
		if(arr[base]==-1)
		{
			continue;
		}
		else
		{
			for(int i=2;i<=range/base;i++)
			{
				arr[base*i]=-1;
			}
		}
	}

	for(int i=1;i<=range;i++)
	{
		if(arr[i]!=-1)
		{
			printf("");
		}
	}

}
