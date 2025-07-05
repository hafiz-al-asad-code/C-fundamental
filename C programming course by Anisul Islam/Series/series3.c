//2*3*7+4*6*14+6*9*21+................+n1*n2 = ?
#include<stdio.h>
int main()
{
	int num1, num2, num3, i=2, j=3, k=7, sum=0;
	
	printf("Enter the first final number= ");
	scanf("%d", &num1);
	printf("Enter the second last final number= ");
	scanf("%d", &num2);
	printf("Enter the last final number= ");
	scanf("%d", &num3);
	printf("2*3*7 + 4*6*14 + 6*9*21 + .............+ n1*n2 = ");
	
	while(i<=num1 && j<=num2 && k<=num3)
	{
		sum = sum + i*j*k;
		i=i+2;
		j=j+3;
		k=k+7;		
	}
	printf("%d", sum);
}