#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int coCiJest(float BMI);

struct patient
{
    char imie[20];
    char nazwisko[25];
    int wiek;
    long long int pesel;
    float wzrost;
    float waga;
};

struct patient showdata(struct patient patientT[])
{
    int i = 0;
    while (i < 5)
    {
        float BMI = patientT[i].waga / (patientT[i].wzrost * patientT[i].wzrost);
        printf("%s ", patientT[i].imie);
        printf("%s ", patientT[i].nazwisko);
        printf("%i lat ", patientT[i].wiek);
        printf("%0.0fcm ", patientT[i].wzrost * 100);
        printf("%0.1fkg - ", patientT[i].waga);
        coCiJest(BMI);
        i += 1;
    }
}

int main()
{
    struct patient patientT[50];
    struct patient patient0 = {"Damian", "Andrasik", 55, 67021443241, 1.76, 127.3};
    struct patient patient1 = {"Jasiu", "Enitko", 43, 79113143537, 1.68, 96.1};
    struct patient patient2 = {"Edyta", "Czania", 32, 90042845092, 1.55, 53.9};
    struct patient patient3 = {"Daniel", "Sulek", 17, 05271232436, 1.81, 69.0};
    struct patient patient4 = {"Kamil", "Pitor", 9, 13230433057, 1.31, 48.4};
    patientT[0] = patient0;
    patientT[1] = patient1;
    patientT[2] = patient2;
    patientT[3] = patient3;
    patientT[4] = patient4;
    showdata(patientT);
    return 0;
}

int coCiJest(float BMI)
{
    if ((BMI < 16))
    {
        printf("wyglodzenie");
    }
    if ((BMI >= 16) && (BMI < 16.99))
    {
        printf("wychudzenie");
    }
    if ((BMI >= 17) && (BMI < 18.49))
    {
        printf("niedowaga");
    }
    if ((BMI >= 18.5) && (BMI < 24.99))
    {
        printf("optimum");
    }
    if ((BMI >= 25) && (BMI < 29.99))
    {
        printf("nadwaga");
    }
    if ((BMI >= 30) && (BMI < 34.99))
    {
        printf("otylosc I stopnia");
    }
    if ((BMI >= 35) && (BMI < 39.99))
    {
        printf("otylosc II stopnia");
    }
    if ((BMI >= 40))
    {
        printf("otylosc III stopnia");
    }
    printf("\n");
    return 0;
}



