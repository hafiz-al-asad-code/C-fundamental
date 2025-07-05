#include <stdio.h>
#include <string.h>

struct Person
{
    char name[100];
    int age;
    float salary;
};

void display(struct Person p)
{
    printf("Name = %s\n", p.name);
    printf("Age = %d\n", p.age);
    printf("Salary = %.2f\n\n", p.salary);
}
int main()
{
    struct Person person1, person2, person3;

    strcpy(person1.name, "Hafiz Al Asad Bhuiyan");
    person1.age = 35;
    person1.salary = 67000.44;

    display(person1);

    strcpy(person2.name, "Abdul Aziz");
    person2.age = 56;
    person2.salary = 167000.44;

    display(person2);

    person3 = person2;

    display(person3);
}