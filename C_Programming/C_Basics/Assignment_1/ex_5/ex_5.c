#include <stdio.h>
int main(void){
	char c;
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
	return 0;
}
