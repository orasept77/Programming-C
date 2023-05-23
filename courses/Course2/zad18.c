// 19. Kurs jezyka c - Wskazniki 2 [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=19]


#include <stdio.h>
#include <stdlib.h>

int tab[] = {1, 5, 9};

void modyfikuj(int *tab)
{
    *tab = 11;
    printf("%d\n", *tab); // adres 1 elemendu
    // printf("%d\n", &tab); // adres nowej zmiennej
}

int main()
{
    modyfikuj(tab);
    printf("%d\n", *tab);
    //printf("%d\n", tab[0]);
    return 0;
}
