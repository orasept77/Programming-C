#include <stdio.h>

void BMI (int, float);
int main(void)
{
  int waga;
  float wzrost;
       printf("podaj wage(w kilogramach): ");
       scanf("%d", &waga);
       printf("podaj wzrost(w metrach): ");
       scanf("%f", &wzrost);
       BMI(waga, wzrost);
}

void BMI (int waga, float wzrost){
    float temp = waga/ (wzrost * wzrost);
    printf("BMI = %f\n", temp);
    printf("\nWaga: ");
    //temp < 18.5 ? printf("Under ") : temp < 25 ? printf("Normal ") : temp < 30 ? printf("Over ") : temp < 40 ? printf("Obese ") : printf("Error");
    temp < 16 ? printf("Wyglodzenie ") : temp < 17 ? printf("Wychudzenie ") : temp < 19 ? printf("Niedowaga ") : temp < 25 ? printf("Optimum ") : temp < 30 ? printf("Nadwaga ") : temp < 35 ? printf("Otylosc Ist. ") : temp < 40 ? printf("Otylosc IIst. ") : temp > 40 ? printf("Otylosc IIIst. ") : printf("Blad");
} 