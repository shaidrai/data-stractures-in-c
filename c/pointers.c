#include <stdio.h>

struct student
{
    int grade;
    int age;
};

int main()
{

    int num = 5;

    // declare empty pointer
    int *p;

    // set the pointer equal the num variable pointer
    p = &num;

    printf("%d \n", *p);

    printf("%lu \n", sizeof(int));

    // declare new struct
    struct student s = {90, 12};

    // Setting pointer to the structure s
    struct student *sPointer = &s;

    // Change prop in the struct with the pointer
    (*sPointer).grade = 10;

    // Same, shorter syntax
    sPointer->age = 20;
}
