/*
3 2 1 
2 1
1 
*/
#include <stdio.h>
int main()
{
	int n, row, col;
	printf("Enter n = ");
	scanf("%d", &n);

	for (row = 1; row <= n; row++)
	{
		for (col = n; col >= row; col--)
		{
			printf("%d ", col);
		}
		printf("\n");
	}
}