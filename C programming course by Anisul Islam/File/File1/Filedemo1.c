#include <stdio.h>
int main()
{
    FILE *file;

    file = fopen("Test.txt", "w");

    if (file == NULL)
    {
        printf("File doesn't exists");
    }
    else
    {
        printf("File is opened");
        fclose(file);
    }

    return 0;
}