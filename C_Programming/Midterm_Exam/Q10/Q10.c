#include <stdio.h>
/* count the max number of ones between two zeros */
int count_ones(int num)
{
	int count=0,max=0,countFlag=0;
	for( ; num > 0; num >>= 1 )
		{
			/* if the rightmost bit is zero:*/
			if( num % 2 == 0 )
			{
				/* set maximum:*/
				if( count > max )
					max = count;
				/*restart count:*/
				count = 0;
				/* raise the count flag:*/
				countFlag = 1;
			}
			else if ( countFlag )
				count++;
		}
	printf("Max. number of ones between two zeros is %d\n", max);
	return max;
}
int main()
{
	int num;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	count_ones(num);
	return 0;
}
