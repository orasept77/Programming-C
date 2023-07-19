# Kolokwium 2

Laboratorium – dwa kolokwia praktyczne przy komputerze:

Efekt EK_04:

DST: Student potrafi poprawnie stworzyć program rozwiązujące proste problemy wykorzystując odpowiednie struktury danych oraz konstrukcje programistyczne dostępne w języku C.

DB: Student potrafi poprawnie stworzyć programy rozwiązujące średnio-zaawansowane problemy wykorzystując odpowiednie struktury danych oraz konstrukcje programistyczne dostępne w języku C.

BDB: Student potrafi poprawnie stworzyć programy rozwiązujące zaawansowane problemy wykorzystując odpowiednie struktury danych oraz konstrukcje programistyczne dostępne w języku C.

Efekt EK_05:

DST: Student potrafi poprawnie stworzyć program rozwiązujące proste problemy wykorzystując możliwości standardowych bibliotek dostępnych w języku C.

DB: Student potrafi poprawnie stworzyć programy rozwiązujące średnio-zaawansowane problemy wykorzystując możliwości standardowych bibliotek dostępnych w języku C.

BDB: Student potrafi poprawnie stworzyć programy rozwiązujące zaawansowane problemy wykorzystując możliwości standardowych bibliotek dostępnych w języku C.

# PPWJC

- EK_01 Zna podstawowe pojęcia związane z programowaniem 
komputerów. 
    - zmienna
        - typy zmiennych
        - zmienne lokalne i globalne
    - wskaźnik
    - referancja
    - kompilator
    - IDE
    - instrukcje warunkowe
    - biblioteka
    - algorytm
    - konwencje nazewnictwa
- EK_02 Zna podstawowe struktury danych oraz wybrane konstrukcje 
programistyczne dostępne w języku C.
    - tablice
    - struktury
    - unie
    - if else, switch
    - for, while, do while
    - funckje
- EK_03 Potrafi wykorzystać odpowiednie struktury danych oraz 
konstrukcje programistyczne dostępne w języku C przy 
tworzeniu programów rozwiązujących zadane problemy.
- EK_04 Potrafi tworzyć programy z wykorzystaniem standardowych 
bibliotek programistycznych dostępnych w języku C.

Ponadto jest oceniana:
- Czytelność kodu
- Stosowanie się do konwencji nazewnictwa
- Znajomość mocnych i słabych stron zaimplementowanego rozwiązania (skalowalność, kosztowność obliczeniowa i pamięciowa)



# Zdania

Należy potrafić odczytywać dane z plików tekstowych oraz zapisywać dane do plików tekstowych.

## [DOSTATECZNY](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam2/Grupa4/dst_gr4.c)

### Mnożenie macierzy przez liczbę
Napisz funkcję `matrix_multiplication()`. Która przyjmuje następujące parametry:
- wskaźnik na tablicę liczb zmiennoprzecinowych
- liczbę kolumn
- liczbę wierszy
- liczbę przez jaką zostanie pomnożona macierz
Funkcja wykonuje mnożenie macierzy przez wartość i nie zwraca wartości a aktualizuje wartości w tablicy przekazanej jako pierwszy argument. 

Napisz funkcję `print_matrix()`, która przyjmuje następujace parametry:
- wskaźnik na tablicę.
- liczbę kolumn
- liczbę wierszy
Funkcja wypisuje tablicę w następującej postaci:

```Terminal
0.0000 0.1000
1.0000 1.1000
2.0000 2.1000
```

W funkcji `main()` zainicjalizuj nastepujące tablice i przetestuj działanie fukcji `matrix_multiplication()`.

```terminal
0.0000 0.1000       0.0000 0.2000 
1.0000 1.1000 X 2 = 2.0000 2.2000
2.0000 2.1000       4.0000 4.2000
```

```terminal
1.0000 2.0000 3.0000       3.0000 6.0000 9.0000
3.0000 2.0000 1.0000 X 3 = 9.0000 6.0000 3.0000
```


### Obliczanie odległości Euklidesa dla dwóch wektorów.

Utwórz funkcję `euclidDistance()` która przyjmuje dwie tablice o długości 3 jako parametry funkcji. Funkcja oblicza odległość Euklidesa pomiędzy punktami określonymi przez wartości tablic według wzoru:

$$
d(p,q)=\sqrt{\sum_{i=1}^{n}\left(q_{i}-p_{i}\right)^2} 
$$

A następnie zwraca obliczoną wartość.

Utwórz zmienną przechowującą następujące wartości X, Y i Z:

| X | Y | Z |
|---|---|---|
| 1 | 1 | 1 |
| 2 | 1 | 1 |
| 3 | 3 | 3 |
| 1 | 2 | 3 |

W funkcji main oblicz i wypisz obległości pomiędzy wszystkimi wektorami tj. pomiędzy 1 i 1, pomiędzy 1 i 2, pomiędzy 1 i 3 .... poiędzy 4 i 4.


### Duplikowanie wybranego elementu n razy

Utwórz funkcję `duplicateRow()` która przyjmuje 4 parametry:
- wskaźnik do tablicy jednowymiarowej zawierającej liczby zmiennoprzecinkowe
- rozmiar tablicy
- index elementu który ma być zduplikowany
- ilość powrórzeń duplikowanego elementu
Jeśli powtórzenie elementów przekroczy rozmiar tablicy wypisz w konsoli napis "Warning: Elements exceded size od array!".
Przetestuj działanie funkcji.

### Sprawdzanie czy łańcuchy znaków są takie same

