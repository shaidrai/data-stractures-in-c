#include <stdio.h>

float taylor(float x, float n)
{
    float r = 1;
    for (; n > 0; n--)
    {
        r = 1 + r * (x / n);
    }
    return r;
}

int main()
{
    printf("%f \n", taylor(3, 40));
}