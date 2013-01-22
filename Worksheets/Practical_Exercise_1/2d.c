#include <stdio.h>
int main(void)
{
	int i1 = 1, i2 = 2222, i3 = 333333333;
	float x1 = 1.0, x2 = 3.1415926, x3 = -1.e-10;
	printf("i1, i2, i3 = %d %d %d\n", i1, i2, i3);
	printf("x1, x2, x3 = %10.2g %10.4g %10.6g\n", x1, x2, x3);// changed %f,
	//                                                           added number
	return 0;
}
// output:
// i1, i2, i3 = 1 2222 333333333
// x1, x2, x3 =          1      3.142     -1e-10

// %[flags][width][.precision][length]specifier
// here the number after de "." is "precision":
// the number of digits to be printed after the
// decimal point (by default, this is 6).
// For g and G specifiers: This is the max number of
// significant digits to be printed.
