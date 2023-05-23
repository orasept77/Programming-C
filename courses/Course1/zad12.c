//Kurs C od podstaw #12 - Preinkremantacja i postinkrementacja [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=13]

#include <stdio.h>

int liczba1=7;

int main()
{
    int liczba2=++liczba1;
    printf("%d\n%d", liczba1, liczba2);
    return 0;
}