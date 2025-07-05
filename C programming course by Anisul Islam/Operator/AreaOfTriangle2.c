#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, s, area;

	printf("Enter a = ");
	scanf("%lf", &a);
	printf("Enter b = ");
	scanf("%lf", &b);
	printf("Enter c = ");
	scanf("%lf", &c);

	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("The area of the triangle = %.2lf", area);

	return 0;
}
