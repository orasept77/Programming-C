#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[200];
    printf("Podaj wartosc zmiennej: ");
    scanf("%s", string);

    size_t len_fun = strlen(string); //size_t = long long int
    printf("Ilosc znakow w zmiennej: %Li \n", len_fun);
}