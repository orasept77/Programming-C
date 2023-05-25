# Kolokwium 1

Laboratorium – dwa kolokwia praktyczne przy komputerze:

Efekt EK_04:

DST: Student potrafi poprawnie stworzyć program rozwiązujące proste problemy wykorzystując odpowiednie struktury danych oraz konstrukcje programistyczne dostępne w języku C.

DB: Student potrafi poprawnie stworzyć programy rozwiązujące średnio-zaawansowane problemy wykorzystując odpowiednie struktury danych oraz konstrukcje programistyczne dostępne w języku C.

BDB: Student potrafi poprawnie stworzyć programy rozwiązujące zaawansowane problemy wykorzystując odpowiednie struktury danych oraz konstrukcje programistyczne dostępne w języku C.

Efekt EK_05:

DST: Student potrafi poprawnie stworzyć program rozwiązujące proste problemy wykorzystując możliwości standardowych bibliotek dostępnych w języku C.

DB: Student potrafi poprawnie stworzyć programy rozwiązujące średnio-zaawansowane problemy wykorzystując możliwości standardowych bibliotek dostępnych w języku C.

BDB: Student potrafi poprawnie stworzyć programy rozwiązujące zaawansowane problemy wykorzystując możliwości standardowych bibliotek dostępnych w języku C.

# Kolokwium 1
## Zmienne
### Typy zmiennych
Należy znać typy zmiennych w języku C, orientacyjnie wiedzieć ile miejsca w pamięci zajmują oraz jakie minimalne i maksymalne wartości mogą przechowywać.

Jakie wartości może przechowywać zmienna jeśli użyjemy słówka `unsigned` a jakie `signed`?

Maksymalne wartości jakie może przechowywać zmienna są zdefiniowane w bibliotece [<limits.h>](https://learn.microsoft.com/en-us/cpp/c-language/cpp-integer-limits?view=msvc-170). <mark>Limity mogą się różnić w zależności od użytego kompilatora czy typu systemu.</mark>

Aby sprawdzić ile zajmuje zmienna lub dany typ można skorzystać z funkcji `sizeof()`. <mark>Wielkości mogą się różnić w zależności od użytego kompilatora czy typu systemu.</mark>

<details>
<summary></summary>

```c
#include <limits.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Ilosc bitow w bajcie: %i\n",CHAR_BIT);
    double a = 10.543;
    printf("Ilosc bajtow jaka zajmuje zmienna a = %d\n", sizeof(a));

    printf("Ilosc bajtow jakie zajmuje typ char = %d", sizeof(char));
    return 0;
}
```

```bash
Ilosc bitow w bajcie: 8
Ilosc bajtow jaka zajmuje zmienna a = 8
Ilosc bajtow jakie zajmuje typ char = 1
```

</details>

Co stanie się gdy przekroczymy zakres danej zmiennej? (do zmiennej signed char a = 127 dodamy 1)

### Deklaracja zmiennych

Deklaracja zmiennych statycznych, dynamicznych i konwencje nazewnictwa zmiennych.

Zakres zmiennej(lokalna, globalna).

Zmienne tablicowe.

## operatory



## instruckje warunkowe

- if
- switch

## pętle

Umieć użyć wszystkie rodzaje pętli.

np. Wypisać elementy tablicy 3 wymiarowej za pomocą pętli:
- for
- while
- do while.

## funkcje

Definiowanie funkcji zwracających wartość różnych typów i nie zwracajacych wartości, Funkcji nie przyjmujących argumentów oraz przyjmującej różne liczby i typy argumentów.

np. Utworzyć funkcje obliczającą miejsca zerowe funkcji kwadratowej o zadanych współczynnikach.

Potrafić utworzyć funkcje która modyfikuje wartości poza funkcją.

np. Sortuje tablicę w zmiennej globalnej.

## wskaźniki

Jak definiujemy wskaźnik i co przechowuje? `*wsk`

Jak odczytać wartość znajdującą się pod danym adresem w pamięci?

Jak odczytać adres w pamięci danej zmiennej?

np. Zamienić wartości zmiennej miejscami.

Jak przechowywana jest w pamięci tablica n wymiarowa? (wskaźnik na wskaźnik)

Jak działają funkcje:
- malloc()
- free()

## struktury

Jak zdefiniowac strukturę?

Jak modyfikować i odczytywać wartości struktury?

## biblioteki

<stdio.h>
Jak działa printf()
Jak działa scanf()

<math.h>

<limits.h>

<strings.h>

<stdlib.h>
