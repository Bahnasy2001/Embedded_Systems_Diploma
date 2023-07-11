#include <stdio.h>

int main()
{
	int n;
	float num[1000];
	float sum =0,average;
	int i;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n > 1000 || n <0)
	{
		printf("Error!");
	}
	for(i = 0; i < n;i++)
	{
		printf("%d.Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&num[i]);
		sum += num[i];
	}
	average = sum / n;
	printf("Average = %.2f",average);
	return 0;
}
