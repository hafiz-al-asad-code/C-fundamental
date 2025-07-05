//1 + 1/2 + 1/3 + 1/4+..............+1/n
#include <stdio.h>
int main()
{
	double n, i, sum = 0;

	printf("The series is: 1 + 1/2 + 1/3 + 1/4+..............+1/n\n");
	printf("Enter n= ");
	scanf("%lf", &n);

	for (i = 1; i <= n; i++)
	{
		sum = sum + (1 / i);

		if (i == 1)
		{
			printf("1 + ", i);
		}
		else if (i == n)
		{
			printf("(1/%.0lf)", i);
		}
		else
		{
			printf("(1/%.0lf) + ", i);
		}
	}
	printf(" = %.3lf", sum);
}