//Kurs C od podstaw #13 - Tablice [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=14]


#include <stdio.h>


int pomiar[4] = {5, 8, 7, 2};


int main()
{

    for (int i = 0; i < 4; i++) printf("%d\n", pomiar[3-i]);

    return 0;
}