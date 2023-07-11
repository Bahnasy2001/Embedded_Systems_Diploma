#include <Stdio.h>

int main()
{
	int n,num[100];
	int i,temp;
	int location,element_inserted;
	printf("Enter number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		fflush(stdin);fflush(stdout);
		scanf("%d",&num[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element_inserted);
	printf("Enter the Location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);
	for (i = n; i >= location; i--)
	{
		num[i] =num[i-1];
	}
	n++;
	num[location-1] = element_inserted;
	//printing the array
	for (i = 0; i < n; i++) {
		printf("%d ",num[i]);
	}

	return 0;
}
