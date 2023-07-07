#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter Two Integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("Sum = %d",a+b);
	return 0;
}
