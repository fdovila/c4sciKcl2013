#include <stdio.h>
int main(void)
{
	int i1 = 1, i2 = 2222, i3 = 333333333;
	float x1 = 1.0, x2 = 3.1415926, x3 = -1.e-10;
	printf("i1, i2, i3 = %d %d %d\n", i1, i2, i3);
	printf("x1, x2, x3 = %f %f %f\n", x1, x2, x3);
	return 0;
}
// output:
// i1, i2, i3 = 1 2222 333333333
// x1, x2, x3 = 1.000000 3.141593 -0.000000 <=the exp. number, it's incomplete
