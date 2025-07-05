#include<stdio.h>
int main()
{ 
    int digit;
    printf("Enter a digit = ");
    scanf("%d", &digit);
    
    switch(digit)
    
    {
        case 0:
        printf("%d = Zero\n", digit);
        break;
        
        case 1:
        printf("%d = One\n", digit);
        break;
        
        case 2:
        printf("%d = Two\n", digit);
        break;
        
        case 3:
        printf("%d = Three\n", digit);
        break;
        
        case 4: 
        printf("%d = Four\n", digit);
        break;
        
        case 5:
        printf("%d = Five\n", digit);
        break;
        
        case 6:
        printf("%d = Six\n", digit);
        break;
        
        case 7:
        printf("%d = seven\n", digit);
        break;
        
        case 8:
        printf("%d = Eight\n", digit);
        break;
        
        case 9:
        printf("%d = Nine\n", digit);
        break;  
        
        default:
        printf("%d = Not included in the system", digit);
        
    
    }
    
    return 0;
    
}
