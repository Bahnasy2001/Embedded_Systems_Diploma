#include <stdio.h>

int main(void){
	float a,b,c,max;
	printf("Enter Three numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	max = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("the largest number is %f",max);
	return 0;
}
