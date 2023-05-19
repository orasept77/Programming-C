#include <stdio.h>
#include <stdlib.h>

int main() // każdy program musi mieć punkt startu którym domyślnie jest funkcja main.
{
    int liczbaCalkowita = 432871;            // typ przechowuje liczby całkowite w danym zakresie
    float liczbaZmiennoprzecinkowa = 3.14159;   // typ przechowuje liczby zmienno przecinkowe w danym zakresie
    char znak = 'a';                         // typ przechowuje litery, cyfry i znaki specjalne.
    double liczbaZmiennoprzechnkowa = 32.32; // yp przechowuje liczby zmienno przecinkowe z dokładnością większą niż float
    printf("Wartosc zmiennej liczbaCalkowita: %i\n", liczbaCalkowita);
    printf("Wartosc zmiennej liczbaZmiennoprzecinkowa: %.5f\n", liczbaZmiennoprzecinkowa);
    printf("Wartosc zmiennej znak: %c\n", znak);
    printf("Wartosc zmiennej liczbaZmiennoprzechnkowa: %.2lf\n", liczbaZmiennoprzechnkowa);
    return 0;
}
