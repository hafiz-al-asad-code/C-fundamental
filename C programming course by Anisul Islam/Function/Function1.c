#include<stdio.h>

void sum(int a, int b, int c)
{
	printf("The Sum is = %d\n", a+b+c);
}

void sub(int a, int b)
{
	printf("The Sub is = %d", a-b);
}

int main()
{
	sum(1, 2, 5);
	sum(0, 1, 1000);
	sub(200, 100);	
	return 0;
}