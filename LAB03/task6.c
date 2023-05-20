#include <stdio.h>
#include <stdlib.h>

int main()
{
    char litery[26] = "abcdefghijklmnopqrstuvwxyz";
    char *ptr_tab = litery;
    printf("Wartosc za pomoca wskaznika: (tab[5]): %c", *ptr_tab + 5);
    return 0;
}