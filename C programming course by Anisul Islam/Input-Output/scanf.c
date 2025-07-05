#include <stdio.h>
int main()
{
	int num1;
	float num2;
	
	printf("Enter an integer and a floating number = ");
	scanf("%d %f", &num1, &num2);
	printf("Numbers are = %d, %.1f", num1, num2);


	return 0;
}