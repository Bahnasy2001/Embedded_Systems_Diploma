#include <stdio.h>
int main(void){
	int num;
	printf("Enter a integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num % 2 == 0){
		printf("%d is Even",num);
	}
	else
		printf("%d is Odd",num);
	return 0;
}
