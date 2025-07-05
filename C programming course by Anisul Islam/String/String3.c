#include<stdio.h>
int main()
{
	int i=0, length=0;
	char s1[ ] = "Hafiz Al Asad Bhuiyan";
	
	while(s1[i] != '\0')
	{
		i++;
		length++;
	}
	printf("%d", length);
}