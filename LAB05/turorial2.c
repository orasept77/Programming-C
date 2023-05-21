// 17. Kurs jezyka c - Skrukury danych [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=17]

#include <stdio.h>
#include <stdlib.h>

struct Czlowiek
{
    char *imie; // wskaźniki ! ! !
    int wiek;
    float wzrost;
} bartek;

int main()
{
    struct Czlowiek dawid;
    dawid.imie = "Dawid";
    dawid.wiek = 20;
    dawid.wzrost = 1.72;
    printf("%s wiek: %d, wzrost: %.2f\n", dawid.imie, dawid.wiek, dawid.wzrost);

    bartek.imie = "Bartosz";
    bartek.wiek = 25;
    bartek.wzrost = 1.85;
    printf("%s wiek: %d, wzrost: %.2f", bartek.imie, bartek.wiek, bartek.wzrost);

    return 0;
}