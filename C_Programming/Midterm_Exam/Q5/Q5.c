#include <stdio.h>

int count_ones(int num)
{
	int count=0,bin,bit;
	for (bit = 31; bit >=0; bit--)
	{
		bin = num >> bit;
		if(bin & 1)
		{
			printf("1");
			count++;
		}
		else
		{
			printf("0");
		}
	}
	return count;
}
int main()
{
	int num,result;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	result = count_ones(num);
	printf("\nnumber of ones = %d",result);
	return 0;
}
