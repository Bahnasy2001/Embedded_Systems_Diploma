#include <stdio.h>

struct SComplex
{
	double Real; /*Real Part*/
	double Imaginary; /*Imaginary Part*/
};
struct SComplex AddComplex(struct SComplex A,struct SComplex B)
{
	struct SComplex C;
	C.Real = A.Real + B.Real;
	C.Imaginary = A.Imaginary + B.Imaginary;
	return C;
}
int main()
{
	struct SComplex n1,n2,sum;
	printf("for 1st complex number\n");
	printf("Enter real and imaginary respectively:\n");
	fflush(stdin);fflush(stdout);
	scanf("%lf %lf",&n1.Real,&n1.Imaginary);
	printf("for 2nd complex number\n");
	printf("Enter real and imaginary respectively:\n");
	fflush(stdin);fflush(stdout);
	scanf("%lf %lf",&n2.Real,&n2.Imaginary);
	sum = AddComplex(n1,n2);
	printf("Sum= %.1lf+ %.1lfi",sum.Real,sum.Imaginary);
	return 0;
}
