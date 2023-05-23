//Kurs C od podstaw #14 - Wskaźniki [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=15]


#include <stdio.h>

int a = 8768, b = 6587, c=456985;

int *wsk1 = &a;
int *wsk2 = &b;

int main()
{
    printf("%d\n", *wsk1);
    wsk1++;
    printf("%d\n", *wsk1);
    wsk1++;
    printf("%d\n", *wsk1);

    return 0;
}