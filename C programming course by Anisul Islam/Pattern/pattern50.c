/*
1
2 1
3 2 1
4 3 2 1
*/



#include<stdio.h>
int main()
{
	int row, col, n;
	
	printf("Enter n = ");
	scanf("%d", &n);
	
	for(row=1; row<=n; row++)
	{
		for(col=row; col>=1; col--)
		{
			printf("%d ", col);
		}
		printf("\n");
	}
}