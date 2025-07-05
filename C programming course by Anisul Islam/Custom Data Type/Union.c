#include <stdio.h>

union test1
{
    int x, y;
};

union test2
{
    int x;
    float y;
};

union test3
{
    char name;
    double m;
};

union test4
{
    double n;
    char k;
    float r;
    int p;
};

struct pabon
{
    int x;
    int y;
    char t;
    float j;
    double u;
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    union test4 t4;
    struct pabon t5;

    printf("sizeof(t1) = %d\n", sizeof(t1));
    printf("sizeof(t2) = %d\n", sizeof(t2));
    printf("sizeof(t3) = %d\n", sizeof(t3));
    printf("sizeof(t4) = %d\n", sizeof(t4));
    printf("sizeof(t5) = %d\n", sizeof(t5));
}