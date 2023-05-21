#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0;
    printf("Podaj wielkosc tabeli: ");
    scanf("%i", &size);
    char tab[size][size];
    int rysowanie = size;
    int kolejka = 0;
    int WS = size - 1;
    int KL = 0;

    int x = 0;
    while (x < size)
    {
        int y = 0;
        while (y < size)
        {
            tab[x][y] = ' ';
            y += 1;
        }
        x += 1;
    }
    
    while (rysowanie > 0)
    {
        int rysZnak = rysowanie;
        if (kolejka == 0)
        {
            while (rysZnak > 0)
            {
                tab[WS][KL] = 'X';
                KL += 1;
                rysZnak -= 1;
            }
            WS -= 1;
            KL -= 1;
        }
        if (kolejka == 1)
        {
            while (rysZnak > 0)
            {
                tab[WS][KL] = 'X';
                WS -= 1;
                rysZnak -= 1;
            }
            WS += 1;
            KL -= 1;
        }
        if (kolejka == 2)
        {
            while (rysZnak > 0)
            {
                tab[WS][KL] = 'X';
                KL -= 1;
                rysZnak -= 1;
            }
            WS += 1;
            KL += 1;
        }
        if (kolejka == 3)
        {
            while (rysZnak > 0)
            {
                tab[WS][KL] = 'X';
                WS += 1;
                rysZnak -= 1;
            }
            WS -= 1;
            KL += 1;
        }
        rysowanie -= 1;
        kolejka += 1;
        kolejka = (kolejka % 4);
    }
    
    printf("\n");
    int xx = 0;
    while (xx < size)
    {
        int yy = 0;
        while (yy < size)
        {
            printf(" %c ", tab[xx][yy]);
            yy += 1;
        }
        printf("\n");
        xx += 1;
    }
    printf("\n");
    return 0;
}