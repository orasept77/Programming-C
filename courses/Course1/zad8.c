//Kurs C od podstaw #8 - pętla for zadanie z tabliczką mnożenia [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=9]

#include <stdio.h>

int main()
{
    int a, b = 0;
    scanf("%d", &b);

    for( a=0; a < b; a++ ) //(wartość od ktorej zaczynamy; warunek do wykonania; polecenie)
    {

        printf("%d\n", a);
     
    }

    return 0;
}
