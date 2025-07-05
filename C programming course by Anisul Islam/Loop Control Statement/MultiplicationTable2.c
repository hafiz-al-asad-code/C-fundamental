#include <stdio.h>
int main()
{
    int i, n, result;

    printf("Enter range = ");
    scanf("%d", &n);

    printf("\nMultiplication table of 10 : \n");

    if (n == 0)
    {
        result = 0;
        printf("10 * %d = %d", n, result);
    }

    for (i = 1; i <= n; i++)
    {
        result = 10 * i;
        printf("10 * %d = %d\n", i, result);
    }

    return 0;
}