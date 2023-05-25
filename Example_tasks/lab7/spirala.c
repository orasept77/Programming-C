#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int wielkosc, col, row;
    printf("Podaj wielkosc spirali:");
    scanf("%i", &wielkosc);

    // 5 9 13 ... 4x5
    // 3 7 11 ... 2x3

    
    if (wielkosc % 4 == 1)
    {
        if (wielkosc % 2 == 0)
        {
            row = wielkosc;
            col = (wielkosc - 1) * 2 + 1;
        }
        else
        {
            row = wielkosc - 1;
            col = (wielkosc * 2) + 1;
        }
    } else if ( wielkosc % 4 == 3)
    {
        /* code */
    }
    

    char spirala[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == col - 1)
            {
                spirala[i][j] = '\0';
            }
            else
                spirala[i][j] = '-';
        }
    }

    // Wyznaczanie środka
    int x = (col / 2);
    int y = (row / 2) - 1;

    printf("X =%i Y=%i\n", x, y);

    spirala[y][x] = '#';

    int n_lini = 1;
    char kierunek = 'N';
    do
    {
        switch (kierunek)
        {
        case 'N':
            for (int i = 0; i < n_lini; i++)
            {
                y -= 1;
                spirala[y][x] = '#';
                printf("%i %i\n", x, y);
            }
            kierunek = 'E';
            break;
        case 'E':
            for (int i = 0; i < n_lini; i++)
            {
                x += 2;
                spirala[y][x] = '#';
                printf("%i %i\n", x, y);
            }
            kierunek = 'S';
            break;
        case 'S':
            for (int i = 0; i < n_lini; i++)
            {
                y += 1;
                spirala[y][x] = '#';
                printf("%i %i\n", x, y);
            }
            kierunek = 'W';
            break;
        case 'W':
            for (int i = 0; i < n_lini; i++)
            {
                x -= 2;
                spirala[y][x] = '#';
                printf("%i %i\n", x, y);
            }
            kierunek = 'N';
            break;
        }
        n_lini++;
    } while (n_lini < wielkosc);

    // Wypisywanie spirali
    for (int i = 0; i < row; i++)
    {
        printf("%s\n", spirala[i]);
    }
    return 0;
}
