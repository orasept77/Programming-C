//Kurs C od podstaw #6 - Instrukcja warunkowa ze znakiem ?[https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=7]

#include <stdio.h>

int main()
{
    int a;

    printf("podaj wiek: ");
    scanf("%d", &a);

    (a >= 18) ? printf("mozesz juz kupic piwko") : printf("sorki jeszcze nie mozesz kupic piwka");

    return 0;
}
