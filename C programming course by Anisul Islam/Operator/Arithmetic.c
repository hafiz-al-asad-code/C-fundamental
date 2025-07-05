#include <stdio.h>
int main ()
{
	int num1, num2, result;
	
	printf("Enter two values = ");
	scanf("%d %d", &num1, &num2);
	
	result = num1 + num2;
	printf("The sum is = %d\n", result);
	
	result = num1 - num2;
	printf("The sub is = %d\n", result);
	
	result = num1 * num2;
	printf("The mul. is = %d\n", result);
	
	result = num1 / num2;
	printf("The divide is = %d\n", result);
	
	result = num1 % num2;
	printf("The remainder is = %d", result);
	
	
	
	return 0;
}