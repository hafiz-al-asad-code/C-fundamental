#include <stdio.h>
int main()
{
	float length, width, area;
	printf("Enter length = ");
	scanf("%f", &length);
	printf("Enter width =  ");
	scanf("%f", &width);
	
	area = length*width;
	printf("The area of the rectangle = %.2f", area);
	
	return 0;
}