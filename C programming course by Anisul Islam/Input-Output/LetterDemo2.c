#include <stdio.h>
#include <ctype.h>
int main()
{
	char lower, upper;
	printf("Enter any uppercase character : ");
	scanf("%c", &upper);

	lower = tolower(upper);
	printf("The lowercase character is : %c", lower);

	return 0;
}