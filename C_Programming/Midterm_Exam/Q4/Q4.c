#include <stdio.h>

int reversed(int num){
	int rev=0;
	while(num!=0){
	rev = (rev*10)+(num%10);
	num=num/10;
	}
	return rev;
}
int main()
{
	int num;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	int r;
	r = reversed(num);
	printf("%d",r);
	return 0;
}
