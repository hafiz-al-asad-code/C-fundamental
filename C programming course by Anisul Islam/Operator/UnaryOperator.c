#include <stdio.h>
int main()
{
	int x = 10;
	int y = x++; //y = 10

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	int m = 38;
	int n = m--; //n = 38

	printf("m = %d\n", m);
	printf("n = %d\n", n);

	int i = 23;
	int j = ++i; //j = 24

	printf("i = %d\n", i);
	printf("j = %d\n", j);

	int a = 20;
	int b = --a; //b = 19

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}