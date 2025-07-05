#include <stdio.h>
#include <math.h>
int main()
{
	int number, count, i, Total_Prime_Numbers = 0, Sum_of_Prime_Numbers = 0;

	for (number = 1; number <= 100; number++)
	{
		count = 0;
		if (number <= 1)
		{
			count = 1;
		}

		for (i = 2; i <= sqrt(number); i++)
		{
			if (number % i == 0)
			{
				count = 1;
				break;
			}
		}
		if (count == 0)
		{
			printf("%d\n", number);
			Total_Prime_Numbers++;
			Sum_of_Prime_Numbers = Sum_of_Prime_Numbers + number;
		}
	}
	printf("The total prime numbers= %d\n", Total_Prime_Numbers);
	printf("Sum of Prime Numbers= %d", Sum_of_Prime_Numbers);
	return 0;
}