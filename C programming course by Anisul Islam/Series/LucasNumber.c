#include <stdio.h>
int main()
{
	int n, first_number = 2, second_number = 1, i, next_number;

	printf("Enter the last term of Lucas number = ");
	scanf("%d", &n);

	printf("The series is = %d %d ", first_number, second_number);

	for (i = 3; i <= n; i++)
	{
		next_number = first_number + second_number;
		first_number = second_number;
		second_number = next_number;

		printf("%d ", next_number);
	}
}