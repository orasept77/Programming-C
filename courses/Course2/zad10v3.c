// 11. Kurs języka C - Instrukcje skoku [https://www.youtube.com/watch?v=pLe-HTaePqE&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=11]

#include <stdio.h>
#include <stdlib.h>

int i = 20;

int main()
{
    while (i--)
    {
        printf("%d\n", i); 
        if (i % 2 != 0) // idzie dalej jak jest parzysta inaczej 
        {
            continue; // wypisze same parzyste
        }
        printf("%d\n", i);
    }

    return 0;
}
