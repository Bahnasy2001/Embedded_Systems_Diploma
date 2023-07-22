#include <stdio.h>

int sum_digits(int num)
{
	int new_num=0;
	int rem;
	while(num != 0){
		rem = num%10;
		new_num+=rem;
		num = num/10;
	}
	return new_num;
}
int main()
{
	int num,res;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	res = sum_digits(num);
	fflush(stdin);fflush(stdout);
	printf("Sum of digits = %d",res);
	return 0;
}
