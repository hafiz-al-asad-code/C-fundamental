#include<stdio.h>

float area(float a, float b)
{
	return 0.5 * a * b;
}

int main()
{
	float adjacent, height;
	
	printf("Enter adjacent value of the triangle = ");
	scanf("%f", &adjacent);
	printf("Enter height value of the triangle = ");	scanf("%f", &height);
	
	float result = area(adjacent, height);
	
	printf("The area of triangle is = %.2f ", result);
}