#include <stdio.h>
int main()
{
	int uppercase;
	printf("Enter any uppercase character : ");
	scanf("%c", &uppercase);
	
	printf("The lowercase character is : %c", uppercase+32);
	
	return 0;
	
}