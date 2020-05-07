#include <stdio.h>
#include <time.h>

int powN(int m, int n)
{
    if (n == 0)
        return 1;
    return m * powN(m, n - 1);
}

// More efficient
int powN2(int m, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
        return powN2(m * m, n / 2);
    else
        return m * powN2(m * m, (n - 1) / 2);

    return m * powN2(m, n - 1);
}

int main()
{
    clock_t start = clock();
    powN2(5, 10000);
    clock_t end = clock();
    float seconds = (float)(end - start) / CLOCKS_PER_SEC;

    clock_t start2 = clock();
    powN(5, 10000);
    clock_t end2 = clock();
    float seconds2 = (float)(end2 - start2) / CLOCKS_PER_SEC;

    printf("%.6f ", seconds);

    // Not efficient
    printf("%.6f ", seconds2);
}