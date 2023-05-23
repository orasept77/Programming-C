#include <stdio.h>

// program taki sam jak 16v2 tylko na wskaźnikach.

int dodaj(int *a, int *b);

int main(void)
{
    int var1 = 5, var2 = 7;

    int sumax = dodaj(&var1, &var2);

    printf("%d %d", sumax, var1);

    return 0;
}

int dodaj(int *a, int *b)
{
    int suma = *a + *b;
    *a += 8;
    return suma;
}

// wynik bedzie 12 13 jeśli są wskaźniki, jesliby ich nie bylo bylby 12 5 ponieważ jest to a+=8; jest lokalne a nie globalne