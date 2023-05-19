#include <stdio.h> 
#include <stdlib.h>

int main() // każdy program musi mieć punkt startu którym domyślnie jest funkcja main.
{
    int a = 12;
    const int B = 54;

    // dozwolona jest zmiana wartości a
    a = 43;

    // nie dozwolone jest przypisanie nowej wartości stałej
    // B = 66;
    printf("Wartosc zmiennej a: %d ", a);
    printf("Wartosc zmiennej b: %d ", B);
    return 0;
}