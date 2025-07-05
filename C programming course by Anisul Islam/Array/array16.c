#include<stdio.h>
int main()
{
	int first[20] [20], second[20] [20], c1, r1, c2, r2, i, j, k, sum=0, result[20] [20];
	
	printf("Enter number of rows and columns for First matrix = ");
	scanf("%d %d", &r1, &c1);
	
	printf("Enter number of rows and columns for Second matrix = ");
	scanf("%d %d", &r2, &c2);
	
	while(c1!=r2)
	{
		printf("Error!! Number of Columns of First martrix hasn't matched with Number of Rows of Second matrix\n");
	printf("Enter number of rows and colums for First matrix = ");
	scanf("%d %d", &r1, &c1);
	
	printf("Enter number of rows and columns for Second matrix = ");
	scanf("%d %d", &r2, &c2);	
	}
	printf("\n");
	
	//Input for First matrix
	printf("Give input for First matrix\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			printf("First[%d] [%d] = ", i, j);
			scanf("%d", &first[i] [j]);
		}
	}
	printf("\n");
	
	//Input for Second matrix
	printf("Give input for Second matrix\n");
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("Second[%d] [%d] = ", i, j);
			scanf("%d", &second[i] [j]);
		}
	}
	printf("\n");
	
	//Output for First matrix
	printf("A = \n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			printf("%d ", first[i] [j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//Output for Second matrix
	printf("B = \n");
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("%d ", second[i] [j]);
		}
		printf("\n");
	}
	
//Multipication of both matrix
for(i=0; i<r1; i++)
{
	for(j=0; j<c2; j++)
	{
		for(k=0; k<c1; k++)
		{
			sum = sum + first[i] [k] * second[k] [j];
		}
		result[i] [j] = sum;
		sum=0;
	}
}
printf("\n");

//Result of Multipication of both matrix
	printf("Result = \n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("%d ", result[i] [j]);
		}
		printf("\n");
	}
}