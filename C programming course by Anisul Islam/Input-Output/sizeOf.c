#include <stdio.h>
int main ()
{
	int x;
	float y;
	double z;
	char b;
	
	printf("size of x = %d bytes\n", sizeof (x));
	printf("size of y = %d bytes\n", sizeof (y));
	printf("size of z = %d bytes\n", sizeof (z));
	printf("size of b = %d byte", sizeof (b));
	
	return 0;
}