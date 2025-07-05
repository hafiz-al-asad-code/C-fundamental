#include<stdio.h>
int main()
{
	char A[30] = "Noakhali";
	char B[30] = "Bangladesh";
	
	int i=0, j=0, length=0;
	
	while(A[i] != '\0')
	{
		i++;
		length++;
	}

	while(B[j] != '\0')
	{
		A[length + j] = B[j];
		j++;
	}
	printf("%s", A);
}