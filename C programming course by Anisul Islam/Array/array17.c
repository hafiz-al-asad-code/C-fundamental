#include<stdio.h>
int main()
{
	int A[20] [20], transpose[20] [20], row, col, i, j;
	
	printf("Enter number of rows and columns for A matrix = ");
	scanf("%d %d", &row, &col);

//Input for A matrix
printf("\n");	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("A[%d] [%d] = ", i, j);
			scanf("%d", &A[i] [j]);
		}
	}

//Output for A matrix
		printf("\nA = \n");	
		for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ", A[i] [j]);
		}
		printf("\n");
	}
	printf("\n");
	
//Transpose of A matrix
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			transpose[j] [i] = A[i] [j];
		}
	}
	
	
//Output of Transpose of A matrix
	printf("Transpose of A = \n");
	for(i=0; i<col; i++)
	{
		for(j=0; j<row; j++)
		{
			printf("%d ", transpose[i] [j]);
		}
		printf("\n");
	}
}