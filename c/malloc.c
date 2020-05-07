#include <stdio.h>
#include <stdlib.h>

struct class
{
    int students;
    char name[10];
};

int main()
{

    int *p;

    int *x;

    // Create a memory in heap, and get the pointer of it.
    p = (int *)malloc(20);
    printf("%d \n", *p);

    // Again in c++ syntax:
    // x = new int[20];
    // printf("%d \n", *x);

    // Struct pointer
    struct class *structP;

    // Creating structure in heap memory
    structP = (struct class *)malloc(sizeof(struct class));

    // changing the heap struct with his pointer.
    structP->students = 3;
}
