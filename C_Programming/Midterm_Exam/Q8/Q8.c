#include <stdio.h>
void reverse_array(int size,int a[],int b[])
{
	int i,j;
	for (i = size-1,j=0; j< size ; j++,i--)
	{
		b[j] =a[i];
	}
	printf("\nReversed array:");
	for (j = 0; j < size; ++j) {
		printf(" %d ",b[j]);
	}
}
int main()
{
	int a[100], b[100], i, size;
	printf("Enter Enter size of an array : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &size);
	for (i = 0; i < size; ++i)
	{
		printf("Enter Element %d :", i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%d", &a[i]);
	}
	reverse_array(size, a, b);
	return 0;
}
