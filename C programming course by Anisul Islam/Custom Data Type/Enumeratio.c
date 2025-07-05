#include <stdio.h>

enum days_of_week
{
    Sun = 4,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

int main()
{
    int diff;

    enum days_of_week day1, day2;

    day1 = Sun;
    day2 = Tue;

    diff = day2 - day1;

    printf("day difference = %d", diff);
}