/*
* * * * *
* * * * *
* * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int n, row, col;
	printf("Entern n = ");
	scanf("%d", &n);
	
	for(row=1; row<=n; row++)
	{
		for(col=1; col<=n; col++)
		{
			printf("* ");
		}
		printf("\n");
	}
}