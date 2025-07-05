#include <stdio.h>
int main()
{
	int a = 20;
	
	printf("%d\n", a++); //20
	printf("%d\n", a); //21
	printf("%d\n", ++a); //22
	printf("%d\n", a); //22
	printf("%d\n", --a); //21
	printf("%d\n", a--); //21
	printf("%d", --a); //19
	
}