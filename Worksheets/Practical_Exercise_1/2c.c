#include <stdio.h>
int main(void)
{
	int i1 = 1, i2 = 2222, i3 = 333333333;
	float x1 = 1.0, x2 = 3.1415926, x3 = -1.e-10;
	printf("i1, i2, i3 = %d %d %d\n", i1, i2, i3);
	printf("x1, x2, x3 = %g %g %g\n", x1, x2, x3); // changed %f to %g 
	return 0;
}
// output:
// i1, i2, i3 = 1 2222 333333333
// x1, x2, x3 = 1 3.14159 -1e-10
//
// the specifier changed from "f" (Decimal floating point, lowercase)
// to "g" (Use the shortest representation: %e or %f)