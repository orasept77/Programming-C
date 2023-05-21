#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char filename[] = "file.txt";
    int characters = 0;
    int lines = 0;
    int size = 0;

    file = fopen(filename, "r");
    
    if (file == NULL)
    {
        perror("blad przy otwieraniu");
        return(-1);
    }

    //w pliku ilosc liter cyft znakow i rozmiar 
    while (!feof(file))
    {
        fgetc(file);
        characters++;
        size++;
        if (fgetc(file) == '\n')
            lines++;
    }
    fclose(file);

    printf("Znaki: %d\n", characters);
    printf("Linie: %d\n", lines);
    printf("Rozmiar: %d Bajtów\n", size);
}