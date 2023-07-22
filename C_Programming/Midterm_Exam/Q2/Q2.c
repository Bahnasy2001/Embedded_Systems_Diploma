#include <stdio.h>
/*
 * r-->root
 * r(x) -r(x) =0  Squaring the equation
 * (r(x)-r(x))^2) = 0 replace r(x) with y
 * (y-r(x))^2=0
 * y^2 - 2*y*r(x) + x = 0
 * r(x) = (y^2 +x)/2*y
 * r(x) = (y/2)+(x/2y)
 * r(x) = ((x/y)+y)/2
 * */
float square_root(int num){
	float y = num;
	float sqrt;
	sqrt = ((num/y)+y)/2;
	while((y-sqrt) >= 0.0001){
		y = sqrt;
		sqrt = ((num/y)+y)/2;
	}
	return sqrt;
}

int main()
{
	int n;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("%.3f",square_root(n));
	return 0;
}
