#include <stdio.h>
//Find the length of a String
int main()
{
	char string[1000];
	int count = 0,i;
	printf("Enter a String: ");
	fflush(stdin);fflush(stdout);
	gets(string);
	for (i = 0; string[i] != 0; ++i)
	{
		count++;
	}
	printf("Length of String: %d",count);

	return 0;
}
