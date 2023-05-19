#include <stdio.h>

int main() //kalkulator program
{
    double var1, var2, wynik;
    char znak;

    printf("kalkulator");
    printf("\nPodaj liczbe: ");
    scanf("%lf", &var1);
    printf("\nPodaj znak [+-*/]: ");
    scanf("%s", &znak);
    printf("podaj liczbe: ");
    scanf("%lf", &var2);
    
    switch(znak)
    {
        case '+': wynik = var1 + var2; break;
        case '-': wynik = var1 - var2; break;
        case '*': wynik = var1 * var2; break;
        case '/': wynik = var1 / var2; break;
    }
    printf("wynik: %lf", wynik);

    return 0;


}