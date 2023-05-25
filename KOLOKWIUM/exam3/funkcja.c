#include <stdio.h> //normalna macierz

float zwiekszL(int n)
{

    float tab[n], suma;
    int i;
    for (i = 0; i < n; i++)
        scanf("%f", &tab[i]);
    for (i = 0; i < n; i++)
    {
        tab[i] = tab[i] + 100;
        printf("liczba po dodaniu 100: %f\n", tab[i]);
    }

    suma = tab[0];
    for (i = 1; i < n; i++)
    {
        suma += tab[i];
    }
    printf("suma laczna tych liczb to: %f\n", suma);
    return 0;
}

float main()
{
    printf("\n");
    printf("wywolanie funkcji zwiekszL\n");
    zwiekszL(5);
    printf("\n");
    return 0;
}
