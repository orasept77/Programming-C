#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("file.txt", "w");

    if (file == NULL)
    {
        printf("Blad w tworzeniu pliku!\n");
        exit(1);
    }

    fprintf(file, "1 Bike 432");
    fclose(file);

    return 0;
}