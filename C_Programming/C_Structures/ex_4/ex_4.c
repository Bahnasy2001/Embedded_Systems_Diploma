#include <stdio.h>
struct Sstudent
{
	char name [20];
	int roll;
	float marks;
};
int main()
{
	struct Sstudent s[10];
	int i;
	printf("Enter information of students:\r\n");
	for (i = 0; i < 10; ++i)
	{
		s[i].roll =i+1;
		printf("For roll number %d\n",s[i].roll);
		printf("Enter name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",s[i].name);
		printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&s[i].marks);
	}


	printf("\nDisplaying Information\n");
	for (i = 0; i < 10; ++i) {
		printf("%d:Name: %s\r\n",i+1,s[i].name);
		printf("%d:Roll: %d\r\n",i+1,s[i].roll);
		printf("%d:marks: %f\r\n",i+1,s[i].marks);
	}

	return 0;
}
