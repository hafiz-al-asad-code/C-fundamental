#include <stdio.h>
int main() 
{
    int ticket;
    int score;
    int cost;
    int result;
    
    printf("Enter your score = ");
    scanf("%d", &score);
    
    printf("Enter the cost of the squirt gun(in ticket) = ");
    scanf("%d", &cost);
    
        result = score/12;
        ticket = result;
        
        if(ticket>=cost)
        {
            printf("\nBuy it!");
        }
        
        else if(ticket<1)
        {
        	printf("\nYou don't have any tickets.");
        }
        
        else 
        {
            printf("\nTry again");
        }
    
    return 0;
}