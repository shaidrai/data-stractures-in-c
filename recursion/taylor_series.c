#include <stdio.h>

float taylor(int x, int n)
{
    static float power = 3;
    static float factorial = 1;
    static float counter = 0;
    static float solution = 1.0;

    counter++;
    factorial = factorial * counter;
    solution = solution + (power / factorial);
    power = power * x;

    if (n == 0)
        return 1;

    if (counter == n)
    {
        return solution;
    }
    else
    {
        taylor(x, n);
        return solution;
    }
}

int main()
{
    printf("%f \n", taylor(3, 20));
}
