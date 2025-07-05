/*
   *
  ***
 *****
*/
#include <stdio.h>
int main()
// {
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space = n - 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = space; j > 0; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < star; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star = star + 2;
//         space--;
//     }

{
    int n, row, col;

    printf("Enter n = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}