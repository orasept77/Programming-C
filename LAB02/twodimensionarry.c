#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int tab[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int wybor, kolumna, wiersz, nowaWartosc;
    float srednia;
    while (1)
    {
        printf("-----------------------------------\n");
        printf("MENU\n");
        printf("1. Srednia z wybranej kolumny\n");
        printf("2. Srednia z wybranego wiersza\n");
        printf("3. Modyfikacja wybranej komorki\n");
        printf("4. Wyjscie z programu\n");
        printf("-----------------------------------\n");
        printf("WYBIERZ OPCJE: ");
        scanf("%d", &wybor);
        switch (wybor)
        {
        case 1:
        {
            printf("-----------------------------------\n");
            printf("|%i||%i||%i|\n", tab[0][0], tab[0][1], tab[0][2]);
            printf("|%i||%i||%i|\n", tab[1][0], tab[1][1], tab[1][2]);
            printf("|%i||%i||%i|\n", tab[2][0], tab[2][1], tab[2][2]);
            printf("-----------------------------------\n");
            printf("podaj kolumne (1-3): ");
            scanf("%i", &kolumna);
            srednia = (tab[0][kolumna - 1] + tab[1][kolumna - 1] + tab[2][kolumna - 1]) / 3;
            printf("-----------------------------------\n");
            printf("SREDNIA: %f\n", srednia);
            srednia = 0;
            kolumna = 0;
            printf("-----------------------------------\n");
            break;
        }
        case 2:
        {
            printf("-----------------------------------\n");
            printf("|%i||%i||%i|\n", tab[0][0], tab[0][1], tab[0][2]);
            printf("|%i||%i||%i|\n", tab[1][0], tab[1][1], tab[1][2]);
            printf("|%i||%i||%i|\n", tab[2][0], tab[2][1], tab[2][2]);
            printf("-----------------------------------\n");
            printf("podaj wiersz (1-3): ");
            scanf("%i", &wiersz);
            srednia = (tab[wiersz - 1][0] + tab[wiersz - 1][1] + tab[wiersz - 1][2]) / 3;
            printf("-----------------------------------\n");
            printf("SREDNIA: %f\n", srednia);
            srednia = 0;
            wiersz = 0;
            printf("-----------------------------------\n");
            break;
        }
        case 3:
        {
            printf("-----------------------------------\n");
            printf("|%i||%i||%i|\n", tab[0][0], tab[0][1], tab[0][2]);
            printf("|%i||%i||%i|\n", tab[1][0], tab[1][1], tab[1][2]);
            printf("|%i||%i||%i|\n", tab[2][0], tab[2][1], tab[2][2]);
            printf("-----------------------------------\n");
            printf("podaj kolumne i wiersz (1-3)(1-3) i nowa wartosc: ");
            scanf("%i", &kolumna);
            scanf("%i", &wiersz);
            scanf("%i", &nowaWartosc);
            tab[kolumna - 1][wiersz - 1] = nowaWartosc;
            printf("-----------------------------------\n");
            printf("|%i||%i||%i|\n", tab[0][0], tab[0][1], tab[0][2]);
            printf("|%i||%i||%i|\n", tab[1][0], tab[1][1], tab[1][2]);
            printf("|%i||%i||%i|\n", tab[2][0], tab[2][1], tab[2][2]);
            printf("-----------------------------------\n");
            printf("KOMORKA ZMODYFIKOWANA POMYSLNIE\n");
            kolumna = 0;
            wiersz = 0;
            printf("-----------------------------------\n");
            break;
        }
        case 4:
            exit(0);
        default:
        {
            printf("-----------------------------------\n");
            printf("PODANO NIE WLASCIWA LICZBE!\n");
            printf("-----------------------------------\n");
        }
        }
    }
    return 0;
}
