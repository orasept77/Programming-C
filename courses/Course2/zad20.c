// 21. Kurs jezyka c - Unie [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=21]

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Struktora
    {
        short liczbaShort;
        int liczbaInt;
    } mojaStruktora; // 8

    mojaStruktora.liczbaShort = 12345;
    mojaStruktora.liczbaInt = 1234567;

    printf("Rozmiar Struktory: %d\n", sizeof(mojaStruktora)); // short(4) int(2)x2=4 4+4=8
    printf("short: %d\n", mojaStruktora.liczbaShort);
    printf("int: %d\n\n", mojaStruktora.liczbaInt);

    union Unia
    {
        short liczbaShort;
        int liczbaInt;
    } mojaUnia;

    mojaStruktora.liczbaShort = 12345;
    mojaStruktora.liczbaInt = 1234567; // chodzi o to że unia przypisuje sobie największą wartosć czyli tu int a short zabiera sobie 12345 z pamieci int

    printf("Rozmiar Unii: %d\n", sizeof(mojaUnia));
    printf("short: %d\n", mojaUnia.liczbaShort);
    printf("int: %d\n", mojaUnia.liczbaInt);

    return 0;
}