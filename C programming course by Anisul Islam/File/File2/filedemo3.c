#include<stdio.h>
int main()
{
	FILE *file;
	char ch[100];
	
	file = fopen("Text.txt","r");
	
	if(file==NULL)
	{
		printf("File doesn't exist");
	}
	else
	{
		printf("File is opened\n");
		
		while(!feof(file))
		{
			fgets(ch, 38, file);
			printf("%s", ch);
		}
			fclose(file);
	}
}