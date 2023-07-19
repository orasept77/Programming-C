# C

Wybrać jedno z poniższych zadań.
Po zakończeniu kolokwium pliki spakować w archiwum .zip i przesłać za pomocą formularza.

## [3.0](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam2/GrupaA/GrupaA_3.c)
Utwórz program `dst_palindrom`.

Utwórz funkcję `checkPalindrom()` która przyjmuje łańcuch znaków(**tablica** znaków zakończona pustym znakiem). Funkcja zlicza ile znaków jest na właściwej pozycji by utworzyć palindrom(słowo czytane od przodu i od tyłu brzmiące tak samo) i zwraca tę liczbę. Jeśli łańcuch znaków jest palindromem wtedy zwraca liczbę liter w słowie. np.

- **ala** zwróci liczbę 3
- **kajak** - 5 znaków
- **k**b**j**a**k** - 3 znaki
- **abba** - 4 znaki
- b**bb**a - 2 znaki


W metodzie `main()` napisz program który sprawdza działanie funkcji na poniższych przykładach:
```
"kajak" funkcja ma zwrócić 5
"Ala alA" funkcja ma zwrócić 7
" zrzegorz " funkcja ma zwrócić 6
"  ala  " funkcja ma zwrócić 7
```

W dalszej części metody `main()` po wyświetleniu przypadków testowych dopisz fragment który będzie pytał użytkownika o wybranie opcji z poniższego menu:
```
1. Wprowadź słowo.
2. Wyjście z programu.
```
Program powinien działać do momentu wybrania opcji wyjście z programu.
Po wybraniu opcji wprowadź słowo, odczytywane jest słowo wprowadzone od użytkownika (maksymalnie 100 znaków). Następnie program sprawdza czy znaki wprowadzone przez użytkownika są palindromem za pomocą utworzonej funkcji i wypisuje rezultat. Przykładowa sesja:

```
"kajak" - 5 palindrom
"Ala alA" - 7 palindrom
" zrzegorz " - 6
"  ala  " - 7 palinfrom

1. Wprowadz slowo.
2. Wyjscie z programu.
Wybierz opcje: 1
Wprowadz slowo: alaska
alaska - 2

1. Wprowadz slowo.
2. Wyjscie z programu.
Wybierz opcje: 1
Wprowadz slowo: ala
ala - 3 palindrom

1. Wprowadz slowo.
2. Wyjscie z programu.
Wybierz opcje: 2

Zakońćzenie działania programu.
```

## [4.0](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam2/GrupaA/GrupaA_4.c)
Utwórz program `db_sortowanie`.

Utwórz funkcję `allocate_2d_array()` która dynamicznie alokuje miejsce w pamięci na macierz liczb zmiennoprzecinkowych o rozmiarze przekazanym jako parametry funkcji. Funkcja zwraca wskaźnik na tę macierz.

Utwórz funkcję `free_2d_array()` która zwalnia miejsce w pamięci macierzy przekazanej jako parametr funkcji.
W komentarzu opisz za co odpowiadają parametry funkcji jeśli ich nazwa tego nie sugeruje.

Utwórz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy w następującej postaci:

```terminal
| 0.0000      | 0.1000    |
| 1.0000      | 41.1005   |
| 2.0000      | 42.1000   |
```

Utwórz  funkcję `sort_by_column()` która sortuje tablicę przekazaną jako argument funkcji rosnąco według wartości w wybranej kolumnie. Kolumnę według której ma odbyć się sortowanie powinna być przekazana jako **argument funkcji**. np.

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

Utwórz macierz za pomocą funkcji `allocate_2d_array()` a następnie wypełnij ją następującymi wartościami:

```
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |
| 3.0000    | 1.0000    | 3.0000    |
```
Przetestuj działanie funkcji sort_by_column() na następujących przypadkach:
- Posortuj tablicę według pierwszej kolumny a następnie wypisz rezultat.
- Posortuj tablicę według ostatniej kolumny a następnie wypisz rezultat.

## 5.0

Utwóz program `bdb_mnozeniemacierzy`

1. Utwórz strukturę `Array` przechowującą dynamicznie alokowaną macierz dwuwymiarową liczb zmiennoprzecinkowych. Struktura powinna zawierać dane o wielkości macierzy.

2. Utwórz funkcję `initArray()` która zwraca instancję struktury `Array`. Funkcja tworzy nową instancję struktury `Array` i przechowuje macierz o określonej **liczbie wierszy i kolumn przekazanych jako parametry funkcji**. Domyślnie macierz jest wypełniona wartościami 0.

3. Utwórz funkcję `freeArray()` która przyjmuje jako parametr **wskaźnik do struktury Array**. Funkcja dealokuje miejsce przechowujące dynamicznie przydzielone miejsce na macierz. Jeśli wszystko przebiegnie pomyślnie **funkcja zwraca wartość true**.

4. Utwórz funkcję `fillArray()` która wypełnia macierz wartościami podanymi przez użytkownika. Przed wprowadzeniem wartości użytkownik powinien otrzymać następujący komunikat informujący którą komórkę uzupełnia.

```
[1][1] = 1
[1][2] = 2
[2][1] = 1
[2][2] =
```

4. Utwórz funkcję `printArray()` która przyjmuje jako parametr strukturę `Array`.
Funkcja wypisuje zawartość macierzy w następującym formacie:

```terminal
2.000        2.000        2.000
2.000        2.000        2.000
12.000       12.000       12.000
```

5. Utwórz funkcję `multiplyArrays()` przyjmującą dwie instancje struktury `Array`. W ciele funkcji zaimplementuj mnożenie macierzy według wzoru:

$$
C_{ij} = \Sigma_{k=1}^{p} A_{ik} B_{kj}
$$

Metoda zwraca nową strukturę `Array` będącą wynikiem mnożenia przekazanych macierzy.

Uwzględnij nastepujące aspekty:
- kiedy możliwe jest mnożenie macierzy przez macierz, jeśli mnożenie nie jest możliwe wypisz odpowiedni komunikat i zwróć puste pola struktury `Array`(dwie macierze można pomnożyć tylko wtedy gdy liczba kolumn macierzy A jest równa liczbie wierszy macierzy B).

6. W metodzie `main()`:
- Za pomocą funkcji `initArray()` utwórz macierze o wymiarach 3x2 oraz 2x3. Wypełnij macierze poniższymi wartościami(są to przypadki testowe i powinny być zainicjowane w programie **bez ingerencji użytkownika**)

```
1.00    2.00    3.00
4.00    5.00	2.00
```
```
1.00	4.00
3.00	1.00
5.00	4.00
```

Pomnóż zainicjowane macierze za pomocą utworzonej metody. Wynik mnożenia zapisz w pliku `wynik.txt`:
```
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

Utwórz menu umożliwiające uzytkownikowi stworzenie dwóch macierzy, wypełnienie ich wartościami a następnie wyświetlenie wyniku mnożenia tych macierzy.

```
Podaj liczbe kolumn: 2
Podaj liczbe wierszy: 2
[1][1] = 1
[1][2] = 1
[2][1] = 1
[2][2] = 1

1.00 1.00
1.00 1.00

Podaj liczbe kolumn: 2
Podaj liczbe wierszy: 2
[1][1] = 1
[1][2] = 1
[2][1] = 1
[2][2] = 1

1.00 1.00
1.00 1.00

Wynik mnozenia
1.00 1.00
1.00 1.00
```
