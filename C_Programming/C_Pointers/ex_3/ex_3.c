#include <stdio.h>
/*print a string in reverse using a pointer */
int main()
{
	char str[100];
	char* ptr = str;
	char rstr[100];
	char* rptr = rstr;
	int i=0;
	printf("Input a string :");
	fflush(stdin);fflush(stdout);
	scanf("%s",str);
	while(*ptr)
	{
		ptr++;
		i++;
	}
	while(i>=0)
	{
		ptr--;
		*rptr = *ptr;
		rptr++;
		i--;
	}
	*rptr ='\0';
	printf("Reverse of the string is : %s",rstr);
	return 0;
}
