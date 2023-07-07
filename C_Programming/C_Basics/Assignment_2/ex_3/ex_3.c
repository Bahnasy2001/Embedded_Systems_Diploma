#include <stdio.h>

int main(void){
	float a,b,c;
	printf("Enter Three numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("the largest number is %f\r\n",a);
		}
		else{
			printf("the largest number is %f\r\n",c);
		}
	}
	else{
		if(b>c){
			printf("the largest number is %f\r\n",b);
		}
		else{
			printf("the largest number is %f\r\n",c);
		}
	}
	return 0;
}
