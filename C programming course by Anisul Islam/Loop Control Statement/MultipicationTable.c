#include <stdio.h>
int main()
{
    while (1)
    {
        int i;
        int num;

        printf("Enter your number= ");
        scanf("%d", &num);

        for (i = 1; i <= 60; i++)
            printf("%d * %d= %d\n", num, i, num * i);
    }
    return 0;
}