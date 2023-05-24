# Kolokwium 2

Wybrać jedno z poniższych zadań. Pliki z rozwiązaniami nazwać w zależności od wybranego zadania, odpowiednio:
- `dst_gr4.c` i `dst.exe` dla oceny 3
- `db_gr4.c` i `db.exe`. dla oceny 4
- `bdb_gr4.c` i `bdb.exe` dla oceny 5
Po zakończeniu kolokwium pliki spakować w archiwum .zip i przesłać za pomocą formularza.

## Bardzo dobry

### EK_3

Utwórz strukturę `Array` przechowującą macierz. Struktura ma zawierać również dane niezbędne do odczytania wartości komórek macierzy.

Utwórz funkcję `initArray()` która zwraca instancję struktury `Array`. Funkcja tworzy nową instancję struktury `Array` i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

Utwórz funkcję `printArray()` która przyjmuje jako parametr strukturę `Array`.
Funkcja wypisuje zawartość macierzy w następującym formacie(kolumny podpisane kolejnymi lierami alfabetu):

```terminal
A           B           C
2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
```

Utwórz funkcję `multiplyArrays()` przyjmującą dwie instancje struktury `Array`. W ciele funkcji zaimplementuj mnożenie macierzy według wzoru:

$$
C_{ij} = \Sigma_{k=1}^{p} A_{ik} B_{kj}
$$

Uwzględnij nastepujące aspekty:
- kiedy możliwe jest mnożenie macierzy przez macierz, jeśli mnożenie nie jest możliwe wypisz odpowiedni komunikat i zwróć macierz jednoelementową z wartością 0 `Array`(dwie macierze można pomnożyć tylko wtedy gdy liczba kolumn macierzy A jest równa liczbie wierszy macierzy B).
- funkcja ma zwrócić nową macierz będącą wynikiem mnożenia tych macierzy


W metodzie `main()`:
- Za pomocą funkcji `initArray()` utwórz macierze o wymiarach 2x3, 3x2, 3x3 oraz 4x2 z mastępującymi wartościami

```
A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
```
```
A       B
1.00	4.00
3.00	1.00
5.00	4.00
```

```
A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
4.00    5.00	2.00
```

```
A       B       C       D
1.00    2.00    3.00    4.00
4.00    5.00	2.00    1.00
```


- Wywołaj funkcję `multiplyArrays()` mnożąc:
    - macierz 2x3 z 3x2
    - macierz 2x3 z 3x3
    - macierz 2x3 z 2x4
- Wypisz wynik mnożenia macierzy w konsoli (funkcja `printArray()`)

### EK_4

Zmodyfikuj program aby wynik mnożenia macierzy został zapisany w pliku tekstowym `wyniki.txt` w postaci:

```csv
A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
X
A       B
1.00	4.00
3.00	1.00
5.00	4.00
=
A       B
22.00	18.00
29.00	29.00

A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
X
A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
4.00    5.00	2.00
=
A       B       C
21.00   27.00   13.00
32.00   43.00   26.00

A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
X
A       B       C       D
1.00    2.00    3.00    4.00
4.00    5.00	2.00    1.00
=
0.00
```


<br>
<br>
<br>
<br>
<br>
<br>

## Dobry

### EK_3
Utwórz funkcję `allocate_2d_array()` która dynamicznie alokuje miejsce w pamięci na macierz liczb zmiennoprzecinkowych o rozmiarze przekazanym jako parametry funkcji. Funkcja zwraca wskaźnik na tę macierz.

Utwórz funkcję `free_2d_array()` która zwalnia miejsce w pamięci macierzy przekazanej jako parametr funkcji.
W komentarzu opisz za co odpowiadają parametry funkcji jeśli ich nazwa tego nie sugeruje.

Utwórz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy w następującej postaci:

```terminal
| 0.0000      | 0.1000    |
| 1.0000      | 41.1005   |
| 2.0000      | 42.1000   |
```

Utwórz  funkcję `sort_by_column()` która sortuje tablicę przekazaną jako argument funkcji rosnąco według wartości w wybranej kolumnie. Kolumnę według której ma odbyć się sortowanie powinna być przekazana jako arguemtn funkcji. np.

```
przed sotrowaniem
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |
| 3.0000    | 1.0000    | 3.0000    |

po sortowaniu z wyborem 2 kolumny
| 3.0000    | 1.0000    | 3.0000    |
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |

po sortowaniu z wyborem 1 kolumny
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 3.0000    | 1.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |
```

Utwórz macierz za pomocą funkcji allocate_2d_array() a następnie wypełnij ją następującymi wartościami
```
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |
| 3.0000    | 1.0000    | 3.0000    |
```
Przetestuj działanie funkcji sort_by_column() na następujących przypadkach:
- Posortuj tablicę według pierwszej kolumny a następnie wypisz rezultat.
- Posortuj tablicę według ostatniej kolumny a następnie wypisz rezultat.

### EK_4

Zmodyfikuj program tak aby wynik działania programu został zapisany do pliku wyniki.txt

<br>
<br>
<br>
<br>
<br>
<br>

## Dostateczny

### EK_3
Utwórz funkcję `palindrom()` która sprawdzi czy znaki przechowywane w tablicy są palindromem(słowo lub ciąg znaków, który czytany od przodu i od tyłu brzmi tak samo) a następnie zwróci wartość true jeśli są lub false jeśli nie są. Funkcja przyjmuje tablicę dowolnej długości i przy sprawdznaiu pomija puste znaki. np.

```
[a, b, a, 0\] true
[a, b, b, a] true
[a, b, c, a] false
```

Utwórz funkcję `print_palindrom()` która przyjmuje jako argument tablicę o dowolnym rozmiarze oraz wypisuje zawartość tablicy w poniższym formacie wraz z informacją czy znaki w tablicy tworzą palindrom czy nie.
```
[a, b, b, a] true
```

Napisz program który odczytuje od użytkownika znaki z klawiatury a następnie sprawdza czy wpisane przez niego znaki są palindromem. Program powinien odczytywać znaki do momentu wybrania opcji zakończenia wpisywania znaków.
```
Czy chcesz wpisac znak? 1
podaj znak: a
Czy chcesz wpisac znak? 1
podaj znak: b
Czy chcesz wpisac znak? 1
podaj znak: a
Czy chcesz wpisac znak? 0
[a, b, a] true
```

### EK_4
Zmodyfikuj program tak aby wynik działania programu został zapisany do pliku wyniki.txt. Za każdym razem gdy uruchamiamy program historia jest dołączana na końcu pliku
```
Czy chcesz wpisac znak? 1
podaj znak: a
Czy chcesz wpisac znak? 1
podaj znak: b
Czy chcesz wpisac znak? 1
podaj znak: a
Czy chcesz wpisac znak? 0
[a, b, a] true
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
