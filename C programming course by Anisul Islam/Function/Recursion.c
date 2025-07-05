#include <stdio.h>
int main()
{
    int n = 3;
    int result = fact(n);

    printf("%d! = %d", n, result);
}

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;

    else
        return n * fact(n - 1);
}
