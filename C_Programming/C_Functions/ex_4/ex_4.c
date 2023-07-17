#include <stdio.h>

int power(int base,int pow)
{
	int result=1;
	if(pow>=1)
	{
		result = power(base,pow-1)*base;
	}
	return result;
}
int main()
{
	int base,pow;
	printf("Enter base Number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	printf("Enter power Number(positive number): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&pow);
	printf("%d^%d = %d",base,pow,power(base,pow));
	return 0;
}
