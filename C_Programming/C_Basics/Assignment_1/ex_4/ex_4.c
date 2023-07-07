#include <stdio.h>

int main(void){
	float a,b;
	printf("Enter Two Numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	printf("Product : %f",a*b);
	return 0;
}
