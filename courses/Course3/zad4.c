// 4. Kurs Programowania w C - Operatory arytmetyczne [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=4]

#include <stdio.h>

int main(){
    puts("Lekcja 4");

    char znak = 'A';
    printf("Kod ASCII znaku: %d\n", znak);
    printf("Litera: %c\n", 68);
    znak = znak + 1;
    printf("znak: %c\n", znak);

    signed int liczba_ze_znakiem = -15; //signed to zmienna ze znakiem! ! !
    printf("Nowy znak: %c\n", liczba_ze_znakiem+znak);

    const short int stala = 30; //short to jest dla malych wartosci pamieci long dla duzych pamieci
    //stala = 15;
    printf("Stala + 1 wynosi: %hd\n", (stala+1) ); //short int = %hd  //long int %ld

    unsigned int liczba_bez_znaku = 10;
    printf("Liczba bez znaku: %u\n", liczba_bez_znaku); //%u unsigned bez znaku
    liczba_bez_znaku -= 11;
    printf("Liczba bez znaku: %u\n", liczba_bez_znaku);
    liczba_bez_znaku++;
    printf("Liczba bez znaku: %u\n", liczba_bez_znaku);

    long int zmienna = 13;
    zmienna++;
    printf("1. %ld\n", zmienna);
    ++zmienna;
    printf("2. %ld\n", zmienna);
    zmienna += 2;
    printf("3. %ld\n", zmienna);
    zmienna = zmienna + 4;
    printf("4. %ld\n", zmienna);
    zmienna *= 2;
    printf("5. %ld\n", zmienna);
    zmienna /= 10;
    printf("6. %ld\n", zmienna);
    zmienna = 'A'+2;
    printf("7. %ld\n", zmienna);
    zmienna = 'A'%60; //modulo czyli  jest 'A'=65 to 65/60=1 i reszta 5 wiec 5

    printf("8. %ld\n", zmienna);

    int a = 10;
    printf("a = %d\n", a++);
    printf("a = %d\n", a);
    printf("a = %d\n", ++a);
    return 0;
}

/*
    a = (b + 1)      operator przypisania
    a + b      dodawanie
    -       odejmowanie
    *       mnożenie
    /       dzielenie
    %       reszta z dzielenia (dzielenie modulo)
    ++      operator inkrementacji (zwiększenia o 1)
    --      operator dekrementacji (zmniejszenia o 1)
    a = a + b       a += b
    a = a - b       a -= b
    a = a * b       a *= b
    a = a / b       a /= b
    a = a % b       a %= b
    a += 1          ++a
    a -= 1          --a
    a++
    a--
*/