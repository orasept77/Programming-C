// 16. Kurs jezyka c - Instrukcja Switch [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=16]

#include <stdio.h>
#include <stdlib.h>

int liczba;

int main()
{
    liczba = 2; //(1-2)
    switch (liczba)
    {
    case 1: // switch dziala tak ze jesli zrealizuje sie 1 przypadek to potem wszystko  pod nim też, jesli sie zrealizuje tylko ostatni to tylko ten ostatni
        printf("liczba =1\n");
        // break; //jesli dodamy break; to wtedy zatrzymuje sie na pierwszym.
    case 2:
        printf("liczba =2\n");
    }

    return 0;
}
