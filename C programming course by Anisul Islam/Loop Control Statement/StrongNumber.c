#include <stdio.h>
int main()
{
	int num, temp, rem, sum = 0, i, fact;

	printf("Enter any number = ");
	scanf("%d", &num);
	temp = num;

	while (temp != 0)
	{
		rem = temp % 10;
		fact = 1;
		for (i = 1; i <= rem; i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		temp = temp / 10;
	}
	printf("The value after process is = %d\n", sum);
	if (sum == num)
	{
		printf("%d is a  Strong number", sum);
	}
	else
	{
		printf("%d is not a String number", sum);
	}
}