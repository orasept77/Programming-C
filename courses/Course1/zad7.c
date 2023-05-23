//Kurs C od podstaw #7 - Pętla while oraz do while [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=8]

#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d", &b);

    while (a < b)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}
