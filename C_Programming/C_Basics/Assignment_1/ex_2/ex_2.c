#include <stdio.h>

int main (void){
	int x;
	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("You Entered %d ",x);
	return 0;
}
