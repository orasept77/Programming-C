#include <stdio.h>
#include <stdlib.h>

void renderboard(int wymiarTab, char tab[26][26])
{
    int x = 0;
    int y = 0;
    printf("\n");

    if (wymiarTab <= 9)
    {
        printf("   ");
    }
    else
    {
        printf("    ");
    }
    while (y < wymiarTab)
    {
        printf(" %c ", y + 65);
        y += 1;
    }
    printf("\n");

    while (x < wymiarTab)
    {
        y = 0;
        if (wymiarTab <= 9)
        {
            printf(" %i ", x + 1);
        }
        else
        {
            if (x < 9)
            {
                printf(" %i  ", x + 1);
            }
            else
            {
                printf(" %i ", x + 1); 
            }
        }

        while (y < wymiarTab)
        {
            printf(" %c ", tab[x][y]);
            y += 1;
        }
        x += 1;
        printf("\n");
    }
    printf("\n");
}

int makeMove(int wymiarTab, char tab[26][26], int gracz, int ileRuchow)
{
    int wiersz, kol, ruch = -1;
    char lit;
    while (ruch != 0)
    {
        printf("Teraz ruch gracza numer %i\n", gracz);
        printf("Podaj wiersz, w jakim chcesz wykonac ruch (wartosc od 1 do %i): ", wymiarTab);
        scanf(" %i", &wiersz);
        printf("Podaj kolumne, w jakiej chcesz wykonac ruch (wartosc od A do %c): ", wymiarTab + 64);
        scanf(" %c", &lit);
        kol = (int)lit - 65;
        printf("\n\n");

        if (tab[wiersz - 1][kol] == ' ')
        {
            if (gracz == 1) {tab[wiersz - 1][kol] = 'X';}
            else {tab[wiersz - 1][kol] = 'O';}
            ruch = 0;
        }
        else if ((wiersz < 1) || (wiersz > wymiarTab) || (kol < 0) || (kol >= wymiarTab))
        {
            printf("\nPodany ruch jest niemozliwy, wybrane pole lezy poza obszarem gry\n");
            renderboard(wymiarTab, tab);
            ruch = 1;
        }  
        else if ((tab[wiersz - 1][kol] == 'X') || (tab[wiersz - 1][kol] == 'O'))
        {
            printf("\nPodany ruch jest niemozliwy, wybrane pole jest juz zajete\n");
            renderboard(wymiarTab, tab);
            ruch = 2;
        }
        else
        {
            printf("\nInny blad\n");
            renderboard(wymiarTab, tab);
            ruch = 3;
        }
    }
    return ruch;
}

int score(int wymiarTab, char tab[26][26], int gracz)
{
    int czyWygrana = 0;
    int ileRuchow = 0;
    while (czyWygrana == 0)
    {
        makeMove(wymiarTab, tab, gracz, ileRuchow);
        ileRuchow += 1;
        renderboard(wymiarTab, tab);
        {
            if (gracz == 1)
            {
                gracz = 2;
            }
            else
            {
                gracz = 1;
            }
        }

        int xx = 0;
        while (xx < (wymiarTab - 2))
        {
            int yy = 0;
            while (yy < (wymiarTab - 2))
            {
                if ((tab[xx][yy] == tab[xx][yy + 1]) && (tab[xx][yy] == tab[xx][yy + 2]) && (tab[xx][yy] == 'X')) {czyWygrana = 1;}
                if ((tab[xx][yy] == tab[xx][yy + 1]) && (tab[xx][yy] == tab[xx][yy + 2]) && (tab[xx][yy] == 'O')) {czyWygrana = 2;}
                if ((tab[xx][yy] == tab[xx + 1][yy]) && (tab[xx + 2][yy] == tab[xx][yy]) && (tab[xx][yy] == 'X')) {czyWygrana = 1;}
                if ((tab[xx][yy] == tab[xx + 1][yy]) && (tab[xx + 2][yy] == tab[xx][yy]) && (tab[xx][yy] == 'O')) {czyWygrana = 2;}
                if ((tab[xx][yy] == tab[xx + 1][yy + 1]) && (tab[xx + 2][yy + 2] == tab[xx][yy]) && (tab[xx][yy] == 'X')) {czyWygrana = 1;}
                if ((tab[xx][yy] == tab[xx + 1][yy + 1]) && (tab[xx + 2][yy + 2] == tab[xx][yy]) && (tab[xx][yy] == 'O')) {czyWygrana = 2;}
                yy += 1;
            }
            xx += 1;
        }

        if (czyWygrana == 1)
        {
            printf("Koniec gry, wygral gracz 1");
        }
        else if (czyWygrana == 2)
        {
            printf("Koniec gry, wygral gracz 2");
        }
        else if (ileRuchow == wymiarTab*wymiarTab)
        {
            printf("Koniec gry, braklo wolnych pol na planszy");
        }
    }
}

int main()
{
    int ileRuchow = 0;
    int const wymiarTab = 0;
    printf("Podaj wymiar tablicy (wartosc od 3 do 26): ");
    scanf("%i", &wymiarTab);
    while ((wymiarTab < 3) || (wymiarTab > 26))
    {
        printf("\nPodales niewlasciwa wartosc\n");
        printf("Podaj wymiar tablicy (wartosc od 3 do 26): ");
        scanf("%i", &wymiarTab);
    }

    char tab[26][26];
    int x = 0;
    while (x < wymiarTab)
    {
        int y = 0;
        while (y < wymiarTab)
        {
            tab[x][y] = ' ';
            y += 1;
        }
        x += 1;
    }
    renderboard(wymiarTab, tab);

    int gracz = 1;
    score(wymiarTab, tab, gracz);
    return 0;
}