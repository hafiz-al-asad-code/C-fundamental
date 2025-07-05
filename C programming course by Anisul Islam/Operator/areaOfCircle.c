#include <stdio.h>
#define M_PI 3.14159265358979323846
#include <math.h>
int main()
{
	float radius, area;
	
	printf("Enter radius = ");
	scanf("%f", &radius);
	
    area = M_PI * radius * radius;
    printf("The area is = %.2f", area);
}
    