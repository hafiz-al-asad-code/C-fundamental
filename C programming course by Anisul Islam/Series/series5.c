#include<stdio.h>
int main()
{
	int num, i, sum=0;
	
	printf("Enter any number,n= ");
	scanf("%d", &num);
	printf("1 + 4 + 7 +..........+n = ");
	
	for(i=1; i<=num; i=i+3)
	{
		sum = sum + i;
	}
	printf("%d", sum);
}