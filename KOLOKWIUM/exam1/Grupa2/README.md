## [Zadanie 1](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task1.c) - kompilacja
Do każdego z poprawnie rozwiązanych zadań utwórz plik `solution[X].exe` gdzie [X] jest numerem rozwiązywanego zadania i odpowiada zawartości pliku `task[X].c`.

np. Plik task1.c ma zostać skompilowany do pliku solution1.exe

## [Zadanie 2](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task2.c)  (`task2.c`, `solution2.exe`)
Utwórz zmienne tak aby zajmowały jak **najmniej** miejsca w pamięci i przechowywały wskazane wartości:
- `var1` przechowującą wartość 32 000.
- `var2` przechowującą wartość 0.94344.
- `var3` przechowującą pierwszą literę twojego imienia.
- `var4` przechowującą twoje nazwisko.
- Utwórz globalną stałą `TAB_LEN` przechowującą wartość 20.
Napisać w komentarzu czym różni się stała od zmiennej.

Wypisać wartości w konsoli w formie:
```
var1 = 32000
var2 = 0.94344
var3 = J
var4 = Kowalski
TAB_LEN = 20
```

## [Zadanie 3](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task3.c) (`task3.c`, `solution3.exe`)
Utworzyć zmienną `task3_var` przechowującą **liczbę całkowitą**.
Przypisać do zmiennej wartość podaną przez używkotnika.
Przed podaniem wartości wypisz w konsoli napis "Podaj wartosc zmiennej task3_var:".

Jeśli wartość:
- jest mniejsza niż 30 wypisz napisz `task3_var jest mniejsza od 30` 
- jeśli wartość w zmiennej `task3_var` jest większa od 30 wypisz `task3_var jest wieksza od 30`, 
- jeśli wartość w zmiennej `task3_var` jest równa 30 wypisz `task3_var jest rowne 30`.

## [Zadanie 4](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task4.c) (`task4.c`, `solution4.exe`)
Utworzyć zmienną `task4_var` przechowującą **liczbę całkowitą**.
Przypisać do zmiennej wartość podaną przez używkotnika.
Przed podaniem wartości wypisz w konsoli napis "Podaj wartosc zmiennej task4_var:".

Za pomocą instrukcji warunkowej switch jeśli:
- podana wartość jest równa 100 zwiększ wartość zmiennej `task4_var` o 10%.
- podana wartość jest równa 20 zwiększ wartość zmiennej `task4_var` o 20%.
- podana wartość jest równa 3 pomnóż wartość zmiennej `task4_var` razy 5.
- w przeciwnym przypadku nie modyfikuj wartości zmiennej.

Wypisz końcową wartość w konsoli.

## [Zadanie 5](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task5.c) (`task5.c`, `solution5.exe`)
Utworzyć zmienną `tab` przechowującą liczby: [0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7].
Za pomocą pętli `for` wypisać zawartość tablicy w odwrotnej kolejności w postaci:

```
tab[7] = 0.7
tab[6] = 0.6
tab[5] = 0.5

...

tab[1] = 0.1
```

## [Zadanie 6](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task6.c) (`task6.c`, `solution6.exe`)
Utworzyć zmienną `task6_var` przechowującą liczbę całkowitą.
Przypisać do zmiennej wartość podaną przez używkotnika.
Przed podaniem wartości wypisz w konsoli napis "Podaj wartosc zmiennej task6_var:".

Używając pętli while wypisz kolejne potęgi liczby 2 aż do liczby przechowywanej w zmiennej `task6_var` włącznie. W konsoli powinny zostać wypisane w następującej postaci:

```terminal
Podaj wartosc zmiennej task6_var: 64
[1,2,4,8, 16, 32, 64]
```
## [Zadanie 7](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task7.c) (`task7.c`, `solution7.exe`)

Napisz funkcję `power()` która przyjmuje dwa artumenty:
- a - liczba zmiennoprzecinkowa
- b - liczba całkowita
Funkcja powinna zwracać wartość 
$$
    a^b
$$
Przetestuj działanie funkcji na wartościach a=0.5 i b=4. Wypisz w konsoli wynik działania funkcji w następującej postaci:

```termin
a = 0.5
b = 4
0.5^4 = 0.0625
```

## [Zadanie 8](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task8.c) (`task8.c`, `solution8.exe`)

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

## [Zadanie 9](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task9.c) (`task9.c`, `solution9.exe`)

Utworzyć zmienną globalną `album` przechowującą wartość 0.

Utworzyć zmienną wskaźnikową `wsk1` przechowującą adres do zmiennej `album`.

- Wypisz adres jaki przechowuje zmienna `wsk1`.

- Za pomocą zmiennej `wsk1` wypisz wartość pod adresem który przechowuje.

- Używając wskaźnika zmień zawartość zmiennej pod adresem przechowywanym przez zmienną `wsk1` na swój numer albumu

- Wypisz zawartość zmiennej `album`.

## [Zadanie 10](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task10.c) (`task10.c`, `solution10.exe`)

Utworzyć strukturę `funkcjakwadratowa` która będzie przechowywać współczynniki równania kwadratowego `a`,`b`,`c` jako wartości zmiennoprzecinkowe, ponadto miejsca zerowe funkcji jako `x1` i `x2` oraz informację czy dana funkcja posiada miejsca zerowe `roots` w postaci wartości true/false.

## [Zadanie 11](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task10.c) (`task10.c`, `solution10.exe`) - Oznacz rozwiązanie komentarzem `// zadanie 11`

Utworzyć tablicę `task11_var` przechowującą 100 struktur `funkcjakwadratowa`. Wypełnij tablicę strukturami z losowymi wartościami a,b,c w przedziale od 0 do 10.

## [Zadanie 12](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam1/Grupa2/task10.c) (`task10.c`, `solution10.exe`) - Oznacz rozwiązanie komentarzem `// zadanie 12`

Napisz funkcję `calculate()` obliczającą miejsca zerowe funkcji kwadratowej w strukturze przekzanej jako argument funkcji. Funkcja przypisuje wartości x1, x2 i roots do struktury dla której są obliczane. Wykorzystaj funkcję by obliczyć miejsca zerowe i uzupełnić wyniki w tablicy `task11_var`. Wypisz rezultat w konsoli.

# Odsyłanie rozwiązań:

Pliki z rozwiązaniem należy spakować do archiwum .zip nazwanym pierwszymi literami imienia i nazwiska + numer albumu. np. `jk123456.zip` jeśli nazywasz się Jan Kowalski i posiadasz numer albumu 123456.

Nastepnie za pomocą formularza należy przesłać archiwum.
