#include <stdio.h>

int f(int n, int n2, int n3)
{
    if (n > 0)
        return f(n - 1, n3, n2 + n3);
    else
        return n2;
}

int main()
{
    printf("%d \n", (f(5, 0, 1)));
}