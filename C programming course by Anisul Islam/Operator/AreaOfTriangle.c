//Area of a Triangle
#include <stdio.h>
int main()
{
	float height, base, area;
	printf("Provide base = ");
	scanf("%f", &base);
	printf("provide height = ");
	scanf("%f", &height);
	
	area = (float)1/2 * base * height;
	printf("The area of the triangle = %.1f", area);
	
	return 0;
}
	