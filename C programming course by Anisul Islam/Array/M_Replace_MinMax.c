#include <stdio.h>

int main()
{
    int n, min, max;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }

        if (max < a[i])
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (min == a[i])
        {
            a[i] = max;
        }
        else if (max == a[i])
        {
            a[i] = min;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}