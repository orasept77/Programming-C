// 17. Kurs Programowania w C - wskaźniki [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=17]


#include <stdio.h>

void efekt_trucizny(int *h)
{
    *h -= 5;
}

int main()
{
    int k = 15;
    printf("Zmienna k wynosi %d\n", k);
    printf("Adres zmiennej k wynosi %p\n", &k);  //system szczenastkowy //* - to wartosc zmiennej, & - adres zmiennej 

    int *wsk = NULL; // * - deklaracja wskaźnika,
    wsk = &k;

    *wsk = 14;
    printf("Zmienna k wynosi %d\n", k);

    printf("Zmienna wsk wynosi %p\n", wsk);
    printf("Wartość zmiennej, której adres zawiera wsk wynosi %d\n", *wsk);
    printf("Adres zmiennej wsk to %p\n", &wsk);

    int hp = 100;
    efekt_trucizny(&hp);
    efekt_trucizny(&hp);
    printf("Wartość zmiennej hp wynosi: %d\n", hp);

    return 0;
}