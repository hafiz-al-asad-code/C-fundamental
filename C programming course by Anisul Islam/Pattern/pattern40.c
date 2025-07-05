#include<stdio.h>
int main()
{
	int n, row, col, i=0;
	
	printf("Enter n = ");
	scanf("%d", &n);
	
	for(row=1; row<=n; row++)
	{
		for(col=1; col<=row; col++)
		{
			i++;
			printf("%d ", row*i);
		}
		printf("\n");
		i=0;
		}
}