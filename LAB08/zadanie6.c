
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Tworzymy tablicę
    int *tablica;
    int rozmiar = 10;

    // Alokujemy pamięć dla tablicy 
    tablica = (int*) malloc(rozmiar * sizeof(int));

    // Inicjalizacja tablicy
    for (int i = 0; i < rozmiar; i++)
        tablica[i] = i + 1;

    // Wypisujemy zawartość tablicy
    printf("Zawartość tablicy:\n");
    for (int i = 0; i < rozmiar; i++)
        printf("tablica[%d] = %d\n", i, tablica[i]);

    // Zwalniamy pamięć
    free(tablica);

    return 0;
}