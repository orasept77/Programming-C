#include <stdio.h>
#include <conio.h>

int main()
{
    int a, n, s, max;
    printf("Wprowadz ilosc liczb z ktorych chcesz wyszukac najwieksza\n");
    scanf("%i", &n);
    printf("Wprowadz liczbe calkowita\n");
    scanf("%i", &a);
    max = a;
    s = 0;
    for (int i = 2; i <= n; i++)
    {
    printf("Wprowadz liczbe calkowita\n");
    scanf("%i",&a);
    if (a == max)
        s = s + 1;
    if (a > max)
    {
        max = a;
        s = 1;
    }
    }
    printf("Najwieksza liczba to %i \n", max);
    printf("Najwieksza liczba wystapila %i razy\n", s);
}