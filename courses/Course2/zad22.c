// 23. Kurs jezyka c - Rekurencja [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=23]

#include <stdio.h>
#include <stdlib.h>

long silnia(int x)
{
    long wynik = 1;
    while (x > 1) // dlatego 5,4,3,2>1 poniewaz jakbym pomnozyl przez 1 to dalej jest to samo wiec to zbędne.
    {
        wynik = x * wynik; // wynik*=x
        x--;
    }
}

long silniaRekurencja(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * silniaRekurencja(x - 1);
    }
}

int main()
{
    // silnia 5!=5*4*3*2*1
    const int LICZBA = 7;
    printf("Wynik: %d\n", silnia(LICZBA));
    printf("Wynik: %d\n", silniaRekurencja(LICZBA));
    return 0;
}
