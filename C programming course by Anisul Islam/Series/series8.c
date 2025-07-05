//1*3*5*7*............*n
#include <stdio.h>
int main()
{
	int n, i, sum = 1;

	printf("Enter n = ");
	scanf("%d", &n);

	for (i = 1; i <= n; i=i+2)
	{
		sum = sum * i;

		if (i == 1)
		{
			printf("1 * ");
		}
		else if (i == n)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d * ", i);
		}
	}
		printf(" = %d", sum);
}