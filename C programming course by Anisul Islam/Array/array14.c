#include<stdio.h>
int main()
{
	int A[20] [20], B[20] [20], C[20] [20], D[20] [20], i, j,n, number_of_row, number_of_col;
	
	printf("Enter number of rows and columns = ");
	scanf("%d %d", &number_of_row, &number_of_col);
	
	//Input for A matrix
	printf("Please give input for A matrix\n");
	for(i=0; i<number_of_row; i++)
	{
		for(j=0; j<number_of_col; j++)
		{
			printf("A[%d] [%d] = ", i, j);
			scanf("%d", &A[i] [j]);
		}
	}
	
	//Output for A matrix
	printf("\nA= \n");
	for(i=0; i<number_of_row; i++)
	{
		for(j=0; j<number_of_col; j++)
		{
			printf("%d ", A[i] [j]);
		}
		printf("\n");	
	}
	
	//Input for B matrix
	printf("\nPlease give input for B matrix\n");
	for(i=0; i<number_of_row; i++)
	{
		for(j=0; j<number_of_col; j++)
		{
			printf("B[%d] [%d] = ", i, j);
			scanf("%d", &B[i] [j]);
		}
	}
	
	//Output for B matrix
	printf("\nB= \n");
	for(i=0; i<number_of_row; i++)
	{
		for(j=0; j<number_of_col; j++)
		{
			printf("%d ", B[i] [j]);
		}
		printf("\n");
	}
	
	//Input for C matrix
	printf("\nPlease give input for C matrix\n");
	for(i=0; i<number_of_row; i++)
	{
		for(j=0; j<number_of_col; j++)
		{
			printf("C[%d] [%d] = ", i, j);
			scanf("%d", &C[i] [j]);
		}
	}
	
	//Output for C matrix
	printf("\nC= \n");
	for(i=0; i<number_of_row; i++)
	{
		for(j=0; j<number_of_col; j++)
		{
			printf("%d ", C[i] [j]);
		}
		printf("\n");
	}
	
	//Sum of A and B and C
	printf("\nSum of A and B and C : \n");
	printf("\nD(A+B+C) = \n");
	for(i=0; i<number_of_row; i++)
	{
		for(j=0; j<number_of_col; j++)
		{
			D[i] [j] = A[i] [j] + B[i] [j] + C[i] [j];
			printf("%d ", D[i] [j]);
		}
		printf("\n");
	}
}