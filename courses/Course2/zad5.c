//6. Kurs języka C - instrukcja warunkowa if [https://www.youtube.com/watch?v=pLe-HTaePqE&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=6]

#include <stdio.h>
#include <stdlib.h>

#define prawda 1 // za prawda stoi 1 a za falsz 0
#define falsz 0 // kazda wartosc równa od 0 to prawda 0!=prawda | 0== falsz
typedef int bool;

int main()
{
    bool warunek = falsz;

    if (warunek)
    {
        printf("warunek prawdziwy\n");
    }
    if (warunek == 0) // else też może być (w przeciwnym wypadku)
    {
        printf("warunek falszywy\n");
    }

    return 0;
}
