#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct patients
{
    char name[20];
    char surname[20];
    int age;
};


int main(int argc, char const *argv[])
{
    char imiona[5][20] = {"Jan", "Karol", "Zbigniew", "Leszek", "Adam"};
    char nazwiska[5][20] = {"Kowalski", "Nowak", "Rak", "Mickiewicz", "Wokulski"};
    // deklarując zmienną tablicową nie wiemy jakie wartości przechowuje aktualnie tablica
    struct patients tab[50];
    printf("imie zaraz po zadeklarowaniu tablicy - |%s|\n", tab[0].name);

    // Zatem dobrze jest wyczyścić dane zaraz po zadeklarowaniu by móc sprawdzić czy pole w tablicy jest puste czy nie.
    for (size_t i = 0; i < (sizeof(tab)/sizeof(struct patients)); i++) // sizeof() zwraca ilość bajtów jaką zajmuje zmienna. Jeśli podzielimy tą wielkość przez rozmiar typu jaki przechowuje tablica otrzymamy rozmiar tablicy.
    {
        // funkcja mem set ustawi wartości w tablicy znaków na '\0'
        memset(tab[i].name, 0, sizeof(tab[i].name));
        memset(tab[i].surname, 0, sizeof(tab[i].surname));
        // aby wyzerować wiek wystarczy ustawić wartość na 0
        tab[i].age = 0;
    }
    
    // wstawiamy 5 losowych pacjentów do tablicy
    for (size_t i = 0; i < 5; i++)
    {
        struct patients temppatient;
        char surname[20];
        char name[20];

        // losuje imie z tablicy
        int x = (rand()%5);
        // kopiuje wylosowane imie do zmiennej pomocniczej
        strcpy(name,imiona[x]);
        // prypisuje do struktury
        strcpy(temppatient.name,name);
        // printf("wylosowane imie : %s\n", name);

        // losuje nazwisko z tablicy nazwiska
        x = (rand()%5);
        // kopiuje wylosowane imie do zmiennej pomocniczej
        strcpy(surname, nazwiska[x]);
        // przypisuje do struktury
        strcpy(temppatient.surname,surname);
        // printf("wylosowano nazwisko: %s\n", surname);

        // losuje wiek. Dodaje 10 aby pacjent miał minimum 10 lat ponieważ funkcja rand zwraca wartości od 0 do INT_MAX
        int wiek = (rand()%90 + 10);
        temppatient.age = wiek;
        // przypisuje strukture do pola tablicy
        tab[i] = temppatient;
    }

    for (size_t i = 0; i < (sizeof(tab)/sizeof(struct patients)); i++)
    {
        // jeśli w tablicy pole name jest puste pomiń je
        if(*tab[i].name == '\0'){
            continue;
        }
        printf("%s \t %s \t %i \n", tab[i].name, tab[i].surname, tab[i].age);
    }
    

    
    return 0;
}
