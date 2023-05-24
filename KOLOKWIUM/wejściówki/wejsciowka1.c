#include <stdlib.h>
#include <stdio.h>
/*Napisz program który pyta użytkownika o imię, następnie o numer albumu,
po czym wypisuje "Witaj [podane imię]!" oraz Imię i nazwisko autora pliku.
Przykładowe działanie programu:
Podaj imię: Jan
Podaj numer albumu: 1234567
Witaj Jan!
Jan Kolwaski

Pliki należy przesłać do tego zadania.*/

typedef char *string;
string name = "Dawid";

int main()
{
    char podajImie;
    int albumNumber;
    printf("podaj imie: ");
    scanf("%s", &podajImie);
    printf("podaj number albumu: ");
    scanf("%d", &albumNumber);
    printf("Witaj %s!\n", name);
    printf("Dawid Olko");
    return 0;
}