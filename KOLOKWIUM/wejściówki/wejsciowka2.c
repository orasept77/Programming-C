#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*Napisz program który przechowa w tablicy 5 liter podanych przez użytkownika.
Litery a, b, t powinny być zamienianie na wielkie litery.
Oczekiwane wyjście w konsoli:

Podaj tab[0] : a
Podaj tab[1] : t
Podaj tab[2] : c
Podaj tab[3] : y
Podaj tab[4] : T
Podany łańcuch znaków: ATcvT*/

int main()
{
    char znaki[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Podaj tab[%d]: ", i);
        scanf("%s", &znaki[i]);
        if (znaki[i] == 'a')
        {
            znaki[i] = 'A';
        }
        if (znaki[i] == 't')
        {
            znaki[i] = 'T';
        }
    }
    printf("Ciag znakow: ");
    for (int j = 0; j < 5; j++)
    {
        printf("%c", znaki[j]); // wypisuje co jedną litere od 0 do 4 wiec 5
    }
    return 0;
}
