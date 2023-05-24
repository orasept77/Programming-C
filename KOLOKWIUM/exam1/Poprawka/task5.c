#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tab[4][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}, {1, 1, 1}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d wiersz %d kolumna - %d\n", i + 1, j + 1, tab[i][j]);
        }
    }
    return 0;
}
