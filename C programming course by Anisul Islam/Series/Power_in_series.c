//1^2 + 2^2 + 3^2+.............+n=?
#include <stdio.h>
#include <math.h>
int main()
{
	int n, i, power, sum = 0;

	printf("Here is the series: 1^2 + 2^2 + 3^2+.............+ n\n");
	printf("Enter n = ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		power = pow(i, 2);
		sum = sum + power;
	}
	printf("The sum is = %d", sum);

	return 0;
}