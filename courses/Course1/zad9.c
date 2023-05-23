//Kurs C od podstaw #9 - Instrukcja continue / break [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=10]

#include <stdio.h>

//(wartość od ktorej zaczynamy; warunek do wykonania; polecenie)

int main()
{
    int liczba = 0;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            liczba = i * j;
            if ((liczba % 2) == 0)
            {
                printf("-\t");
                break;
            }
            printf("%d\t", liczba);
        }
        printf("\n");
    }

    return 0;
}
