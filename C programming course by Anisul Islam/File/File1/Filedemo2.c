#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    char pabon[] = {" Pabon"};
    int i;
    int length = strlen(pabon);

    file = fopen("Text.txt", "a");

    if (file == NULL)
    {
        printf("File doesn't exists");
    }
    else
    {
        printf("File is opened\n");

        for (i = 0; i < length; i++)
        {
            fputc(pabon[i], file);
        }

        printf("File is written successfully");
        fclose(file);
    }
}