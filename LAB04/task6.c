#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* cpystr(char str[])
{
    char* kopia2 = str;
    return kopia2;
}

int main()
{
    printf("Kopiowanie dla biblioteki standardowej:\n");
    char oryginal[50] = "Przykladowy tekst task6";
    char kopia[50];
    strcpy(kopia, oryginal);
    printf("Oryginal = |%s| \nKopia = |%s|\n", oryginal, kopia);

    printf("\nKopiowanie bez biblioteki standardowej:\n");
    char* kopia2;
    kopia2 = cpystr(oryginal);
    printf("%s", kopia2);

    return 0;
}