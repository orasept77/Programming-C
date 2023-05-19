#include <stdio.h>

int main()
{
    int a;
    printf("Wprowadź liczbę a\n");
    scanf("%i", &a);
    int modulo = a % 2;
    if (modulo == 0)
    {
        printf("Liczba %i jest podzielna przez 2", a);
    }
    else
    {
        printf("Liczba %i nie jest podzielna przez 2", a);
    };
};