Utwórz funkcję `compare()` która przyjmuje dwie tablice o takiej samej długości zawierające znaki oraz liczbę znaków. Funkcja zwraca 0 jeśli słowa są takie same lub ilość liter którymi się różnią.

## [DOBRY](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam2/Grupa4/db_gr4.c)




## [BARDZO DOBRY](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam2/Grupa4/bdb_gr4.c)

### Mnożenie macierzy

Utwórz strukturę `Array` przechowującą:
- liczbę kolumn macierzy
- liczbę wierszy macierzy
- wskaźnik na wskaźniki przechowujące liczby **zmiennoprzecinkowe**

Utwórz funkcję `initArray()` która zwraca instancję struktury `Array` i przyjmuje następujące parametry:
- liczba wierszy macierzy
- liczba kolumn macierzy
Funkcja tworzy nową instancję struktury `Array` do której przypisuje liczbę wierszy i kolumn.
Następnie rezerwuje w pamięci miejsce na przechowanie dwuwymiarowej tablicy i przypisuje wskaźnik do tego miejsca w odpowiednie pole struktury `Array`.
Kompletna instancja jest zwracana przez funkcję.

Utwórz funkcję `printArray()` która przyjmuje jako parametr strukturę `Array`.
Funkcja wypisuje zawartość tablicy z przekazanej struktury w następującym formacie:

```terminal
2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
```

Utwórz funckję `fillArray()` która przyjmuje instancję klasy `Array` i prosi użytkownika o wypełnienie zawartości tablicy.
Przykładowa sesja:
```terminal
Array[0][0] = 1
Array[0][1] = 1
Array[1][0] = 1
Array[1][1] = 1
Array[2][0] = 11
Array[2][1] = 1
```

Utwórz funkcję `multiplyArrays()` przyjmującą dwie instancje struktury `Array`. W ciele funkcji zaimplementuj mnożenie macierzy. Uwzględnij nastepujące aspekty:
- kiedy możliwe jest mnożenie macierzy przez macierz
- funkcja ma zwrócić nową macierz będącą wynikiem mnożenia tych macierzy

W metodzie `main()`:
- Utwórz dwie zmienne o typie `Array`.
- Za pomocą funkcji `initArray()` utwórz macierze o wymiarach 3x2 oraz 2x3
- Wywołaj funkcję `fillArray()` by wypełnić macierze wartościami
- Wywołaj funkcję `multiplyArrays()` przekazując utworzone macierze
- Wypisz wynik mnożenia macierzy w konsoli (funkcja `printArray()`)

## Porównywanie tablic.

## Sortowanie danych w tablicy.

## https://blog.etrapez.pl/rozwiazywanie-ukladow-rownan-metoda-macierzy-odwrotnej/



```c
#include <stdio.h>
#include <stdlib.h>
typedef struct tablica{
    int row;
    int col;
    float **tab;
} tablica;
void matrix_multiplication(float **tab, unsigned int col, int row, float x)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           tab[i][j] *= x; // tab[i] = tab[i] * x
        }
    }
}
void print_matrix(tablica x)
{
    for (int i = 0; i < x.row; i++)
    {
        for (int j = 0; j < x.col; j++)
        {
            printf("%f\t", x.tab[i][j]);
        }
        printf("\n");
    }
}
tablica createMatrix(int row, int col){
    tablica x;
    x.col = col;
    x.row = row;
    float **tab3;
    tab3 = calloc(4, sizeof(float *));
    for (int i = 0; i < 4; i++)
    {
        tab3[i] = calloc(2, sizeof(float));
    }
    x.tab = tab3;
}
int main(int argc, char const *argv[])
{
    tablica asd;
    
    int row = 4;
    int col = 2;
    float tab[4][2] = { {1, 2}, {2, 3}, {3, 4}, {4, 5} };
    float tab2[4][2] = {1, 2, 2, 3, 3, 4, 4, 5};
    // matrix_multiplication(tab, 2, 4, 4);
    float **tab3;
    tab3 = calloc(4, sizeof(float *));
    for (int i = 0; i < 4; i++)
    {
        tab3[i] = calloc(2, sizeof(float));
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("podaj wartosc tab[%d][%d]", i, j);
            float val;
            scanf("%f", &val);
            tab3[i][j] = val;
        }
    }
    print_matrix(tab3, 4, 2);
    return 0;
}
```





```c
#include <stdio.h>
#include <stdlib.h>
typedef struct tablica{
    int row;
    int col;
    float **tab;
} tablica;
void matrix_multiplication(tablica tab, float x)
{
    for (int i = 0; i < tab.row; i++)
    {
        for (int j = 0; j < tab.col; j++)
        {
           tab.tab[i][j] *= x; // tab[i] = tab[i] * x
        }
    }
}
void print_matrix(tablica x)
{
    for (int i = 0; i < x.row; i++)
    {
        for (int j = 0; j < x.col; j++)
        {
            printf("%f\t", x.tab[i][j]);
        }
        printf("\n");
    }
}
tablica createMatrix(int row, int col){
    tablica x;
    x.col = col;
    x.row = row;
    float **tab3;
    tab3 = calloc(4, sizeof(float *));
    for (int i = 0; i < 4; i++)
    {
        tab3[i] = calloc(2, sizeof(float));
    }
    x.tab = tab3;
    return x;
}
int main(int argc, char const *argv[])
{
    tablica asd = createMatrix(4,2);
    for (int i = 0; i < asd.row; i++)
    {
        for (int j = 0; j < asd.col; j++)
        {
            printf("podaj wartosc tab[%d][%d]", i, j);
            float val;
            scanf("%f", &val);
            asd.tab[i][j] = val;
        }
    }
    print_matrix(asd);
    return 0;
}
```
