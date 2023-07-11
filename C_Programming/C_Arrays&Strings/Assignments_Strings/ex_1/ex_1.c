#include <stdio.h>
#include <string.h>
//Ex 1 Find the Frequency of Characters in a String
int main()
{
	char string[1000];
	char c;
	int i,count =0;
	printf("Enter a String: ");
	fflush(stdin);fflush(stdout);
	gets(string);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	for (i = 0; string[i]!='\0'; i++)
	{
		if(string[i] == c)
		{
			count++;
		}
	}
	printf("Frequency of %c = %d",c,count);

	return 0;
}
