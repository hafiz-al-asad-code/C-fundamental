#include <stdio.h>

void modifyValue(int *b)
{
    *b = 800;
}

int main()
{
    int a = 67;

    printf("Before modification : a = %d\n", a);

    modifyValue(&a);

    printf("After modification : a = %d", a);
}