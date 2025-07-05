#include<stdio.h>
int main()
{
	FILE *file;
	
	char name[100];
	int age, phone_number, num, i;
	
	file = fopen("Student.txt","a");
	
	if(file==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		printf("File is opened\n");
		
		printf("\nNumber of students = ");
		scanf("%d", &num);
		
		for(i=1; i<=num; i++)
		{
			printf("\nEnter students name = ");
			scanf("%s", &name);
			
			printf("Enter students age = ");
			scanf("%d", &age);
			
			printf("Enter students phone number = ");
			scanf("%d", &phone_number);
			
			fprintf(file, "%s\t\t\t%d\t\t\t%d\n", name, age, phone_number);					
		}
			printf("\nFile is written successfully");
			fclose(file);
	}
}