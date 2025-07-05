#include<stdio.h>
#include <string.h>
int main()
{
	char A[50] = "Before you go any further";
	char B[50] = "Come to me";
	char temp[50];
	
	printf("Before swapping\n\n");
	printf("A = %s\n", A);
	printf("B = %s\n", B);
	
	 strcpy(temp, A);
	 strcpy(A, B);
	 strcpy(B, temp);
	 
	 printf("\n");
	 
	  printf("After swapping\n\n");
	  printf("A = %s\n", A);
	  printf("B = %s", B);
	  
	   return 0; 
}