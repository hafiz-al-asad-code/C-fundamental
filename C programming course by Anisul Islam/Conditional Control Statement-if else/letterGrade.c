#include<stdio.h>
int main()
{
    float result;
    printf("Enter your result = ");
    scanf("%f", &result);
    
    if(result>100 || result<0)
    printf("%.2f = Invalid result", result);
    
    else if(result>=80 && result<=100)
    printf("%.2f = A+", result);
    
    else if(result>=70 && result<=79)
    printf("%.2f = A", result);
    
    else if(result>=60 && result<=69)
    printf("%.2f = A-", result);
    
    else if(result>=50 && result<=59)
    printf("%.2f = B", result);
    
    else if(result>=40 && result<=49)
    printf("%.2f = C", result);
    
    else if(result>=33 && result<=39)
    printf("%.2f = D", result);
    
    else 
    printf("%.2f = Fail", result);
    
    return 0;
    
    }
    
    
    