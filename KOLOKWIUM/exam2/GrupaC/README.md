# Kolokwium 2

Wybrać jedno z poniższych zadań. Pliki z rozwiązaniami nazwać w zależności od wybranego zadania, odpowiednio:
- `zad1.c` i `zad1.exe` dla oceny 5
- `zad2.c` i `zad2.exe`. dla oceny 4
- `zad3.c` i `zad3.exe` dla oceny 3
Po zakończeniu kolokwium pliki spakować w archiwum .zip i przesłać za pomocą formularza.

## Bardzo dobry

### EK_3

Utwórz strukturę `Array` przechowującą macierz o dowolnym rozmiarze. Struktura powinna zawierać dane niezbędne do iteracji po komórkach macierzy.

Utwórz funkcję `initArray()` która zwraca instancję struktury `Array`. Funkcja tworzy nową instancję struktury `Array` i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji. Miejsce w pamięci na przechowywanie macierzy jest alokowane dynamicznie.

Utwórz funkcję `detArray()` przyjmującą instancje struktury `Array`. Funkcja powinna zwracać liczbę obliczoną w następujący sposób:

Przekształcenie macierzy do uzyskania postaci górnej trójkątnej według wzoru:
$$
A_{jk} = A_{jk} - \frac{A_{ji}}{A_{ii}} * A_{ik}
$$
- jeśli w podanym wzorze A[i,i] == 0 (dzielenie przez 0) wypisz stosowny komunikat i przerwij obliczenia zwracając macierz wypełnioną jedną wartością 0.

Poszczególne indeksy zmieniają się według sekwencji:
1. i = 1,...,n-1
2. j = i+1,...,n
3. k = i+1,...,n

Po przekształceniu możliwe jest obliczenie wartości mnożąc elementy na przekątnej. Poniżej liczbą 1 zaznaczono elementy z których trzeba policzyć iloczyn w przypadku macierzy 4x4.

```terminal
[1 0 0 0]
[0 1 0 0]
[0 0 1 0]
[0 0 0 1]
```

Funkcja powinna zwracać odpowiednie komunikaty jeśli macierz jest inna niż kwadratowa.


Utwórz funkcję `printArray()` która przyjmuje jako parametr strukturę `Array`.
Funkcja wypisuje zawartość tablicy z przekazanej struktury w następującym formacie(kolumny podpisane kolejnymi literami alfabetu):

```terminal
A           B           C
2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
```

W metodzie `main()`:
- Za pomocą funkcji `initArray()` utwórz zmienne przechowujące macierze o wymiarach 3x3, 3x3 i 2x4
- Wypełnij macierze następującymi danymi:
```
A           B           C
1.00        2.00        3.00
4.00        5.00        5.00
1.00        2.00        4.00
```

```
A           B           C
1.00        2.00        3.00
1.00        2.00        2.00
1.00        2.00        3.00
```

```
A           B           C         D
1.00        2.00        3.00      5.00
4.00        5.00        5.00      1.00
```
Sprawdź działanie funkcji detArray() na powyższych przykładach.

### EK_4

Zmodyfikuj program w ten sposób aby wyniki działania programu wyświetlone w konsoli zostały również zapisane w pliku wyniki.txt.

```
A           B           C
1.00        2.00        3.00
4.00        5.00        5.00
1.00        2.00        4.00
det = -3.00

A           B           C
1.00        2.00        3.00
1.00        2.00        2.00
1.00        2.00        3.00
det = 0.00

A           B           C         D
1.00        2.00        3.00      5.00
4.00        5.00        5.00      1.00
Obliczenie wyznacznika jest mozliwe dla macierzy kwadratowej
det = 0.00

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
