#include <stdio.h>
int main()
{
	int starting_number, ending_number, i, temp, rem, sum;
	int Total_Armstrong_number = 0, sum_of_armstrong = 0;

	printf("Enter starting number = ");
	scanf("%d", &starting_number);
	printf("Enter ending number = ");
	scanf("%d", &ending_number);
	printf("The Armstrong numbers are : \n");

	for (i = starting_number; i <= ending_number; i++)
	{
		sum = 0;
		temp = i;
		while (temp != 0)
		{
			rem = temp % 10;
			sum = sum + rem * rem * rem;
			temp = temp / 10;
		}
		if (sum == i)
		{
			printf("%d\n", sum);
			Total_Armstrong_number++;
			sum_of_armstrong = sum_of_armstrong + sum;
		}
	}
	printf("Total Armstrong numbers are = %d\n", Total_Armstrong_number);
	printf("Sum of Armstrong numbers is = %d\n", sum_of_armstrong);
	printf("\nThe program is created by Hafiz Al Asad Bhuiyan");
	return 0;
}