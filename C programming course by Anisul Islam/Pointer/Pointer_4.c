#include <stdio.h>

void swapping(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
};

int main()
{
    int x = 33, y = 89;

    swapping(&x, &y);
    printf("Before swapping : x = %d and y = %d\n", x, y);

    printf("\nAfter swapping : \n");
    printf("x = %d\n", x);
    printf("y = %d", y);
}