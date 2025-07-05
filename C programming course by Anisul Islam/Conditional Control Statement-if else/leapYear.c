#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year = ");
    scanf("%d", &year);
    
    if(year%400==0)
    printf("%d = Leap Year", year);
    
    else if(year%4==0 && year%100!=0)
    printf("%d = Leaf Year", year);
    
    else 
    printf("%d = Not Leaf Year", year);
}
    