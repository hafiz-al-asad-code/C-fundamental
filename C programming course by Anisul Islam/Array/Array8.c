#include<stdio.h>
int main()
{
	int A[3] [2], B[3] [2], C[3] [2];
	int row, col;
	
//input for A matrix

	printf("For A : \n\n ");
	for(row=0; row<3; row++)
	{
		for(col=0; col<2; col++)
		{
			printf("A[%d] [%d] = ", row, col);
			scanf("%d", &A[row] [col]);
		}
	}
	printf("\n");

//output for A matrix

	printf("A = \n");	
	for(row=0; row<3; row++)
	{
		for(col=0; col<2; col++)
		{
			printf("%d ", A[row] [col]);
		}
		printf("\n");
	}
	printf("\n");
	
//input for B matrix

	printf("For B : \n\n ");
	for(row=0; row<3; row++)
	{
		for(col=0; col<2; col++)
		{
			printf("B[%d] [%d] = ", row, col);
			scanf("%d", &B[row] [col]);
		}
	}
	printf("\n");
	
//output for B matrix>

	printf("B = \n");
	for(row=0; row<3; row++)
	{
		for(col=0; col<2; col++)
		{
			printf("%d ", B[row] [col]);
		}
		printf("\n");
	}
	printf("\n");
	
//Sum of matrix in C
	
	printf("C(A+B) = \n");
	for(row=0; row<3; row++)
	{
		for(col=0; col<2; col++)
		{
			C[row] [col] = A[row] [col] + B[row] [col];
			printf("%d ", C[row] [col]);	
		}
		printf("\n");
	}
}