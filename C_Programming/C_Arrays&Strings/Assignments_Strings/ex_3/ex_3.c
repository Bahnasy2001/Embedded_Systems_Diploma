#include <stdio.h>
#include <string.h>
//Reverse String
int main()
{
	char string[1000];
	char rString[1000];
	int i,j;
	printf("Enter the String: ");
	fflush(stdin);fflush(stdout);
	gets(string);
	for (i = 0,j= strlen(string)-1; i < strlen(string) && j >=0; i++,j--)
	{
		rString[j] = string[i];
	}
	printf("Reverse string is : %s",rString);
	return 0;
}
