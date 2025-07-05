#include<stdio.h>

void display(int A[ ])
{
	int i, n;
	
	printf("How many numbers = ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n\n");
}

void display1(char Y[ ])
{
	int i=0;
	
	while(Y[i] != '\0')
	{
		printf("%c", Y[i]);
		i++;
	}
}

int main()
{
	int numbers[100];
	
	display(numbers);
	
	int x[40];
	
	display(x);
	
	char pabon[50]="Hafiz Al Asad Bhuiyan";
	
	display1(pabon);
	
}