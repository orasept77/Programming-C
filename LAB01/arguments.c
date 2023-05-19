#include <stdio.h>
#include <stdlib.h>

/*To w zmiennej argc wyląduje 4 - zerowym parametrem jest nazwa programu, i do tego jeszcze trzy dodatkowe.
Tablica argv ma taki rozmiar jaką wartość ma argc. Zerowym elementem tej tablicy jest nazwa programu,
a kolejne elementy, od 1 zaczynając a na ostatnim kończąc to kolejne parametry wywołania programu.
*/
int main(int argc, char const *argv[])
{
    printf("argc = %d\n", argc);
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);
    printf("argv[1] = %s\n", argv[2]);
    return 0;
}
