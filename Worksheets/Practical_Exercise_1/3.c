#include <stdio.h>
int main(void)
{
	short i1 = 11, i2 = 22, i3, i4, i5, i6;
	i3 = i1 + i2;
	i4 = i1 * i2;
	i5 = i1 / i2;
	i6 = i2 / i1;
	printf("i3 to i6 = %d %d %d %d\n", i3, i4, i5, i6);
	return 0;
}
// output:
// i3 to i6 = 33 242 0 2
// 11 / 22 is not = 0
// if I change i1 and i2 to 10^3, the result in the sum and
// substraction is a huge negative number. Looks like the
// "short" definition doesn't have enough spaces, so it goes
// circular
