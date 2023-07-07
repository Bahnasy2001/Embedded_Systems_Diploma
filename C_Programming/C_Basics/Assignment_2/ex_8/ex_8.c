#include <stdio.h>
int main(){
	char op;
	float a,b;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&op);
	printf("Enter Two Operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	switch(op){
	case '+':
	{
		printf("%.2f %c %.2f = %.2f",a,op,b,a+b);
		break;
	}
	case '-':
	{
		printf("%.2f %c %.2f = %.2f",a,op,b,a-b);
		break;
	}
	case '*':
	{
		printf("%.2f %c %.2f = %.2f",a,op,b,a*b);
		break;
	}
	case '/':
	{
		if(b != 0){
		printf("%.2f %c %.2f = %.2f",a,op,b,a/b);
		}
		break;
	}
	default:
		printf("\r\nWrong choice\r\n");
	}
	return 0;
}
