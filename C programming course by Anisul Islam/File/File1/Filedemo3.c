#include <stdio.h>
int main()
{
    FILE *file;
    char pabon[100];

    file = fopen("Text.txt", "a");

    if (file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");

        fputs("\n", file);

        printf("Enter your full name = ");
        gets(pabon);

        fputs(pabon, file);

        printf("File is written successfully");
        fclose(file);
    }

    return 0;
}