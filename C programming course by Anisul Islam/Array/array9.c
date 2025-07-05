#include<stdio.h>
int main()
{
	int numbers['n'];
	int n, i, sum=0;
	
	printf("How many numbers = ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &numbers[i]);
	}
	 
	for(i=0; i<n; i++)
	{
		sum=sum+numbers[i];
	}
	printf("Sum = %d", sum);
}