#include <stdio.h>

struct class
{
    int students;
};

int add(int a, int b, int *p)
{
    // Change by pointer
    *p = 90;
    return a + b;
}

void changeStruct(struct class *pointer)
{

    (*pointer).students = 30;
}

int main()
{
    int y = 30;

    int x = add(10, 30, &y);

    // Now y is change because ot the pointer
    printf("%d \n", y);

    //
    struct class a = {10};
    changeStruct(&a);

    printf("%d \n", a.students);
}