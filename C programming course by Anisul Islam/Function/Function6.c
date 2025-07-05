#include <stdio.h>

void display(int A[])
{
    int max = A[0];

    for (int i = 0; i < 8; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    printf("The maximum number is = %d", max);
}

int main()
{

    int numbers[] = {10, 20, 30, 44, 4, -1, 100, 203};

    display(numbers);
}