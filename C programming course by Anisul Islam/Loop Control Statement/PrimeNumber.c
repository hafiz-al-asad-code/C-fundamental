#include <stdio.h>
#include<math.h>
int main()
{
	while(1)
	{
		int number, count = 0;
	printf("Enter any number= ");
	scanf("%d", &number);

	if (number <= 1)
	{
		count++;
	}

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			count++;
			break;
		}
	}

	if (count == 0)
	{
		printf("This is a prime number\n");
	}

	else
	{
		printf("This is not a prime number\n");
	}

	
	}
}