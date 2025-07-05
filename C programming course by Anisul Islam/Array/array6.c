#include<stdio.h>
int main()
{
	int matrix[3] [2] = 
	{
		{10, 40},
		{44, 90},
		{88, 17}
	};
	
	for(int row=0; row<3; row++)
	{
		for(int col=0; col<2; col++)
		{
			printf("%d ", matrix[row] [col]);
		}
		printf("\n");
	}
}