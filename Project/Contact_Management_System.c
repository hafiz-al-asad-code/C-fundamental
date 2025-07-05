#include <stdio.h>

struct Contact
{
    char name[100];
    char phone[100];
    char email[100];
};

void add_contact()
{
    FILE *file;

    // fflush(stdin);

    struct Contact contact;

    file = fopen("Contact.txt", "a");

    if (file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        getchar();

        printf("Enter your name = ");
        fgets(contact.name, sizeof(contact.name), stdin);

        printf("Enter phone number = ");
        fgets(contact.phone, sizeof(contact.phone), stdin);

        printf("Enter your email = ");
        fgets(contact.email, sizeof(contact.email), stdin);

        fprintf(file, "%s%s%s\n", contact.name, contact.phone, contact.email);

        printf("\nData has been included in Contact Management System");

        fclose(file);
    }
};

void display_contact()
{
    FILE *file;

    // fflush(stdin);

    struct Contact contact;

    file = fopen("Contact.txt", "r");

    if (file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n\n");

        while (fscanf(file, " %[^\n] %[^\n] %[^\n]", &contact.name, &contact.phone, &contact.email) != EOF)
        {
            printf("Name : %s\nPhone : %s\nEmail : %s\n\n", contact.name, contact.phone, contact.email);
        }
        fclose(file);
    }
};

int main()
{
    int choice;

    // fflush(stdin);

    do
    {
        printf("Contact Management System\n");
        printf("1.Add Contact\n");
        printf("2.Display Contact\n");
        printf("3.Exit");

        printf("\n\nEnter your choice = ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_contact();
            break;

        case 2:
            display_contact();
            break;

        case 3:
            printf("Exiting.....");
            break;

        default:
            printf("Invalid choice. Please try again\n\n");
        }
    } while (choice != 3);
}