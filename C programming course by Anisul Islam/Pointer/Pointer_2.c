#include <stdio.h>
int main()
{
    int x = 30, y = 40, diff;
    int *pointer1, *pointer2;

    pointer1 = &x;
    pointer2 = &y;

    diff = *pointer2 - *pointer1;

    printf("The difference is = %d", diff);

    return 0;
}