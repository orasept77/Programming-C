#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char tab[] = "ABC";
    printf("wielkosc tablicy %i\n", sizeof(tab));
    printf("%i ", tab[3]=='\0');


    return 0;
}
