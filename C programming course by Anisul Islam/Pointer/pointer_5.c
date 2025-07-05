#include <stdio.h>
int main()
{
    int b[] = {4, 44, 66, 900};
    int *pabon, i;

    pabon = &b[0];

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", *pabon);
        pabon++;
    }
}