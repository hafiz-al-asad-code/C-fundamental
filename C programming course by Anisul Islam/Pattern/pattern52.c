#include <stdio.h>
int main()
{
    int row, col, n;

    printf("Enter your range = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
