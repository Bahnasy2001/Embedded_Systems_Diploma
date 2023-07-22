#include <stdio.h>
int find_unique(int arr[],int size)
{
	int i,unique=0;
	for (i = 0; i < size; ++i)
	{
		unique = unique ^ arr[i];
	}
	return unique;
}
int main()
{
	int size;
	printf("Enter size : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	int arr[size],i;
	for(i=0;i<size;i++){
	printf("Enter #%d Element :",i+1);
	fflush(stdin);fflush(stdout);
	scanf("%d",&arr[i]);
	}
	int unique;
	unique = find_unique(arr,size);
	printf("Unique = %d",unique);
	return 0;
}
