#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("zad6-----------------\n");
    float array[4][3] = {{3.1, 3.6}, {2.2, 6.42}, {3.1, 3.6}, {3.5, 32.6}};
    for (int l = 0; l <= 3; l++)
    {
        for (int m = 0; m <= 1; m++)
        {
            printf("|%f | ", array[l][m]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
