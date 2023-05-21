#include <stdio.h>
 
int main()
{
    FILE *fptr;
 
    char filename[100]= "file.txt", c;
 
    // Otwórz plik
    fptr = fopen(filename, "a");
    if (fptr == NULL)
    {
        printf("Blad otwarcia pliku");
        // Zwróć 0, jeśli nie udało się otworzyć pliku
        return 0;
    }
 
    // Dopisz do pliku
    fprintf(fptr, "\n2 Monitor 200");
    fclose(fptr);
 
    return 0;
}