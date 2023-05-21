#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tekst[] = "hello world";

    FILE *plik;
    if ((plik = fopen("test.txt", "r")) == NULL) // r=odczyt
    {
        printf("cos poszlo nie tak");
        exit(1);
    }; // w=zapisz f=file
    int liczba;
    fscanf(plik, "%d", &liczba);
    printf("%d", liczba);
    fclose(plik); // zamkniecie pliku

    return 0;
}
