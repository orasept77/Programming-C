//Kurs C od podstaw #11 - Zakres widoczności zmiennych [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=12]

#include <stdio.h>

//zmienna globalna widoczna w całym programie
int globalna=0;

int main()
{
    //zmienna lokalna widoczna tylko w funkcji main
    int lokalna=0;

    //zmienna i wodczna wyłącznie w pętli
    for(int i=0; i < 20; i++)
    {
        printf("%d ", i);
        lokalna +=i;
    }

    printf("\n%d", lokalna);
    //printf("\n%d", i);
    return 0;
}