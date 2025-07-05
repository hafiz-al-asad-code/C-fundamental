#include <stdio.h>
int main()
{
    int x, y, z;
    x = 67, y = 30, z = 90;
    int *pointer;

    pointer = &x;

    printf("Address of x = %d\n", pointer);
    printf("Content of X = %d\n", *pointer);
    printf("Address of Pointer = %d\n", &pointer);

    pointer = &y;
    printf("Address of Y = %d\n", pointer);
    printf("Contents of Y = %d\n", *pointer);

    pointer = &z;
    printf("Address of X = %d\n", pointer);
    printf("Contents of Y = %d", *pointer);

    return 0;
}