#include <stdio.h>
int main(void)
{
	float x1 = 1.0e5, x2 = 3.1415926, x3, x4, x5, x6;
	x3 = x1 % x2;
	x4 = x1 * x2;
	x5 = x1 / x2;
	x6 = x2 / x1;
	printf("x3 - x6 = %f %f %f %f\n", x3, x4, x5, x6);
	return 0;
}
// output:
// 4b.c:5: error: invalid operands to binary %
// (have ‘float’ and ‘float’)
// why: the % operator requires integer operands.