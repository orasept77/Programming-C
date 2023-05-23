// Kurs C od podstaw #3 - Operacje matematyczne na zmiennych[https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=4]

#include <stdio.h>

int main()
{
    float pi = 3.14159;
    float wynik = 0.0;

    wynik = (int)(2 * pi); // rzutowanie zmiennych przez (int)

    printf("wartosc wyniku: %f\n", wynik);
    return 0;
}