#include <stdio.h>
#include <string.h>
void reverse_string(char name[], char reverse[])
{
	char word[1000]; /* to store word*/
	int i, j;
	for (i = 0; name[i] != ' '; i++)
	{
		for (j = 0; j <= i; ++j)
		{
			word[j] = name[j];
		}

	}
	word[j] = '\0';
	i++;
	j = 0;
	while (name[i] != '\0')
	{
		reverse[j] = name[i];
		i++;
		j++;
	}
	reverse[j] = '\0';
	strcat(reverse, " ");
	strcat(reverse, word);
}
int main()
{
	char name[100];
	char reversed[100];
	printf("Enter a sentence : ");
	fflush(stdin); fflush(stdout);
	gets(name);
	reverse_string(name, reversed);
	printf("%s", reversed);
	return 0;
}
