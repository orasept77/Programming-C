// Kurs C od podstaw #17 - Struktury [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=18]

#include <stdio.h>

typedef char *String;

struct car
{
    String model;
    String VIN;
    unsigned int ilosc_miejsc;
    unsigned int masa;
    unsigned short rok_prod;
};

int main()
{
    struct car samochod1, samochod2, samochod3;
    samochod1.model = "skoda fabia II";
    samochod1.rok_prod = 2012;
    samochod1.ilosc_miejsc = 5;
    samochod1.masa = 980;

    samochod2.model = "Audi a4 b5";
    samochod2.rok_prod = 2005;
    samochod2.ilosc_miejsc = 3;
    samochod2.masa = 1200;

    printf("Model: %s\n Rok produkcji: %d\n Ilosc miejsc: %d\n Masa: %d\n\n", samochod1.model, samochod1.rok_prod, samochod1.ilosc_miejsc, samochod1.masa);
    printf("Model: %s\n Rok produkcji: %d\n Ilosc miejsc: %d\n Masa: %d\n\n", samochod2.model, samochod2.rok_prod, samochod2.ilosc_miejsc, samochod2.masa);

    return 0;
}
