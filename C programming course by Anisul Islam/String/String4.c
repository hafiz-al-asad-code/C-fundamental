#include<stdio.h>
int main()
{
	int i;
	char source[20];
	char target[20];
	
	printf("Enter your name = ");
	gets(source);
	
	printf("%s\n", source);
	
	for(i=0; i<'n'; i++)
	{
	target[i]=source[i];
	}
	
	printf("%s", target);
}