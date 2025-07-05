#include <stdio.h>
int main()
{
    int i=50;
    
    print:
    printf("%d\n", i);
    i--;
    
    if(i>1)
    goto print;
    
    return 0;
}
