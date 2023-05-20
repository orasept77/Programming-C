#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min_tab(int tab[])
{
    int min = tab[0];
    int licz = 1;
    while (licz < 10)
    {
        if (min > tab[licz])
        {
            min = tab[licz];
        }
        licz += 1;
    }
    return min;
}

int max_tab(int tab[])
{
    int max = tab[0];
    int licz = 1;
    while (licz < 10)
    {
        if (max < tab[licz])
        {
            max = tab[licz];
        }
        licz += 1;
    }
    return max;
}

float median(int tab[])
{
    float mediana;
    float wart1 = tab[4];
    float wart2 = tab[5];
    mediana = (wart1 + wart2) / 2;
    return mediana;
}

float mean(int tab[])
{
    float srednia, suma = 0;
    int licz = 0;
    while (licz < 10)
    {
        suma += tab[licz];
        licz += 1;
    }
    srednia = suma / 10;
    return srednia;
}

int stats(int tab[], char komenda[])
{
    char str1[] = "min";
    char str2[] = "max";
    char str3[] = "median";
    char str4[] = "mean";
   
    if (strcmp(str1, komenda) == 0)
    {
        printf("Minimalna wartosc w tablicy to: %i\n", min_tab(tab));
    }
    else if (strcmp(str2, komenda) == 0)
    {
        printf("Maksymalna wartosc w tablicy to: %i\n", max_tab(tab));
    }
    else if (strcmp(str3, komenda) == 0)
    {
        printf("Mediana tablicy to: %f\n", median(tab));
    }
    else if (strcmp(str4, komenda) == 0)
    {
        printf("Srednia wartosc z tablicy to: %f\n", mean(tab));
    }
    else
    {
        printf("Wprowadzono niepoprawna komende\n");
    }
}

int main()
{
    int tab[10];
    for (int z = 1; z <= 10; z++)
    {
        printf("Podaj %i liczbe calkowita: ", z);
        scanf("%i", &tab[z - 1]);
    }
    char komenda[10];
        printf("Podaj, jaka komende wykonac (min, max, median, mean): ");
        scanf("%s", &komenda);
    stats(tab, komenda);
    return 0;
}