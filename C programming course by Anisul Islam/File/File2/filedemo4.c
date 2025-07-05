#include<stdio.h>
int main()
{
	FILE *file;
	char ch1[100];
	char ch2[100];
	char ch3[100];
	int age;
	
	
	file = fopen("Text.txt","r");
	
	if(file==NULL)
	{
		printf("File doesn't exist");
	}
	else
	{
		printf("File is opened\n");
		
		fscanf(file, "%s %s %s %d", &ch1, &ch2, &ch3, &age);
		
		printf("%s %s %s %d", ch1, ch2, ch3, age);
		
		fclose(file);
	}
	
}