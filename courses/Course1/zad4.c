//Kurs C od podstaw #4 - Operatory logiczne i bitowe [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=5]

#include <stdio.h>

/*
a=5  0000 0000 0000 0101
b=11 0000 0000 0000 1011

a&b  0000 0000 0000 0001 (1)
a|b  0000 0000 0000 1111 (15)
a^b  0000 0000 0000 1110 (14)

--------------------------------
a=25 0000 0000 0001 1001
b=37 0000 0000 0010 0101

a&b  0000 0000 0000 0001 (1)
a|b  0000 0000 0011 1101 (61)
a^b  0000 0000 0011 1100 (60)
*/

int main()
{
    unsigned short int a = 0, b = 0, wynik = 0;

    a = 5;
    b = 11;

    wynik = a & b; // jak damy w nawias i dodamy shift ` czyli ~ przed wtedy bedzie odwrotność tam gdzie zera 1 i na odwrot gdzie 0 1.
    printf("%u\n", wynik);
    return 0;
}