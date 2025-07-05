/*
1 	2	 3 
4 	5	 6 
7 	8	 9
*/
#include<stdio.h>
int main()
{
	int A[10] [10], i,j, row, col, sum=0, upper_sum=0, lower_sum=0;
	
	printf("Enter number of rows and columns of matrix A = ");
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
	printf("\n");
	
//Output for A matrix
	printf("A = \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ", A[i] [j]);
		}
		printf("\n");
	}
	printf("\n");
	
//Sum of Diagonal elements
	printf("Diagonal elements = ");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(i==j)
			{
				printf("%d ", A[i] [j]);
				sum = sum + A[i] [j];
			}
	}
}
		printf("\nSum of diagonal elements = %d\n", sum);
		
//Sum of Upper and Lower Triangle
for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		if(i<j && i != j)
		{
			upper_sum = upper_sum + A[i] [j];
		}
		else if(i>j && i != j)
		{
			lower_sum = lower_sum + A[i] [j];
		}
	}
}

		printf("Sum of Upper Triangle = %d\n", upper_sum);
		printf("Sum of Lower Triangle = %d", lower_sum);
}