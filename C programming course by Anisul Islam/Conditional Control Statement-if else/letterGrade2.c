#include <stdio.h>
int main()
{
	float result;
	
	printf("Enter your result = ");
	scanf("%f", &result);
	
	if(result>=80)
	printf("A+");
	
	else if(result>=70)
	printf("A");
	
	else if(result>=60)
	printf("B");
	
	else if(result>=50)
	printf("C");
	
	else if(result>=40)
	printf("D");
	
	else if(result>=33)
	printf("E");
	
	else 
	printf("Fail");
	
}
	
	
	