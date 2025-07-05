//3+6+9+............n;
#include<stdio.h>
int main()
{
	int num, i, sum=0;
	printf("Enter the last number = ");
	scanf("%d", &num);
	printf("3+6+9+............+n = ");
	
	for(i=3; i<=num; i=i+3)
	{
		sum = sum + i;
	}
	printf("%d", sum);
}