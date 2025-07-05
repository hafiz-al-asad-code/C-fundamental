#include<stdio.h>
#include<ctype.h>
int main()
{
	char lower, upper;
	printf("Enter any lowercase character : ");
	scanf("%c", &lower);
	
	upper = toupper(lower);
	printf("The uppercase character is : %c", upper);
	
	return 0;
		
	
}