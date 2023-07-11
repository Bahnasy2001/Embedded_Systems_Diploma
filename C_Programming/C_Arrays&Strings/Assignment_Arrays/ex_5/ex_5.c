#include <Stdio.h>

int main()
{
	int n,num[100];
	int i;
	int location,element_searched;
	printf("Enter number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		fflush(stdin);fflush(stdout);
		scanf("%d",&num[i]);
	}
	printf("Enter the element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element_searched);

	for (i = 0; i < n; i++)
	{
		if(num[i] == element_searched)
		{
			location = i+1;
			printf("Number Found at the location = %d",location);
			break;
		}
	}
	if(i == n)
	{
		printf("Not Found");
	}


	return 0;
}
