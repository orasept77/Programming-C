#include <stdio.h>

int pomiar[3][4][2];
// %p%o szczestkowy osemkowy

int main()
{
    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                pomiar[i][j][k] = 1;
            }
        }
    }

    for (int k = 0; k < 2; k++)
    {
        printf("\n");
        for (int i = 0; i < 3; i++)
        {
            printf("\n");
            for (int j = 0; j < 4; j++)
            {
                printf("\n");
                printf("%d\t", pomiar[i][j][k]);
            }
        }
    }
    return 0;
}