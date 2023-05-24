#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Napisz funkcję genPassword() która przyjmuje 3 parametry: ilośc liter w haśle, ilość cyfr w haśle, ilość znaków specjalnych w haśle.
// Funkcja wypisuje w konsoli losowo wygenerowane hasło zawierające określoną ilość znaków. np. 3 litery 2 cyfry 1 znak specjalny
// Pozycja liter, cyfr oraz znaków specjalnych jest losowa.

int random(int lower, int upper)
{
    return (lower + (rand() % (upper - lower + 1)));
}

void genPassword(int letters, int numbers, int special_characters)
{
    int
        count_letters = letters,
        count_numbers = numbers,
        count_special_characters = special_characters;

    while (count_letters > 0 || count_numbers > 0 || count_special_characters > 0)
    {
        /*
            random:
            0 - letters,
            1 - numbers
            2 - special_characters
        */

        switch (random(0, 2))
        {
        case 0:
        {
            if (count_letters > 0)
            {
                int min, max;

                if (random(0, 1) == 1)
                {             // duże litery
                    min = 65; // A
                    max = 90; // Z
                }
                else
                {              // małe litery
                    min = 97;  // a
                    max = 112; // z
                }
                printf("%c", (char)random(min, max));

                count_letters--;
            }

            break;
        }
        case 1:
        {
            if (count_numbers > 0)
            {
                printf("%c", (char)random(48, 57)); // 0 - 9
                count_numbers--;
            }

            break;
        }
        case 2:
        {
            if (count_special_characters > 0)
            {
                int min, max;

                switch (random(0, 3))
                {
                case 0:
                {
                    min = 33; // !
                    max = 47; // /
                    break;
                }
                case 1:
                {
                    min = 58; // :
                    max = 64; // @
                    break;
                }
                case 2:
                {
                    min = 91; // [
                    max = 96; // `
                    break;
                }
                case 3:
                {
                    min = 123; // {
                    max = 126; // ~
                    break;
                }
                }
                printf("%c", (char)random(min, max));

                count_special_characters--;
            }

            break;
        }
        }
    }

    printf("\n");
}

int main()
{
    // ustawienie punktu startowego dla pseudogeneratora liczb losowych.
    // time(NULL) zwraca czas aktualny uniksowy w sekundach - więc za każdym uruchomieniem programu, punkt startowy będzie inny.
    srand(time(NULL));

    /*
        W metodzie main() zaimplementuj menu:

        1. Generuj nowe haslo.
        2. Wyjście z programu.

        Program powinien działać do momentu wybrania opcji wyjście z programu.
        Po wybraniu opcji Generuj nowe haslo użytkownik pytany jest o ilość liter w haśle, ilość cyfr w haśle oraz ilosć znaków specjalnych.
        Po wprowadzeniu danych hasło jest wyświetlane w konsoli.
    */

    int option;

    while (1)
    {
        printf("\n1. Generuj nowe haslo.\n2. Wyjscie z programu.\nWybierz opcje: ");
        scanf("%d", &option);

        if (option == 1)
        {
            /*
                Ile liter: 2
                Ile cyfr: 0
                Ile znakow specjalnych: 2
            */

            int letters, numbers, special_characters;

            printf("Ile liter: ");
            scanf("%d", &letters);

            printf("Ile cyfr: ");
            scanf("%d", &numbers);

            printf("Ile znakow specjalnych: ");
            scanf("%d", &special_characters);

            if (letters <= 0 && numbers <= 0 && special_characters <= 0)
            {
                printf("Wszystkie podane wartosci sa nieprawidlowe! Nie mozesz wygenerowac hasla.\n");
            }
            else
            {
                genPassword(letters, numbers, special_characters);
            }
        }
        else if (option == 2)
        {
            printf("\nZakonczenie dzialania programu.\n");
            break;
        }
    }

    return 0;
}