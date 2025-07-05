#include <stdio.h>
int main()
{
	float C, F;
	printf("Enter Fahrenheit temperature = ");
	scanf("%f", &F);

	C = (F - 32) / 1.8;
	printf("\nThe Centigrade temperature is = %.2f", C);

	return 0;
}