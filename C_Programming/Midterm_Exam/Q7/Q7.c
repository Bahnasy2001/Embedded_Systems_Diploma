#include <stdio.h>

int sum_numbers(int start,int end)
{
	static int sum=0;

	if(end>=start )
	{
		sum += start;
		sum_numbers(++start,end);
	}
	return sum;
}
int main()
{
	printf("%d",sum_numbers(0,100));
	return 0;
}
