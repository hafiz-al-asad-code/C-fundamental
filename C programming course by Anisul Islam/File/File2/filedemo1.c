#include<stdio.h>
int main()
{
	FILE *file;
	char pabon[100];
	int age;
	
	file = fopen("Text.txt","w");
	
	if(file==NULL)
	{
		printf("File doesn't exist");
	}
	else
	{
		printf("File is opened\n");
		
		printf("Enter your name = ");
		gets(pabon);
		printf("Enter your age = ");
		scanf("%d", &age);
		
		fprintf(file, "Name = %s, Age = %d\n", pabon, age);
		
		printf("File is written successfully");
		
		fclose(file);
			
	}

}