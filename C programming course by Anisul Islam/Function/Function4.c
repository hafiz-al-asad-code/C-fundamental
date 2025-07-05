#include<stdio.h>

void power(double base, double exp)
{
	double i, result=1;
	
	for(i=1; i<=exp; i++)
	{
		result= result * base;
	}
	
	printf("The result is = %.2lf\n", result);
}
 
int main()
{
	power(2,3);
	power(6,3);
	power(6,9);
	power(2,4);
	power(1,1);
	power(6,0);
	power(3,3);
	
}