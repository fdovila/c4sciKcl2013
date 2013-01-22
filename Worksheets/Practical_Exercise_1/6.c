#include <stdio.h>
int main(void)
{
	double a0, a1, x;
	printf("Enter the coefficients of Linear Equation a1*x + a0 = 0\n"
		   "in the order a1, a0, separated by spaces:");
	scanf("%lf %lf", &a1, &a0);
    if(a1 == 0){
        printf("Division by 0 is not allowed, sorry\n");
    }else{
	x = -a0 / a1;
    printf("the solution: x = %lf", x);
    }
	return 0;
}