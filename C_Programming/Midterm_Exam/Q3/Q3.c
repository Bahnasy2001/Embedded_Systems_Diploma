#include "stdio.h"

int check_Prime(int num)
{
	int flag = 1;
	int i;
	for (i = 2; i < num; ++i)
	{
		if(num % i == 0)
		{
			flag = 0;
			break;
		}

	}

	return flag;
}
int main()
{
	int i,start,end,prime;
	printf("Enter Two Numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&start,&end);
	printf("Prime Numbers between %d and %d are : ",start,end);
	for (i = start; i <= end; ++i)
	{
		prime = check_Prime(i);
		if(prime == 1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
