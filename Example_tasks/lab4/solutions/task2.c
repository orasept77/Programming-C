#include <stdio.h>
#include <stdlib.h>

int max_tab(int tab[])
{
    printf("Tablica tab ma wielkosc - %i elementy\n", sizeof(tab));
    int max_elem = tab[0];
    for (size_t i = 0; i < sizeof(tab); i++)
    {
        if (max_elem < tab[i])
        {
            max_elem = tab[i];
        }
    }
    return max_elem;
}

int main(int argc, char const *argv[])
{
    int x[] = {1, 23, 4, 6};
    int b = max_tab(x);
    printf("Maksymalny element w tablicy x to %i", b);
    return 0;
}
