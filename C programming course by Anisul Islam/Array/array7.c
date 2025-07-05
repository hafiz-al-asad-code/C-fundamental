#include<stdio.h>
int main()
{
	int n;
	int numbers[ ]={1,23, 33, 78, 89, 27, 100};
	
	int first_number, second_number;
	
	int length_of_numbers = sizeof(numbers)/sizeof(numbers[0]);
	printf("The length of the numbers = %d\n", length_of_numbers);
	
	if(length_of_numbers<2)
	{
		printf("Array must have atleast two numbers to run the program successfully");
	}
	
	else
	{
		
		if(numbers[0]>numbers[1])
		{
			first_number=numbers[0];
			second_number=numbers[1];
		}
		else
		{
			first_number=numbers[1];
			second_number=numbers[0];
		}
		
		for(int index=2; index<length_of_numbers; index++)
		{
			if(numbers[index] > first_number)
			{
				second_number=first_number;
				first_number=numbers[index];
			}
			else if(numbers[index]>second_number && first_number != numbers[index])
			{
				second_number = numbers[index];
			}
		}
		
	printf("The first largest numbers = %d\n", first_number);
	printf("The second largest number = %d", second_number);
	}
}