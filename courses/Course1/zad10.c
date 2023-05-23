//Kurs C od podstaw #10 - Instrukcja switch case [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=11]

#include <stdio.h>

int main()
{
    int a = 0;

    scanf("%d", &a);
    switch(a)
    {
        case 0: printf("zero"); break;
        case 1: printf("jeden"); break;
        case 2: printf("dwa"); break;
        case 3: printf("trzy"); break;
        default: printf("inna wartosc");
    }

    return 0;
}
