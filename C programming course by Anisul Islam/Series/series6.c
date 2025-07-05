//1.5 + 2.5 + 3.5+............+n=?
#include<stdio.h>
int main()
{
	float n, sum=0, i;
	
	 printf("Enter n= ");
	 scanf("%f", &n);
	 
	 for(i=1.5; i<=n; i++)
	 {
	 	sum = sum + i;
	 }  
	 printf("The sum is = %.1f", sum);
}