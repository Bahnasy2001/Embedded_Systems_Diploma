#include <stdio.h>

int main()
{
	int m;
	m =29;
	printf("Address of m : %p\r\n",&m);
	printf("Value of m: %d\r\n",m);
	int* ab =&m;
	printf("Now ab is assigned with the address of m.\r\n");
	printf("Address of pointer ab : %p\r\n",ab);
	printf("Content of pointer ab : %d\r\n",*ab);
	m =34;
	printf("The value of m assigned to %d now.\r\n",m);
	printf("Address of pointer ab : %p\r\n",ab);
	printf("Content of pointer ab : %d\r\n",*ab);
	*ab = 7;
	printf("The pointer variable ab is assigned with the value %d now.\r\n",*ab);
	printf("Address of m : %p\r\n",&m);
	printf("Value of m: %d\r\n",m);
	return 0;
}
