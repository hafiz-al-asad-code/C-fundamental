#include <stdio.h>
#include <math.h>
int main()
{
	double x = 10.5;
	double y = 0.35;
	double z = 1;

	double result = log(x);
	double result2 = sin(y);
	double result3 = exp(z);

	printf("log(%lf) = %lf\n", x, result);
	printf("sin(%lf) = %lf\n", y, result2);
	printf("exp(%lf) = %lf\n", z, result3);

	return 0;
}