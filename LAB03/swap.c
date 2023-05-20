#include <stdio.h>
#include <stdlib.h>

int swap(float *a , float *b);

int main()
{
    float liczba1, liczba2;
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%f", &liczba2);

    float *wskaznik1 = &liczba1, *wskaznik2 = &liczba2;
    swap(wskaznik1, wskaznik2);
    return 0;
}
 
int swap(float *a , float *b)
{
    float pomoc = *a;
    *a = *b;
    *b = pomoc;
    printf("%f ", *a);
    printf("%f ", *b);
    return 0;
}

