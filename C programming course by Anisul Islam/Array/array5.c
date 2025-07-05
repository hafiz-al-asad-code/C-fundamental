//Find out First and Second Largest number
#include <stdio.h>
int main()
{
	int numbers[ ] = {10, 17, 18, 0, 90, 40, 120, -6, 10000};
	int index;

	int length_of_numbers = sizeof(numbers) / sizeof(numbers[0]);
	printf("length_of_numbers = %d\n", length_of_numbers);

	if (length_of_numbers < 2)
	{
		printf("Array should have atleast two numbers to run the program successfully");
	}

	else
	{
		
		int first, second;
		if (numbers[0] > numbers[1])
		{
			first = numbers[0];
			second = numbers[1];
		}
		else
		{
			first = numbers[1];
			second = numbers[0];
		}
		printf("Initial First largest = %d\n", first);
		printf("Initial Second largest = %d\n", second);

		for (index = 2; index < length_of_numbers; index++)
		{
			if (first < numbers[index])
			{
				second = first;
				first = numbers[index];
			}

			else if (second < numbers[index] && numbers[index] != first)
			{
				second = numbers[index];
			}
		}

		printf("The first largest number = %d\n", first);
		printf("The second largest number = %d\n", second);
	}
	printf("The Array : ");
	for(index=0; index<length_of_numbers; index++)
	{
		printf("%d ", numbers[index]);
	}
}
