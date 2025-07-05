#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any letter = ");
    scanf("%c", &ch);
    
    if(ch>='A' && ch<='Z')
    printf("%c = capital letter", ch);
    
    else if(ch>='a' && ch<='z')
    printf("%c = small letter", ch);
    
    else
    printf("%c = It is not a letter", ch);
    
}