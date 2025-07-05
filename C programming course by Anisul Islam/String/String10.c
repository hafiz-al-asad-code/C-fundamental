//Number of Vowel, Consonant, Digit, Word and Other
#include<stdio.h>
int main()
{
	char pabon[100];
	char ch;
	int i=0, vowel=0, consonant=0, digit=0, word=0, other=0;
	
	printf("Enter a string = ");
	gets(pabon);
	
	while((ch = pabon[i]) != '\0')
	{
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		vowel++;
		
		else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
			consonant++;
		
		else if(ch>='0' && ch<='9')
			digit++;
		
		else if(ch==' ')
			word++;

		else
			other++;
		
			i++;
	}
	
	word++;
	
	printf("Number of vowel = %d\n", vowel);
	printf("Number of consonant = %d\n", consonant);
	printf("Number of digit = %d\n", digit);
	printf("Number of word = %d\n", word);
	printf("Number of others = %d", other);
	
	return 0;
}