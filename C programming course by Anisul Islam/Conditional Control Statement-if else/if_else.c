#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Enter first value = ");
	scanf("%d", &num1);
	printf("Enter second value = ");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		printf("num1 value is Large\n");
		printf("Be happy with num1");
	}

	else if (num1 < num2)
	{
		printf("num2 value is large\n");
		printf("Stay safe with num2");
	}

	else
	{
		printf("Numbers are equal\n");
		printf("make yourself equal");
	}

	return 0;
}