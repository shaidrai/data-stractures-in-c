// Get n sum : 1 + 2 + 3 + 4 + 5 + ... n - 1  + n
#include <stdio.h>

int fac(int n)
{
    if (n > 0)
    {
        return (n + (fac(n - 1)));
    }
    return n;
}

int main()
{
    printf("%d ", fac(4));
}