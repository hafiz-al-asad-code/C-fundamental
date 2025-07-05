#include<stdio.h>

struct Person
{
	int age;
	int salary;
};

int main()
{
	typedef struct Person pabon;
	pabon p={340000, 56};
	
	printf("%d\n", p.salary);
	printf("%d\n", p.age);
	
	pabon g={56990, 34};
	
	
	printf("%d\n", g.salary);
	printf("%d", g.age);
}