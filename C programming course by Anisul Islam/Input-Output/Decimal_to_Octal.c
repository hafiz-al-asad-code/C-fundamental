#include <stdio.h>
int main()
{
	int number;
	printf("Enter a decimal number : ");
	scanf("%d", &number);
	
	printf("\nThe octal number for the decimal number is : %o", number);
	
	return 0;
}