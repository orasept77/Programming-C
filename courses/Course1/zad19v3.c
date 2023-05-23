#include <stdio.h>

#define PI 3.141592654

// program obliczający pole okręgu jeśli dwie kule są złączone obok siebie.

int main()
{
    double r = 0.0, d = 0.0, wynik = 0.0;

    printf("Podaj wartosc r, a nastepnie wartosc d: ");
    scanf("%lf %lf", &r, &d);

    wynik = PI * ((r * r) - (0.25 * d * d));
    printf("%.2lf", wynik);
    return 0;
}
