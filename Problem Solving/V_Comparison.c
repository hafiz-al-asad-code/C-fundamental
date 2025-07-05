#include <stdio.h>
int main()
{
    int A, B;

    char ch;

    scanf("%d %c %d", &A, &ch, &B);

    if (A > B && ch == '>' || A < B && ch == '<')
    {
        printf("Right");
    }
    else if (A > B && ch == '<' || A < B && ch == '>')
    {
        printf("Wrong");
    }
    else if (A == B && ch == '=')
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }

    return 0;
}