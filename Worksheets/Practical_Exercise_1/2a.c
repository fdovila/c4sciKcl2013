#include <stdio.h>
int main(void)
{
	int i1 = 1, i2 = 2222, i3 = 333333333;
	float x1 = 1.0, x2 = 3.1415926, x3 = -1.e-10;
	printf("i1, i2, i3 = %6d %6d %6d\n", i1, i2, i3); // changed %d to %6d
	printf("x1, x2, x3 = %f %f %f\n", x1, x2, x3);
	return 0;
}
// output:
// i1, i2, i3 =      1   2222 333333333
// x1, x2, x3 = 1.000000 3.141593 -0.000000
//
// from http://www.cplusplus.com/reference/cstdio/printf/
// the printf format specifier follows this prototype:
//
// %[flags][width][.precision][length]specifier
//
// the change in line 6 is
// a width number: (...) Minimum number of characters to be printed. If
// the value to be printed is shorter than this number, the result is 
// padded with blank spaces. The value is not truncated even if the 
// result is larger.