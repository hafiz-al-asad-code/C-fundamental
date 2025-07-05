#include<stdio.h>
int main()
{
	char pabon[100], ch; 
	int i=0, capital=0, small=0, digit=0;
	
	printf("Enter a string = ");
	gets(pabon);
	
	while((ch=pabon[i]) !='\0')
	{
		if(ch>=65 && ch<=90)
		capital++;
		
		else if(ch>=97 && ch<=122)
		small++;
		
		else if(ch>=48 && ch<=57)
		digit++;
		
		i++;
	}
	
	printf("Number of capital letter = %d\n", capital);
	printf("Number of small letter = %d\n", small);
	printf("Number of digit = %d", digit);
}