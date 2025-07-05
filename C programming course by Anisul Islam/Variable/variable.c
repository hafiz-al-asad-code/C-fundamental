#include<stdio.h>

int a=4;

void display();

int main()
{
    printf("main a = %d\n", a);
    
    display();
}

    void display()
    {
    printf("display a = %d", a);
    }

    