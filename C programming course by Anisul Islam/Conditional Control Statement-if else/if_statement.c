#include <stdio.h>
int main()
{
	int a;
	printf("Enter value = ");
	scanf("%d", &a);
	
	if(a%2==0)
	printf("Number is even");
	
	if(a%2!=0)
	printf("Number is odd");
	
}