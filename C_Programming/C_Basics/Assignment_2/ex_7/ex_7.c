#include <stdio.h>
int main(){
	int num;
	unsigned long long int fact = 1;
	int i;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num < 0){
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else{
		for(i = 1; i<= num;i++){
			fact *= i;
		}
		printf("Factorial = %lu",fact);
	}
	return 0;
}
