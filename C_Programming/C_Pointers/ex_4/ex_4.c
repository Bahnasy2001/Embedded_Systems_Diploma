#include <stdio.h>
/*print the elements of an array in reverse order.*/
int main()
{
	int arr[15];
	int* ptr = arr;
	int i,n;
	printf("Enter number of Elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		printf("Enter Element #%d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",ptr+i);
	}
	ptr = &arr[n-1];
	for (i = n; i > 0; --i)
	{
		printf("Element #%d: %d\r\n",i,*(ptr));
		ptr--;
	}
	return 0;
}
