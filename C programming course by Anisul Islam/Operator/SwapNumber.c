#include <stdio.h>
int main()
{
	int num1=6;
	int num2=4;
	int temp;
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("num1 = %d\n", num1);
	printf("num2 = %d", num2);
}
	
	