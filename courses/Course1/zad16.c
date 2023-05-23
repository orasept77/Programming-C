//Kurs C od podstaw #16 - Funkcje [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=17]


#include <stdio.h>

void powiadomienie();

int main(void)
{
    powiadomienie();

    return 0;
}

void powiadomienie() //()=(void) - to funkcja która nie przyjmuje argumentu.
{
    printf("Witaj funkcjo. ;)\n");
}