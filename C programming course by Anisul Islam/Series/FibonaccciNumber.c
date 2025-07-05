#include<stdio.h>
int main()
{
	int n, count=0, fibo, first_number=0, second_number=1;
	
	printf("Enter range = ");
	scanf("%d", &n);
	
	while(count<n)
	{
		if(count<=1)
		{
			fibo = count;
		}
		else
		{
			fibo = first_number + second_number;	
			first_number = second_number;
			second_number = fibo;
		}
		printf("%d ", fibo);
		count++;
	}
}