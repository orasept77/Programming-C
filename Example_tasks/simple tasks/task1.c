// Napisz program wypisujący w konsoli twoje dane w następującym formacie:
// Jan Kowalski
// nr albumu: 102222

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[] = "Jan";
    char lastname[] = "Kowalski";
    int albumnumber = 1234567;
    printf("%s %s\n", name, lastname);
    printf("nr albumu %i", albumnumber);
    getchar();
    return 0;
}
