#include <stdio.h>
#include <math.h>
int main()
{
	int number, count, Total_Prime_Number = 0, Sum_of_Prime_Numbers = 0, i;
	int starting_number, ending_number;

	printf("Enter starting number= ");
	scanf("%d", &starting_number);
	printf("Enter ending number= ");
	scanf("%d", &ending_number);

	for (number = starting_number; number <= ending_number; number++)
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
			Total_Prime_Number++;
			Sum_of_Prime_Numbers = Sum_of_Prime_Numbers + number;
		}
	}
	printf("Total Prime Numbers are = %d\n", Total_Prime_Number);
	printf("The sum of Prime Numbers = %d", Sum_of_Prime_Numbers);

	return 0;
}