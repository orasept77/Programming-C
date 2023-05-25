#include <stdio.h>

//Zadanie 3

float kwadratL(int n)
{
    float tab[n];
    int i;
    float suma = 0.0;

    for(i = 0; i < n; i++) //Wczytywanie liczb
    {
        printf("Podaj %d liczbe: ", i + 1);
        scanf("%f", &tab[i]);
    }

    for(i = 0; i < n; i++) //Podnoszenie do kwadratu, wypisywanie, sumowanie
    {
        tab[i] = tab[i] * tab[i];
        suma += tab[i];
        printf("%f  ", tab[i]);
    }

    printf("\n");

    return suma;
}
//***************************************************************************************
int main()
{
    printf("%f\n", kwadratL(4)); 

    return 0;
}
