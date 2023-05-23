//Kurs C od podstaw #5 - Instrukcja warunkowa if else [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=6]

#include <stdio.h>

int main()
{
    int a;

    printf("podaj wiek: ");
    scanf("%d\n", &a);

    if (a >= 18)
    {
        printf("mozesz juz kupic piwko");
    }

    else
    {
        printf("sorki jeszcze nie mozesz kupic piwka");
    }

    return 0;
}
