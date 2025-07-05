#include <stdio.h>
int main()
{
	int starting_number, ending_number, i, rem, sum = 0, temp;
	printf("Enter starting number= ");
	scanf("%d", &starting_number);
	printf("Enter ending number= ");
	scanf("%d", &ending_number);

	for (i = starting_number; i <= ending_number; i++)
	{
		temp = i;
		sum = 0;

		while (temp != 0)
		{
			rem = temp % 10;
			sum = (sum * 10) + rem;
			temp = temp / 10;
		}
		if (sum == i)
		{
			printf("%d\n", sum);
		}
	}
}