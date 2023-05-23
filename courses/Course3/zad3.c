// 3. Kurs Programowania w C - wiecej o zmiennych [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=3]

#include <stdio.h>

int main()
{
    /*
        Przykład 1
    */
    char przedmiot[15] = "Koszulka Adidas"; // można też char* przedmiot = "koszulka adidas" i nie trzeba wtedy liczyc
    char rozmiar = 'L';
    float cena = 99.99;
    double wartosc = 3.53432;
    printf("%s\n\n", przedmiot);
    printf("Rozmiar: %c\n", rozmiar);
    printf("Cena: %g zl.\n", cena); //%g tylko daje 3 po przecinku
    printf("Cena: %f zl.\n", cena);
    printf("Cena: %.3f zl.\n", cena);
    printf("Wartosc: %g zl.\n", wartosc);
    printf("Wartosc: %f zl.\n", wartosc);
    printf("Wartosc: %.2f zl.\n", wartosc);
    printf("Cena w promocji -90%: %g\n", cena - (cena * 0.9));
    printf("Cena w promocji -90%: %g\n", cena * 0.1);
    printf("\n");

    // Przykład 2
    int liczba = 255.5;
    printf("Liczba w systemie dziesietnym: %d\n", liczba);
    printf("Ta sama liczba w systemie osemkowym: %o\n", liczba); // ósemkowym
    printf("Ta sama liczba w systemie szesnastkowym: %x\n", liczba);
    printf("Ta sama liczba jako zmiennoprzecinkowa: %f\n", liczba);
    printf("Ta sama liczba jako zmiennoprzecinkowa: %f\n", liczba * 1.0);  // wypisalo popranie razy liczbe 1.0
    printf("Ta sama liczba jako zmiennoprzecinkowa: %f\n", (float)liczba); // tu to samo tylko przez rzutowanie (float)
    printf("\n");

    // Przykład 3
    printf("%d %s %c %g", 20, "Kisioj", 'K', 499.99); //%g daje 2 miejsca po przecinku
    return 0;
}