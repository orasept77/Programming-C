# Kolokwium 2

Wybrać jedno z poniższych zadań. Pliki z rozwiązaniami nazwać w zależności od wybranego zadania, odpowiednio:
- `dst_gr2.c` i `dst.exe` dla oceny 3
- `db_gr2.c` i `db.exe`. dla oceny 4
- `bdb_gr2.c` i `bdb.exe` dla oceny 5
Po zakończeniu kolokwium pliki spakować w archiwum .zip i przesłać za pomocą formularza.

## Bardzo dobry

### EK_3

Utwórz strukturę `Array` przechowującą macierz. Struktura powinna zawierać dane niezbędne do iteracji po komórkach macierzy oraz wyznacznik macierzy.

Utwórz funkcję `detArray()` przyjmującą instancje struktury `Array`. W ciele funkcji zaimplementuj przekształcenie macierzy do uzyskania postaci górnej trójkątnej według wzoru:
$$
a_{jk} = a_{jk} - a_{ji}/a_{ii} * a_{ik}
$$
- jeśli w podanym wzorze a[i,i] == 0 (dzielenie przez 0) wypisz stosowny komunikat.

gdzie poszczególne indeksy zmieniają się według sekwencji:
- i = 1,...,n-1
- j = i+1,...,n
- k = i+1,...,n

Po przekształceniu możliwe jest obliczenie wyznacznika macierzy mnożąc elementy na przekątnej. Poniżej liczbą 1 zaznaczono elementy z których trzeba policzyć iloczyn.

```terminal
[1 0 0 0]
[0 1 0 0]
[0 0 1 0]
[0 0 0 1]
```

Funkcja powinna zwracać komunikaty jeśli macierz jest inna niż kwadratowa.


[więcej informacji](https://pracownik.kul.pl/files/10382/public/aan_w5_1819.pdf)

Utwórz funkcję `initArray()` która zwraca instancję struktury `Array`. Funkcja tworzy nową instancję struktury `Array` i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

Utwórz funkcję `printArray()` która przyjmuje jako parametr strukturę `Array`.
Funkcja wypisuje zawartość tablicy z przekazanej struktury w następującym formacie:

```terminal
2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
```

Utwórz funckję `fillArray()` która przyjmuje instancję klasy `Array` i prosi użytkownika o wypełnienie zawartości tablicy. Po wypełnieniu zawartości obliczany jest wyznacznik macierzy i uzupełniane odpowiednie pole struktury `Array`.

Przykładowa sesja:
```terminal
Array[0][0] = 2.0
Array[0][1] = 4.42
Array[1][0] = 5.2
Array[1][1] = 6.0
Array[2][0] = 9
Array[2][1] = 22.4
```



W metodzie `main()`:
- Utwórz dwie zmienne o typie `Array`.
- Za pomocą funkcji `initArray()` utwórz macierze o wymiarach 3x2 oraz 2x3
- Wywołaj funkcję `fillArray()` by wypełnić macierze wartościami. Po wypełnieniu wartości powinien zostać obliczony wyznacznik macierzy.

### EK_4

Zapisz wynik mnożenia macierzy w pliku tekstowym `wyniki.txt` w postaci:

```csv
1.00    2.00    3.00
4.00    5.00	2.00



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

Utwórz funkcję `euclidDistance()` która przyjmuje dwie tablice o dowolnej długości jako parametry funkcji. Funkcja oblicza odległość Euklidesową pomiędzy punktami określonymi przez wartości tablic według wzoru:

$$
d(p,q)=\sqrt{\sum_{i=1}^{n}\left(q_{i}-p_{i}\right)^2} 
$$

A następnie zwraca obliczoną wartość.

Utwórz zmienne przechowujące następujące macierze testowe:

```terminal
| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
```

```terminal
| 0.00 | 0.10 | 5.10 |
| 1.00 | 1.10 | 8.10 |
| 2.00 | 2.10 | 1.10 |
```

Napisz funkcję `calculate_distances()` która oblicza i wypisuje odległości pomiędzy wszystkimi wierszami macierzy przekazanej jako argument funkcji tj. pomiędzy 1 i 1 wierszem, pomiędzy 1 i 2 wierszem, pomiędzy 1 i 3 wierszem .... poiędzy 3 i 3 wierszem.

przykładowy rezultat:

```terminal
row 1 row 1 = 0.00
row 1 row 2 = 3.32
...
row 3 row 3 = 3.5.2
```

Wywołaj funkcję `calculate_distances()` dla każdej z testowych macierzy tak aby uzyskać wyniki.

### EK_4

Zmodyfikuj program tak aby obliczone wyniki zostały zapisane do pliku `wyniki.txt`.


## Dostateczny

### EK_3

Napisz funkcję `duplicate_element()` która w tablicy jednowymiarowej znaków powiela element pod wskazanym indexem(wartość przekazana jako parametr funkcji) n razy(wartość przekazana jako parametr funkcji). Jeśli ilość elementów przekroczy rozmiar tablicy wypisz "Warning: number of elements exceed Array size!".

np.: duplikuję element pod indeksem 2 dwa razy.

```terminal
['a', '1', 'g', 'c', 'c', '\0', '\0', '\0', '\0']

['a', '1', 'g', 'g', 'g', 'c', 'c', '\0', '\0']
```

Napisz funkcję `print_array()` która wypisze elementy tablicy w podanym niżej formacie:

```terminal
['a', '1', 'g', 'c', 'c']
```

Przetestuj działanie funkcji na wybranych 3 przykładach.
### EK_4

W metodzie main napisz program który zapisze wyniki z poprzedniego zadania do pliku wyniki.txt


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
