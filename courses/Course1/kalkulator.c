#include <stdio.h>
#include <stdlib.h>

int main()
{
    double var1, var2, wynik;
    char znak;
    printf("\nKalkulator");
    printf("\nPodaj liczba: ");
    scanf("%lf", &var1);
    printf("\nPodaj znak[+-*/]: ");
    scanf("%s", &znak);
    printf("Podaj 2 liczbe: \n");
    scanf("%lf", &var2);

    switch(znak)
    {
        case'+':wynik= var1 + var2; break;
        case'-':wynik= var1 - var2; break;
        case'*':wynik= var1 * var2; break;
        case'/':wynik= var1 / var2; break;

    }
    printf("wynik dzialania: %lf\n", wynik);
    
    return 0;
}
