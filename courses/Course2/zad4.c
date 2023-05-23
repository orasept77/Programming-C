//4, 5. Kurs języka C - Skrócone Operatory arytmetyczne [https://www.youtube.com/watch?v=pLe-HTaePqE&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=5]


#include <stdio.h>
#include <stdlib.h>

int a = 2, b = 2, c = 2, d = 2, e = 2;

int main()
{
    a = a + 2; // to, to samo co a+=2;
    b = b - 2; // to, to samo co b-=2;
    c = c * 2; // to, to samo co c*=2;
    d = d / 2; // to, to samo co d/=2;
    e = e % 2; // to, to samo co e%=2;
    /*jest tylko a++, a-- inkrementacja i dekrementacja. Jest też preinprementacje i postinkrementacje. Pre jest ++a, a postikrementacja a++*/

    printf("wynik dodawania: %d\n", a);
    printf("wynik odjemowanie: %d\n", b);
    printf("wynik mnozenie: %d\n", c);
    printf("wynik dzielenie: %d\n", d);
    printf("wynik reszty: %d\n", e);
    return 0;
}
