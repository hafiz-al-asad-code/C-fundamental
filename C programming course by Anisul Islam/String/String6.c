#include<stdio.h>
#include<string.h>
int main()
{
	char A[ ]="Hafiz Al Asad Pabon12";
	char B[ ]="Hafiz Al Asad Pabon12";
	
	int d = strcmp(A, B);
	
	if(d==0)
	
		printf("Strings are equal");
		
	else
		printf("Strings are not equal");
	
}