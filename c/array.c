#include <stdio.h>

int main()
{
    int b[5] = {0, 3, 5, 2, 1};

    int i;

    for (i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            printf("drai");
        }
        printf("%d \n", b[i]);
    }
    return 0;
}