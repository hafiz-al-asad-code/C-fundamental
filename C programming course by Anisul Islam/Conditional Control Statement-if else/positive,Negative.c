#include <stdio.h>
int main()
{
	int x;
	printf("Enter value = ");
	scanf("%d", &x);
	
	if(x>0)
	printf("Number is positive");
	
	else if(x<0)
	printf("Number is negative");
	
	else
	printf("Number is zero");
	
}