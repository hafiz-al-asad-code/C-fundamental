#include <stdio.h>
#include "info.h"
int main()
{
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%s\n", My_profession);
    printf("%s\n", School);
    printf("%s\n", college);
    printf("%s\n", Academy);
    printf("%lf\n", PI);
    printf("%d\n", i);

    double result = i + PI;
    printf("The result is = %.3lf", result);

    return 0;
}