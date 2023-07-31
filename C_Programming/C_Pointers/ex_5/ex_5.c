#include <stdio.h>

/*Write a program in C to show a pointer to an array which contents
are pointer to structure.*/
struct SEmployee
{
	char name[10];
	int ID;
};
int main()
{
	struct SEmployee emp1={"Hassan",1001},emp2 = {"Alex",1002},emp3 ={"Jhon",1003};
	struct SEmployee* arr[]={&emp1,&emp2,&emp3};
	struct SEmployee* (*ptr)[3] = &arr;
	printf("Employee Name: %s\r\n",(**(*ptr+1)).name);
	printf("Employee ID: %d",(*(*ptr+1))->ID);
	return 0;
}
