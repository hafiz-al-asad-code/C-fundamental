#include <stdio.h>
#include<math.h>
int main()
{
	int x;
	printf("Enter value = ");
	scanf("%d", &x);
	
	double result = sqrt(x);
	printf("%.2lf", result);
	
}