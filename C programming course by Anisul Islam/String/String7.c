#include<stdio.h>
#include<string.h>
int main()
{
	char A[ ]="MOM";
	char B[50];
	int i=0, j, length=0;
	
	while(A[i] !='\0')
	{
		i++;
		length++;
	}
	
	for(j=0, i=length-1; i>=0; i--, j++)
	{
		B[j] = A[i];
	}
	B[j] = '\0';
	
	printf("%s\n", A);
	printf("\n%s\n", B);
	
	int d = strcmp(A, B);
	
	if(d==0)
	printf("\nStrings are Palindrome");
	
	else
	printf("\nStrings are not Palindrome");
	
	return 0;
}