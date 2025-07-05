#include<stdio.h>
#include<string.h>
int main()
{
   char name[100];
   char age[100];
   
   printf("Enter your name = ");
   fgets(name, 100, stdin);

   printf("Enter your age = ");
   fgets(age, 100, stdin);

   puts(name);
   puts(age);

  return 0;

}