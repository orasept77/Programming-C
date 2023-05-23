// 20. Kurs jezyka c - Wskazniki 3 [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=20]

#include <stdlib.h>
#include <stdio.h>

void zamien(char *tekst)
{
    int i = 0;
    for (i = 0; tekst[i] != 0; i++);
    printf("%d\n", i);
}

char tekst[] = "Kurs programowania";

int main()
{
    zamien(tekst);
    printf("%s\n", tekst);
    return 0;
}
