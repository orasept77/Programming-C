/*Dostateczny
EK_3
Utwórz funkcję palindrom() która sprawdzi czy znaki przechowywane w tablicy są palindromem(słowo lub ciąg znaków, który czytany od przodu i od tyłu brzmi tak samo) a następnie zwróci wartość true jeśli są lub false jeśli nie są. Funkcja przyjmuje tablicę dowolnej długości i przy sprawdznaiu pomija puste znaki. np.

[a, b, a, 0\] true
[a, b, b, a] true
[a, b, c, a] false
Utwórz funkcję print_palindrom() która przyjmuje jako argument tablicę o dowolnym rozmiarze oraz wypisuje zawartość tablicy w poniższym formacie wraz z informacją czy znaki w tablicy tworzą palindrom czy nie.

[a, b, b, a] true
Napisz program który odczytuje od użytkownika znaki z klawiatury a następnie sprawdza czy wpisane przez niego znaki są palindromem. Program powinien odczytywać znaki do momentu wybrania opcji zakończenia wpisywania znaków.

Czy chcesz wpisac znak? 1
podaj znak: a
Czy chcesz wpisac znak? 1
podaj znak: b
Czy chcesz wpisac znak? 1
podaj znak: a
Czy chcesz wpisac znak? 0
[a, b, a] true
EK_4
Zmodyfikuj program tak aby wynik działania programu został zapisany do pliku wyniki.txt. Za każdym razem gdy uruchamiamy program historia jest dołączana na końcu pliku

Czy chcesz wpisac znak? 1
podaj znak: a
Czy chcesz wpisac znak? 1
podaj znak: b
Czy chcesz wpisac znak? 1
podaj znak: a
Czy chcesz wpisac znak? 0
[a, b, a] true*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindrom(char *tab, int len) {
    for (int i = 0; i < len / 2; i++) {
        if (tab[i] != tab[len - i - 1]) {
            return false;
        }
    }
    return true;
}

void print_palindrom(char *tab, int len) {
    FILE *fp = fopen("dst_gr6.txt", "a+");
    if(fp == NULL)
    {
        printf("blad\n");
    }
    fprintf(fp, "[");
    printf("[");
    for (int i = 0; i < len; i++) 
    {
        if(i == len - 1)
        {
            fprintf(fp, "%c", tab[i]);
            printf("%c", tab[i]);
        }    
        else
        {
        fprintf(fp, "%c, ", tab[i]);            
        printf("%c, ", tab[i]);
        }
    }
    fprintf(fp, "]");
    printf("]");
    fprintf(fp, "%s\n", palindrom(tab, len) ? "true" : "false");
    printf("%s\n", palindrom(tab, len) ? "true" : "false");
}

int main() {
    FILE *fp = fopen("dst_gr6.txt", "a+");
    if(fp == NULL)
    {
        printf("blad\n");
    }
    char tab[100];
    int len = 0;
    int choice;
    do {
        printf("Czy chcesz wpisac znak? ");
        fprintf(fp, "Czy chcesz wpisac znak? ");
        scanf("%d", &choice);
        fprintf(fp, "%d\n", choice);
        if (choice) {
            char c;
            printf("podaj znak: ");
            fprintf(fp, "podaj znak: ");
            scanf(" %c", &c);
            fprintf(fp, " %c\n", c);
            tab[len++] = c;
        }
    } while (choice);
    print_palindrom(tab, len);
    return 0;
}