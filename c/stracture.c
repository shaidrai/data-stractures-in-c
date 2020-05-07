#include <stdio.h>

struct student
{

    // Stracture schema
    int grade;

    int age;

    char name[15];
};

int main()
{
    // Declare and initialize stracture in memory
    struct student r = {90, 13, "drai"};

    // Array of stracture (10 students)
    struct student x[10];

    x[0] = r;

    // printing
    printf("Grade %d \n", x[0].grade);
    printf("Name %s \n", x[0].name);
}
