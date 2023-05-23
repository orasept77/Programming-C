// 22. Kurs jezyka c - Operacje na plikach [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=22]

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tekst[] = "hello world";

    FILE *plik;
    plik = fopen("test.txt", "w"); // w=zapisz f=file
    fprintf(plik, "%s", tekst);    // zapirs pliku
    fclose(plik);                  // zamkniecie pliku

    return 0;
}
