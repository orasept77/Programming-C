//Kurs C od podstaw #15 - Znaki i ciągi znaków (S T R I N G) [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=16]


#include <stdio.h>

char *znak="kurs programowania";

int main()
{
    printf("%c", *znak);
    znak++;
    printf("%c", *znak);
    return 0;
}