#include <stdio.h>
int main(void){
	float num;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num);
	if(num > 0){
		printf("%.2f is Positive.",num);
	}
	else if(num == 0){
		printf("you entered zero.");
	}
	else
		printf("%.2f is Negative.",num);
	return 0;
}
