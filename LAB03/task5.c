#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float mean(float tab[], int size)
{
    float srednia, suma = 0;
    int licz = 0;
    while (licz < size)
    {
        suma += tab[licz];
        licz += 1;
    }
    srednia = suma / size;
    return srednia; //zrozumiale
}

float odchyl(float tab[], int size, float srednia_arg)
{
    float odchyl, rozKwad, suma = 0;
    int licz = 0;
    while (licz < size)
    {
        rozKwad = pow(tab[licz] - srednia_arg, 2);
        suma += rozKwad;
        licz += 1;
    }
    odchyl = sqrt(suma / size);
    return odchyl;
}

int main()
{
    int size;
    printf("Podaj, jak duzo chcesz miec elementow w tablicy: ");
    scanf("%i", &size);

    float tab[size];
    for (int i = 0; i < size; i++)
    {
        printf("Podaj %i element tablicy: ", i + 1);
        scanf("%f", &tab[i]);
    }

    float srednia_arg = mean(tab, size); 
    printf("Odchylenie standardowe wynosi: %f", odchyl(tab, size, srednia_arg));
    return 0;
}