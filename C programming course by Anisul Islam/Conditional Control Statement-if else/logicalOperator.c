#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any letter = "); 
    scanf("%c", &ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    printf("vowel");
    
    else
    printf("consonant");
    
}