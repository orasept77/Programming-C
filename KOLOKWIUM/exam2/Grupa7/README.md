# Kolokwium 2

Wybrać jedno z poniższych zadań. Pliki z rozwiązaniami nazwać w zależności od wybranego zadania, odpowiednio:
- `dst.c` i `dst.exe` dla oceny 3
- `db.c` i `db.exe`. dla oceny 4
- `bdb.c` i `bdb.exe` dla oceny 5
Po zakończeniu kolokwium pliki spakować w archiwum .zip i przesłać za pomocą formularza.

## Bardzo dobry

### EK_3

Utwórz strukturę `Array` przechowującą macierz. Struktura ma zawierać również dane niezbędne do odczytania wartości komórek macierzy.

Utwórz funkcję `initArray()` która zwraca instancję struktury `Array`. Funkcja tworzy nową instancję struktury `Array` i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

Utwórz funkcję `printArray()` która przyjmuje jako parametr strukturę `Array`.
Funkcja wypisuje zawartość macierzy w następującym formacie:

```terminal
2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
```

Utwórz funkcję `multiplyArrays()` przyjmującą dwie instancje struktury `Array`. W ciele funkcji zaimplementuj mnożenie macierzy według wzoru:

$$
C_{ij} = \Sigma_{k=1}^{p} A_{ik} B_{kj}
$$

Uwzględnij nastepujące aspekty:
- kiedy możliwe jest mnożenie macierzy przez macierz, jeśli mnożenie nie jest możliwe wypisz odpowiedni komunikat i zwróć puste pola struktury `Array`(dwie macierze można pomnożyć tylko wtedy gdy liczba kolumn macierzy A jest równa liczbie wierszy macierzy B).
- funkcja ma zwrócić nową macierz będącą wynikiem mnożenia tych macierzy


W metodzie `main()`:
- Za pomocą funkcji `initArray()` utwórz macierze o wymiarach 3x2 oraz 2x3 z mastępującymi wartościami

```
1.00    2.00    3.00
4.00    5.00	2.00
```
```
1.00	4.00
3.00	1.00
5.00	4.00
```

- Wywołaj funkcję `multiplyArrays()` przekazując utworzone macierze
- Wypisz wynik mnożenia macierzy w konsoli (funkcja `printArray()`)

### EK_4

Zmodyfikuj program aby wynik mnożenia macierzy został zapisany w pliku tekstowym `wyniki.txt` w postaci:

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


<br>
<br>
<br>
<br>
<br>
<br>

## Dobry

### EK_3


### EK_4


<br>
<br>
<br>
<br>
<br>
<br>

## Dostateczny

### EK_3


### EK_4




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
