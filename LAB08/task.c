#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj wielkosc tablicy:");
    scanf("%d", &n);

    void **tab = malloc(sizeof(void*) * n);
    for(int i = 0; i < n; i++)
    {
        int type;
        printf("Podaj typ elementu (0 - int, 1 - double, 2 - char):");
        scanf("%d", &type);
        if(type == 0)
        {
            int *x = malloc(sizeof(int));
            printf("Podaj wartosc int:");
            scanf("%d", x);
            tab[i] = x;
        }
        else if(type == 1)
        {
            double *x = malloc(sizeof(double));
            printf("Podaj wartosc double:");
            scanf("%lf", x);
            tab[i] = x;
        }
        else if(type == 2)
        {
            char *x = malloc(sizeof(char));
            printf("Podaj wartosc char:");
            scanf(" %c", x);
            tab[i] = x;
        }
    }

    //wypisywanie tablicy
    for(int i = 0; i < n; i++)
    {
        int type;
        printf("Podaj typ elementu (0 - int, 1 - double, 2 - char):");
        scanf("%d", &type);
        if(type == 0)
        {
            int *x = (int *) tab[i];
            printf("Element %d: %d\n", i, *x);
        }
        else if(type == 1)
        {
            double *x = (double *) tab[i];
            printf("Element %d: %lf\n", i, *x);
        }
        else if(type == 2)
        {
            char *x = (char *) tab[i];
            printf("Element %d: %c\n", i, *x);
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        free(tab[i]);
    }
    free(tab);

    return 0;
}