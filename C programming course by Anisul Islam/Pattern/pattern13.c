/*
C C C
B B
A */
#include <stdio.h>
int main()
{
	int n, row, col;

	printf("Enter n = ");
	scanf("%d", &n);

	for (row = n; row >= 1; row--)
	{
		for (col = 1; col <= row; col++)
		{
			printf("%c ", row + 96);
		}
		printf("\n");
	}
}