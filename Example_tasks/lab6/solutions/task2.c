#include <stdio.h>
#include <stdlib.h>

double calculatebmi(float wzrost, float waga){
    return waga/(wzrost*wzrost);
}

int main(int argc, char const *argv[])
{
    double wzrost, waga;
    printf("Podaj wzrost:");
    scanf("%i",&wzrost);

    printf("Podaj wage:");
    scanf("%i",&waga);

    double wynik = calculatebmi(wzrost, waga);
    printf("BMI = %lf", wynik);

    if (wynik < 16)
    {
        printf("Wygłodzenie");
    }
    return 0;
}
