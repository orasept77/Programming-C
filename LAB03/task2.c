#include <stdio.h>
#include <stdlib.h>

int max_tab(int tab[10]);

int main()
{
    int tab[10] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 7};
    max_tab(tab);
    return 0;
}

int max_tab(int tab[10])
{
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] >= max) // ustawia sie rozwieksze od tab0 do 10. począwszy od 0 potem 5 4 3 2 1 az do 9
        {
            max = tab[i];
        }
    }
    printf("To jest najwieksza wartosc: %d\n", max);
   
}
