# Kolokwium 2

Wybrać jedno z poniższych zadań. Pliki z rozwiązaniami nazwać w zależności od wybranego zadania, odpowiednio:
- `dst_gr1.c` i `dst.exe` dla oceny 3
- `db_gr1.c` i `db.exe`. dla oceny 4
- `bdb_gr1.c` i `bdb.exe` dla oceny 5
Po zakończeniu kolokwium pliki spakować w archiwum .zip i przesłać za pomocą formularza.

## Bardzo dobry

### EK_3

Utwórz strukturę `Array` przechowującą macierz. Struktura ma zawierać również dane niezbędne do odczytania wartości komórek macierzy.

Utwórz funkcję `initArray()` która zwraca instancję struktury `Array`. Funkcja tworzy nową instancję struktury `Array` i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

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
Array[0][0] = 2.0
Array[0][1] = 4.42
Array[1][0] = 5.2
Array[1][1] = 6.0
Array[2][0] = 9
Array[2][1] = 22.4
```

Utwórz funkcję `multiplyArrays()` przyjmującą dwie instancje struktury `Array`. W ciele funkcji zaimplementuj mnożenie macierzy. Uwzględnij nastepujące aspekty:
- kiedy możliwe jest mnożenie macierzy przez macierz, jeśli mnożenie nie jest możliwe wypisz odpowiedni komunikat i zwróć puste pola struktury `Array`(dwie macierze można pomnożyć tylko wtedy gdy liczba kolumn macierzy A jest równa liczbie wierszy macierzy B).
- funkcja ma zwrócić nową macierz będącą wynikiem mnożenia tych macierzy

W metodzie `main()`:
- Utwórz dwie zmienne o typie `Array`.
- Za pomocą funkcji `initArray()` utwórz macierze o wymiarach 3x2 oraz 2x3
- Wywołaj funkcję `fillArray()` by wypełnić macierze wartościami
- Wywołaj funkcję `multiplyArrays()` przekazując utworzone macierze
- Wypisz wynik mnożenia macierzy w konsoli (funkcja `printArray()`)

### EK_4

Zapisz wynik mnożenia macierzy w pliku tekstowym `wyniki.txt` w postaci:

```csv
1.00    2.00    3.00
4.00    5.00	2.00

X

1.00	4.00
3.00	1.00
5.00	4.00

=

22.00	18.00
29.00	29.00
```


## Dobry

### EK_3

Napisz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy(macierz powinna być alokowana dynamicznie z użyciem odpowiednich funkcji) liczb zmiennoprzecinkowych w następującej postaci:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
```

Napisz funkcję `free_matrix()` która zwalnia dynamicznie przydzieloną pamięć do przechowania macierzy.

Napisz funkcję `duplicate_row()` która duplikuje wybrany wiersz `n` razy i podmienia macierz na nową - większą np. duplikując 2 wiersz 2 razy otrzymamy:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |


| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
```

### EK_4

Napisz funkcję main która przetestuje działanie zaimplementowanych wcześniej funkcji i wyniki zapisze w pliku `wyniki.txt`


## Dostateczny

### EK_3

Napisz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy liczb zmiennoprzecinkowych w następującej postaci:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
```

Funkcja może wypisać zawartość macierzy o dowolnym rozmiarze.

```terminal
| 0.00 | 0.10 | 0.50 |
| 1.00 | 1.10 | 1.40 |
| 2.00 | 2.10 | 2.10 |
| 2.00 | 2.10 | 2.10 |
| 1.00 | 1.10 | 1.40 |
```

Napisz funkcję `matrix_mean()` która zwraca średnią wartość elementów macierzy.

### EK_4

Przetestuj działanie funkcji na nastepujących macierzach:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 | 
| 2.00 | 2.10 | 
```

```terminal
| 1.00 | 3.00 |
| 2.00 | 5.00 |
```

```terminal
| 1.00 | 3.00 | 10.00 |
| 2.00 | 5.00 | 9.00  |
```

Napisz program który zapisze w pliku `wyniki.txt` macierz a pod nią średnią wartość z tej macierzy dla wszystkich testowanych przypadków np.:
```csv
| 1.00 | 3.00 | 10.00 |
| 2.00 | 5.00 | 9.00  |

mean: 10.00
```


<details>

# Efekt EK_03:
## DST: 
Student potrafi poprawnie przygotować programy rzędu 20-50  linii kodu, rozwiązujące proste problemy,  wykorzystując  do  tego  celu  niektóre  z  poznanych  struktur  danych  oraz  konstrukcje programistyczne dostępne w języku C.

## DB:  
Student  potrafi  poprawnie  przygotować  programy  rzędu  20-50  linii  kodu,  rozwiązujące średniozaawansowane problemy, wykorzystując do tego celu wszystkie poznane struktury danych oraz konstrukcje programistyczne dostępne w języku C.

## BDB:
Student  potrafi  poprawnie  przygotować  programy  rzędu  50-100  linii  kodu  rozwiązujące średniozaawansowane problemy, wykorzystując do tego celu wszystkie poznane struktury danych oraz konstrukcje programistyczne dostępne w języku C.Efekt 

# EK_04:
## DST: 
Student potrafi poprawnie przygotować programy rzędu 20-50 linii kodu, rozwiązujące proste problemy  wykorzystując  do  tego  celumożliwości  standardowych  bibliotek  programistycznych dostępnych w języku C używanych na zajęciach.

## DB:  
Student  potrafi  poprawnie  przygotować  programy  rzędu  20-50  linii  kodu,  rozwiązujące średniozaawansowane  problemy,  wykorzystując  możliwości  standardowychbibliotek programistycznych dostępnych w języku C używanych na zajęciach.
## BDB:  
Student  potrafi  poprawnie  przygotować  programy  rzędu  50-100  linii  kodu,  rozwiązujące średniozaawansowane  problemy,  wykorzystując  możliwości  standardowych  bibliotek programistycznych dostępnych w języku C, także takich, które student poznawał samodzielnie

</details>
