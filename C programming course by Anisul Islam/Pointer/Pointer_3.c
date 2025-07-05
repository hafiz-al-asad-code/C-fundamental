#include <stdio.h>
int main()
{
    int x = 20, y = 12, temp;
    int *pointer1, *pointer2;

    pointer1 = &x;
    pointer2 = &y;

    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;

    printf("x = %d\n", *pointer1);
    printf("y = %d\n", *pointer2);
}