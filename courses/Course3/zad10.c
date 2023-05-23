// 10. Kurs Programowania w C - Interakcja z programem [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=10]

#include <stdio.h>

int main()
{
    int x = printf("Siema heniu!\n");
    printf("Ilość znaków wypisanych na ekran: %d\n", x);

    printf("%d", putchar('A')); // A = 65 ascii

    puts("Podaj cztery liczby całkowite oddzielone spacjami!"); // puts automatycznie dodaje wolną linie czyli \n
    int i1 = 0, i2 = 0, i3 = 0, i4 = 0;

    int abc = scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    printf("Liczba argumentów poprawnie wpisanych: %d\n", abc);

    printf("Podałeś następujące liczby: %d %d %d %d\n", i1, i2, i3, i4);

    // char c;
    // while(scanf("%c", &c) && c!='\n'){} // czyszczenie buffora

    // char c;
    while (getc(stdin) != '\n')
    {
    }

    puts("Jak masz na imię?");
    char imie[10];
    scanf("%9s", imie);
    printf("Twoje imie to: %s\n", imie);

    int wiek;
    printf("Ile masz lat? ");
    scanf("%d", &wiek);
    printf("Twój wiek wynosi %d\n", wiek);

    return 0;
}