#include <stdio.h>
int main()
{
	int i,  num, fact=1;
	
	printf("Enter any number= ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	printf("The factorial is= %d", fact);
	return 0;
}