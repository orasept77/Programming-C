#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char filename[] = "file.txt";
    char product[50];
    float price;
    
    // otwieramy plik
    fptr = fopen(filename, "a");
    
    // wypisujemy zawartość pliku
    if (fptr == NULL)
    {
        printf("Nie udało się otworzyć pliku %s\n", filename);
        return 1;
    }
    else
    {
        printf("Zawartość pliku %s:\n", filename);
        char c = fgetc(fptr);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(fptr);
        }

        // pobierz od użytkownika nazwę przedmiotu i jego cenę
        printf("\nPodaj nazwę przedmiotu: ");
        scanf("%s\n", product);
        printf("Podaj cenę przedmiotu: ");
        scanf("%f", &price);

        // znajdź aktualny numer przedmiotu
        fseek(fptr, 0, SEEK_END);

        // dopisz nowe dane do pliku
        fprintf(fptr, " %s  %.2f\n", product, price);
        fclose(fptr);

        // wypisz aktualną zawartość pliku
        printf("\nAktualna zawartość pliku %s:\n", filename);
        fptr = fopen(filename, "r");
        c = fgetc(fptr);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(fptr);
        }
        fclose(fptr);
    }

    return 0;
}