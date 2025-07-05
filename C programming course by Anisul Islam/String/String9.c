#include<stdio.h>
#include <string.h>
int main()
{
	char pabon[50] = "Hafiz Al Asad Bhuiyan";
	
	strlwr(pabon);
	strupr(pabon);
	
	printf("pabon = %s\n", pabon);
	printf("pabon = %s", pabon);
}