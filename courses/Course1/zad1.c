// Kurs C od podstaw #1 - Typy danych, zmienne i stałe [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=2]

#include <stdio.h>

int main()
{
    int x = 5, y = 7;
    const float pi = 3.14159;

    x = 9; // linia, po linii, więc x=9 a nie 5 jak wyżej :)

    printf("wartosc zmiennej x wynosi %d, a wartość y wynosi %d, zaś pi wynosi %.5f\n", x, y, pi);
    return 0;
}
