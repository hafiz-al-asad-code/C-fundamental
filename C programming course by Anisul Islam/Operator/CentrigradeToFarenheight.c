#include <stdio.h>
int main()
{
	float C, F;
	printf("Enter Centrigrade temperature = ");
	scanf("%f", &C);
	
	F = (C * 1.8) + 32;
	printf("The Fahrenheit temperature is = %f", F);
}
