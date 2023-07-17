#include <stdio.h>

int factorial(int n)
{
	int f=1;
	if(n != 1)
		f = n *factorial(n-1);
	return f;
}
int main()
{
	int num;
	printf("Enter Positive Number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num<0)
	{
		printf("Error");
	}
	else
		printf("Factroial of %d = %d",num,factorial(num));
	return 0;
}
