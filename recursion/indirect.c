#include <stdio.h>

void B(int n);

void A(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        B(n - 1);
    }
}

void B(int n)
{
    if (n > -1)
    {
        printf("%d ", n);
        A(n - 1);
    }
}

int main()
{
    A(3);
    return 0;
}