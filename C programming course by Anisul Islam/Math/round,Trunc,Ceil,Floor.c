#include <stdio.h>
#include <math.h>
int main()
{
	double result = round(-66.8777);
	printf("%lf\n", result);
	
	double result1= trunc(-4.9);
	printf("%lf\n", result1);
	
	double result2 = ceil(-7.4);
	printf("%lf\n", result2);
	
	double result3 = floor(-6.9);
	printf("%lf", result3);
}