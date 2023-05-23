#include <stdio.h>

int pomiar[10][10] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}}; // tablica dwuwymiarowa

int main()
{
    for (int i = 0; i < 3; i++)
        printf("%d\n", pomiar[i][2]);

    return 0;
}