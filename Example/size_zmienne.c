//3. Kurs języka C - Podstawowe typy danych [https://www.youtube.com/watch?v=zMp_KeU5wKA&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=3]

#include <stdio.h>
#include <stdlib.h>

char znak = 'A'; //[-128, +127] lub [0, 255] char tłum. znak
short krotki;    //[-32,768, +32,767] lub [0, 65,535]
int calkowite;   //[-2,147,483,648 to 2,147,483,647] lub [0, 4,294,967,295]
long dlugi;      //[-2,147,483,648, +2,147,483,647] lub [0, 4,294,967,295]

// Jeśli użyje unsigned jest zakres po lub --> poniewaz wtedy nie jest brany - pod uwagę, natomiast jeśli bez to jest przeciał od - do +
//  char można zapisać albo w '' i tam wpisujemy Literę od A-Z albo zapisać normalnie np. 60 i wtedy znak to A.

float zmiennoPrzecinkowe; // ZmiennoPrzecinkowe
double podwojnejPrecyzji;

// %hhi

int main()
{
    printf("char(wartosc)=%d, znak=%c, rozmiar = %d\n", znak, znak, sizeof(znak));
    printf("short=%d, rozmiar=%d\n", krotki, sizeof(krotki));
    printf("int=%d, rozmiar=%d\n", calkowite, sizeof(calkowite));
    printf("long=%d, rozmiar=%d\n", dlugi, sizeof(dlugi));
    printf("float=%f, rozmiar=%d\n", zmiennoPrzecinkowe * zmiennoPrzecinkowe, sizeof(dlugi));
    return 0;
}
