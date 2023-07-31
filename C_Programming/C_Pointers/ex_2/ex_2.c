#include <stdio.h>
/* print all the alphabets using a pointer */

int main()
{
	char alphabets[26];
	char *ptr = alphabets;
	int i;
	int size = sizeof(alphabets)/sizeof(char);
	for (i = 0; i < size; ++i)
	{
		*ptr = 'A'+i;
		ptr++;
	}
	ptr = alphabets;
	for (i = 0; i < size; ++i)
	{
		printf("%c ",*(ptr+i));
	}
	return 0;
}
