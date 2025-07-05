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
		sum = sum*10 + rem;
		temp = temp / 10;
	}

	printf("Reverse of number = %d\n", sum);

	return 0;
}