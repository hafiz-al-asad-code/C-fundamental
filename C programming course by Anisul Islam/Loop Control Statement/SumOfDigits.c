#include <stdio.h>
int main()
{
	int temp, number, sum = 0, rem;

	printf("Enter any number= ");
	scanf("%d", &number);
	temp = number;

	while (temp != 0)
	{
		rem = temp % 10;
		sum = sum + rem;
		temp = temp / 10;
	}

	printf("The sum of the digit is = %d", sum);

	return 0;
}