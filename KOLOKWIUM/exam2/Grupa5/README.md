# Kolokwium 2

Wybrać jedno z poniższych zadań. Pliki z rozwiązaniami nazwać w zależności od wybranego zadania, odpowiednio:
- `dst_gr3.c` i `dst.exe` dla oceny 3
- `db_gr3.c` i `db.exe`. dla oceny 4
- `bdb_gr3.c` i `bdb.exe` dla oceny 5
Po zakończeniu kolokwium pliki spakować w archiwum .zip i przesłać za pomocą formularza.

## Bardzo dobry

### EK_3

Utwórz strukturę `Array` przechowującą macierz o dowolnym rozmiarze. Struktura powinna zawierać dane niezbędne do iteracji po komórkach macierzy.

Utwórz funkcję `initArray()` która zwraca instancję struktury `Array`. Funkcja tworzy nową instancję struktury `Array` i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji. Miejsce w pamięci na przechowywanie macierzy jest alokowane dynamicznie.

Utwórz funkcję `detArray()` przyjmującą instancje struktury `Array`. Funkcja powinna zwracać wyznacnzik macierzy który można obliczyć w następujący sposób:

Przekształcenie macierzy do uzyskania postaci górnej trójkątnej według wzoru:
$$
A_{jk} = A_{jk} - \frac{A_{ji}}{A_{ii}} * A_{ik}
$$
- jeśli w podanym wzorze A[i,i] == 0 (dzielenie przez 0) wypisz stosowny komunikat i przerwij obliczenia zwracając macierz wypełnioną jedną wartością 0.

Poszczególne indeksy zmieniają się według sekwencji:
1. i = 1,...,n-1
2. j = i+1,...,n
3. k = i+1,...,n

Po przekształceniu możliwe jest obliczenie wyznacznika macierzy mnożąc elementy na przekątnej. Poniżej liczbą 1 zaznaczono elementy z których trzeba policzyć iloczyn w przypadku macierzy 4x4.

```terminal
[1 0 0 0]
[0 1 0 0]
[0 0 1 0]
[0 0 0 1]
```

Funkcja powinna zwracać odpowiednie komunikaty jeśli macierz jest inna niż kwadratowa.


[więcej informacji](https://pracownik.kul.pl/files/10382/public/aan_w5_1819.pdf)



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
Napisz funkcję `allocate_2d_array()` która dynamicznie alokuje miejsce w pamięci na macierz liczb zmiennoprzecinkowych o rozmiarze przekazanym jako parametry funkcji. Funkcja zwraca wskaźnik na tę macierz.

Napisz funkcję `free_2d_array()` która zwalnia miejsce w pamięci macierzy przekazanej jako parametr funkcji.
W komentarzu opisz za co odpowiadają parametry funkcji jeśli ich nazwa tego nie sugeruje.

Napisz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy w następującej postaci:

```terminal
| 0.00      | 0.10      |
| 1.00      | 4331.10   |
| 2.00      | 42.10     |
```

Utwórz funkcję `euclidDistance()` która przyjmuje dwie tablice o dowolnej długości jako parametry funkcji. Funkcja oblicza odległość Euklidesową na podstawie wartości tablic według wzoru:

$$
d(p,q)=\sqrt{\sum_{i=1}^{n}\left(q_{i}-p_{i}\right)^2} 
$$

Utwórz funkcję `distnaceMatrix()` która oblicza odległości pomiędzy kolejnymi wierszami macierzy przekazanej jako parametr funkcji i wpisuje do nowej macierzy obliczone wartości. np. mając macierz:

```
| 0.00      | 0.00      |
| 0.00      | 1.00      |
| 0.00      | 2.00      |
```

wynikiem działania będzie macierz 3x3 gdzie w komórce [1,1] jest odległośc pomiędzy 1 a 1 wierszem,w komórce [1,2] odległość pomiędzy 1 a 2 wierszem, w komórce ...
w komórce [3,3] odległośc pomiędzy 3 a 3 wierszem:

```
| 0.00      | 1.00      | 2.00      |
| 1.00      | 0.00      | 1.00      |
| 2.00      | 1.00      | 0.00      |
```

W metodzie main() utwórz następujące menu:

```
1. Wprowadz macierz
2. Wyswietl macierz
3. Macierz odleglosci
4. Wyjscie
```

Po wybraniu opcji 1 program pyta użytkownika o rozmiar macierzy, alokuje miejsce na tę macierz a następnie użytkownik wypełnia macierz danymi.

```
Wybrano 1 - Wprowadz macierz.
Wprowadz liczbe wierszy: 2
Wprowadz luczbe kolumn: 2
tab[1][1] = 1
tab[1][2] = 3
tab[2][1] = 3
tab[2][2] = 2
```

Po wybraniu opcji 2 program wyświetla macierz za pomocą funkcji print_matrix()

Po wybraniu opcji 3 program wyświetla macierz odległości macierzy przechowywanej aktualnie w pamięci.

Program powinien działać aż do momentu wybrania opcji wyjście. Pamięć powinna być zwalniana w odpowiednim momencie.

### EK_4

Zmodyfikuj program tak aby historia działań użytkownika została zapisana do pliku `wyniki.txt`.

<br>
<br>
<br>
<br>
<br>
<br>

## Dostateczny

### EK_3

Utwórz funkcję `duplicate_element()` która w tablicy jednowymiarowej znaków powiela element pod wskazanym indexem(wartość przekazana jako parametr funkcji) n razy(wartość przekazana jako parametr funkcji) za tym elementem. Jeśli ilość elementów przekroczy rozmiar tablicy wypisz "Error: number of elements exceed Array size!" i zakończ działanie funkcji.

np.: duplikuję element pod indeksem 2, 2 razy.

```terminal
['a', '1', 'g', 'c', 'c', '\0', '\0', '\0', '\0']

['a', '1', 'g', 'g', 'g', 'c', 'c', '\0', '\0']
```

Utwórz funkcję `print_array()` która wypisze elementy tablicy w podanym niżej formacie:

```terminal
['a', '1', 'g', 'c', 'c']
```

Przetestuj działanie funkcji na poniższych 3 przykładach.
```
[1,2,3,4] duplikuj 2 element 2 razy
```
```
[a,b,c,d,d,e] duplikuj 3 element 20 razy
```
```
[a,b,c,d,d,e] duplikuj 1 element 20 razy
```
### EK_4

Zmodyfikuj program tak aby rezultat działania programu został zapisany w pliku wyniki.txt w następującej postaci:

```terminal
['a', '1', 'g', 'c', 'c']
duplikuj 3 element 2 razy
['a', '1', 'g', 'g', 'g', 'c', 'c']
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
