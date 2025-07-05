#include <stdio.h>

struct Person
{
    int age;
    float salary;
    int mobile_number;
};

int main()
{
    struct Person person1, person2;

    // Input for person1
    printf("Provide information for person1 : \n");
    printf("Enter age = ");
    scanf("%d", &person1.age);
    printf("Enter salary = ");
    scanf("%f", &person1.salary);
    printf("Enter mobile number  = ");
    scanf("%d", &person1.mobile_number);

    // Output for person1
    printf("\nperson1 : \n");
    printf("Age = %d\n", person1.age);
    printf("Salary = %.2f\n", person1.salary);
    printf("Mobile Number = %d\n", person1.mobile_number);

    // Input for person2
    printf("\nProvide information for person2 : \n");
    printf("Enter age = ");
    scanf("%d", &person2.age);
    printf("Enter salary = ");
    scanf("%f", &person2.salary);
    printf("Enter mobile number  = ");
    scanf("%d", &person2.mobile_number);

    // Output for person2
    printf("\n");
    printf("person2 : \n");
    printf("Age = %d\n", person2.age);
    printf("Salary = %.2f\n", person2.salary);
    printf("Mobile Number = %d\n", person2.mobile_number);

    return 0;
}