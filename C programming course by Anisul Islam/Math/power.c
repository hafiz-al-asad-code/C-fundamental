#include <stdio.h>
#include <math.h>
int main()
{
	int m, n;
	
	printf("Enter variable = ");
	scanf("%d", &m);
	printf("Enter power =");
	scanf("%d", &n);
	
double result = pow(m,n);
	printf("%.2lf", result);
	
}
