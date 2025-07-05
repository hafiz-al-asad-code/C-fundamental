#include <stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1 = {48, 45000.66};
    struct Person person2, person3;

    person2.age = 48;
    person2.salary = 890000.20;

    person3 = person2;

    if (person1.age == person2.age && person1.salary == person2.salary)
        printf("Person1 is equal to Person2\n");

    else
        printf("Person1 is not equal to Person2\n");

    if (person2.age == person3.age && person2.salary == person2.salary)
        printf("Person2 is equal to Person3");

    else
        printf("Person2 is not equal to Person3");
}