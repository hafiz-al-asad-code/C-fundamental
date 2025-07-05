//1^1 * 3^2 * 5^3 * .............*n^m

#include <stdio.h>
int main()
{
	int n, i, result = 1, power = 1;

	printf("Enter n = ");
	scanf("%d", &n);

	for (i = 1; i <= n; i = i + 2)
	{
		result = result * (i * power);

		if (i == 1)
		{
			printf("1^1 * ");
		}
		else if (i == n)
		{
			printf("%d^%d", i, power);
		}
		else
		{
			printf("%d^%d * ", i, power);
		}
		power++;
	}
	printf(" = %d", result);
}