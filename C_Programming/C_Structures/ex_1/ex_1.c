#include <stdio.h>
struct Sstudent
{
	char name [20];
	int roll;
	float marks;
};
int main()
{
	struct Sstudent s;
	printf("Enter information of students:\r\n");
	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",s.name);
	printf("Enter roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s.roll);
	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.marks);
	printf("\nDisplaying Information\n");
	printf("Name: %s\r\n",s.name);
	printf("Roll: %d\r\n",s.roll);
	printf("marks: %f\r\n",s.marks);
	return 0;
}
