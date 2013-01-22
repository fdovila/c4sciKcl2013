#include <stdio.h>
int main(void)
{
	float x1 = 1.0e5, x2 = 3.1415926, x3, x4, x5, x6;
	x3 = x1 + x2;
	x4 = x1 * x2;
	x5 = x1 / x2;
	x6 = x2 / x1;
	printf("x3 - x6 = %f %f %f %f\n", x3, x4, x5, x6);
	return 0;
}
// output:
// x3 - x6 = 100003.140625 314159.250000 31830.990234 0.000031
