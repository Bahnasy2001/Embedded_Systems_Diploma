#include <stdio.h>

int main()
{
	int r,c,i,j;
	int a[10][10];
	int t[10][10];
	printf("Enter rows and columns of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("Enter elements of matrix:\r\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix: \n");
		//Printing the matrix
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\r\n");
		}
		printf("the transpose matrix is \n");

		for (i = 0; i < c; i++)
		{
			for (j = 0; j < r; j++)
			{
				t[i][j] = a[j][i];
			}
		}

		for (i = 0; i < c; i++)
			{
				for (j = 0; j < r; j++)
				{
					printf("%d\t",t[i][j]);
				}
				printf("\r\n");
			}

	return 0;
}
