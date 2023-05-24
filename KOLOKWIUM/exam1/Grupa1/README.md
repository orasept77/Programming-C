## Zadanie 1 - kompilacja
Utwórz program nazwany dwiema pierwszymi literami imienia,  dwiema pierwszymi literami nazwiska oraz numerem albumu. np. dla Jan Kowalski z numerem albumu 1234567 - `jako1234567.c`

# Kolejne zadania podpisuj komentarzem.
```c
//Zadanie 1

rozwiazanie;

//Zadanie 2

rozwiazanie;

//Zadanie 3

rozwiazanie;

...
```

## Zadanie 2 - zmienne 1
Utwórz zmienne tak aby zajmowały jak **najmniej** miejsca w pamięci i przechowywały wskazane wartości:
- `var1` przechowującą wartość 10 000.
- `var2` przechowującą wartość 0.94334.
- `var3` przechowującą pierwszą literę twojego imienia.
- `var4` przechowującą twoje nazwisko.
- Utwórz globalną stałą `TAB_LEN` przechowującą wartość 20.
Napisać w komentarzu czym różni się stała od zmiennej.

## Zadanie 3 - instrukcje warunkowe 1
Utworzyć zmienną `task3_var` przechowującą liczbę całkowitą.
Przypisać do zmiennej wartość podaną przez używkotnika.
Przed podaniem wartości wypisz w konsoli napis "Podaj wartosc zmiennej task3_var:".
Jeśli wartość jest większa niż 30 wypisz napisz `opcja1` jeśli wartość w zmiennej `task3_var` jest mniejsza wypisz `opcja2`, jeśli wartość jest równa 30 wypisz `opcja3`.

## Zadanie 4 - instrukcje warunkowe 2
Utworzyć zmienną `task4_var` przechowującą liczbę całkowitą.
Przypisać do zmiennej wartość podaną przez używkotnika.
Przed podaniem wartości wypisz w konsoli napis "Podaj wartosc zmiennej task4_var:".
Za pomocą instrukcji warunkowej switch jeśli:
- podana wartość jest równa 10 zwiększ wartość zmiennej `task4_var` o 10%.
- podana wartość jest równa 20 zwiększ wartość zmiennej `task4_var` o 20%.
- podana wartość jest równa 30 zwiększ wartość zmiennej `task4_var` o 30%.
- w przeciwnym przypadku nie modyfikuj wartości zmiennej.
Wypisz końcową wartość w konsoli.

## Zadanie 5 - pętle 1
Utworzyć zmienną `tab` przechowującą liczby: [0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7].
Za pomocą pętli for wypisać zawartość tablicy w odwrotnej kolejności.

## Zadanie 6 - pętle 2
Utworzyć zmienną `task6_var` przechowującą liczbę całkowitą.
Przypisać do zmiennej wartość podaną przez używkotnika.
Przed podaniem wartości wypisz w konsoli napis "Podaj wartosc zmiennej task6_var:".

Używając pętli while wypisz kolejne potęgi liczby 2 aż do liczby przechowywanej w zmiennej `task6_var` włącznie. W konsoli powinny zostać wypisane w następującej postaci:

```terminal
Podaj wartosc zmiennej task6_var: 64
[1,2,4,8, 16, 32, 64]
```
## Zadanie 7 - funkcje 1

Napisz funkcję `power()` która przyjmuje dwa artumenty:
- a - liczba całkowita
- b - liczba całkowita
Funkcja powinna zwracać wartość 
$$
    a^b
$$
Przetestuj działanie funkcji na wartościach a=2 i b=4. Wypisz w konsoli wynik działania funkcji w następującej postaci:

```termin
a = 3
b = 2
3^2 = 9
```

## Zadanie 8 - funkcje 2

Utwórz funkcję `countk()` która przyjmuje tablicę znaków. Funkcja zwraca ilość wystąpień znaku `k` w tablicy.

Przetestuj działanie funkcji na następujących łańcuchach:
- "kkkk"
- " k k "
- " k asd kk"
Wypisz w konsoli wyniki testów w postaci:
```terminal
|kkkk| zawiera 4 litery k.
| k k | zawiera 2 litery k.
| k asd kk| zawiera 3 litery k.
```

## Zadanie 9 - wskaźniki

Utworzyć zmienną wskaźnikową `wsk1` przechowującą adres do zmiennej `var1` z zadania 1.
Wypisz adres jaki przechowuje zmienna `wsk1`.
Za pomocą zmiennej `wsk1` wypisz wartość pod adresem który przechowuje.
Następnie używając wskaźnika zmień zawartość zmiennej pod adresem przechowywanym przez zmienną `wsk1` na swój numer albumu i wypisz zawartość zmiennej `var1`.

## Zadanie 10

Utworzyć strukturę `funkcjakwadratowa` która będzie przechowywać współczynniki równania kwadratowego a,b,c ponadto miejsca zerowe funkcji jako x1 i x2 oraz informację czy dana funkcja posiada miejsca zerowe w postaci wartości true/false.

## Zadanie 11

Utworzyć tablicę `task11_var` przechowującą 100 struktur `funkcjakwadratowa`. Wypełnij tablicę strukturami z losowymi wartościami a,b,c w przedziale od 0 do 10.

## Zadanie 12

Napisz funkcję obliczającą miejsca zerowe funkcji kwadratowej i przypisująca te wartości do struktury dla której są obliczane. Wykorzystaj funkcję by obliczyć miejsca zerowe i uzupełnić wyniki w tablicy `task11_var`. Wypisz rezultat w konsoli.
