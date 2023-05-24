## Zadanie 1 - kompilacja
Do każdego z poprawnie rozwiązanych zadań utwórz plik `solution[X].exe` gdzie [X] jest numerem rozwiązywanego zadania i odpowiada zawartości pliku `task[X].c`.

np. Plik task1.c ma zostać skompilowany do pliku solution1.exe

## Zadanie 2  (`task2.c`, `solution2.exe`)

Napisz program który prosi użytkownika o podanie zmienny różnych typów a następnie wypisuje je w konsoli. Utwórz zmienne z odpowiednim typem by przechować wprowadzane przez użytkownika wartości.

przykładowa sesja:


```terminal
Type number beween -32 000 and 32 000: -321
Value entered[-321]

Type your name: Jan
Value entered[Jan]

Type value of PI: 3.14
Value entered[3.1400]

Type number between 0 and 4294 967 295: 3
Value entered[3]

Type first letter of your lastname: K
Value entered[K]
```

## Zadanie 3  (`task3.c`, `solution3.exe`)

Utwórz program który pyta użytkownika o liczbę całkowitą. Jeśli podana przez użytkownika liczba jest podzielna przez 3 wypisz "liczba jest podzielna przez 3", jeśli podana liczba jest podzielna przez 5 wypisz "liczba jest podzielna przez 5", w przeciwnym razie wypisz "liczba nie jest podzielna przez 3 i 5".

przykładowa sesja:

```terminal
Podaj liczbę: 15
liczba jest podzielna przez 3
liczba jest podzielna przez 5
```

```terminal
Podaj liczbę: 3
liczba jest podzielna przez 3
```

```terminal
Podaj liczbę: 4
liczba nie jest podzielna przez 3 i 5
```

## Zadanie 4  (`task4.c`, `solution4.exe`)

Wykorzystując instrukcję `switch` utwórz program który pyta użytkownika o liczbę całkowitą. 
Jeśli uzytkownik wpisze wartość 0 wypisz "wyjscie z programu". 
Jeśli użytkownik wpisze wartość 1 wypisz "wybrano dodawanie".
Jeśli użytkownik wpisze wartość 2 wypisz swój numer albumu.

przykładowa sesja:
```terminal
Podaj liczbe: 0
wyjscie z programu
```

## Zadanie 5  (`task5.c`, `solution5.exe`)

Utwórz zmienną przechowującą wartości następującej tabeli:

| A | B | C |
|---|---|---|
| 1 | 2 | 3 |
| 4 | 5 | 6 |
| 1 | 2 | 3 |
| 1 | 1 | 1 |

Za pomocą pętli `for` wypisz wartości przechowywane w tej zmiennej w postaci:

```terminal
1 wiersz 1 kolumna - 1
1 wiersz 2 kolumna - 2
...
4 wiersz 3 kolumna - 1
```

## Zadanie 6  (`task6.c`, `solution6.exe`)

Napisz program wykorzystujący pętlę `while` który pobiera od użytkownika wartości całkowite i je sumuje aż do momentu podania wartości 0. Po podaniu wartości 0 wypisywana jest suma wpisanych wartości.

przykładowa sesja:

```terminal
enter value: 1
enter value: 1
enter value: 2
enter value: 0
sum = 4
```

## Zadanie 7  (`task7.c`, `solution7.exe`)

Napisz funkcję `volumeOfCuboid()` przyjmującą 3 parametry. Parametry te są długościami boków prostopadłościanu jako liczby zmiennoprzecinkowe. Funkcja zwraca objętość prostopadłościanu na podstawie przekazanych wartości.

Przetestuj działanie funkcji oblicz objętość następujących prostopadłościanów a następnie wypisz wynik w konsoli.
- a = 3.3, b = 3.21, c = 5.0
- a = 1.0, b = 1.0, c = 1.0
- a = 1.0, b = 2.0, c = 3.0

przykładowa sesja:
```terminal
Objetosc prostopadloscianu o bokach 4, 6, 3 wynosi 72
```

## Zadanie 8  (`task8.c`, `solution8.exe`)

Napisz funkcję `findCharPosition()` która przyjmuje dwa parametry:
- łańcuch znaków
- znak
Funkcja zwraca index pierwszego wystapienia danego znaku lub -1 jeśli znak nie występuje w danym łańcuchu znaków.

Przetestuj działanie funkcji na wyrazach szukając odpowiednich znaków i wypisz ich pozycję w konsoli:
- "Floccinaucinihilipilification" "n"
- "Antidisestablishmentarianism" "m"
- "Honorificabilitudinitatibus" "z"

przykładowa sesja:

```terminal
"Kowalski" "w" - 2
"Kowalski" "z" - -1
"Kowalski" "K" - 0
```

## Zadanie 9  (`task9.c`, `solution9.exe`)

Utwórz zmienną `variable1` przechowującą napis "Programowanie.".
Utwórz wskaźnik `endwsk` na ostatni element napisu czyli ".".
Wykorzystując zmienną wskaźnikową zmień "." na "!".
Wypisz zawartość zmiennej `variable1`.

# Odsyłanie rozwiązań:

Pliki z rozwiązaniem należy spakować do archiwum .zip nazwanym pierwszymi literami imienia i nazwiska + numer albumu. np. `jk123456.zip` jeśli nazywasz się Jan Kowalski i posiadasz numer albumu 123456.

Nastepnie za pomocą formularza należy przesłać archiwum.
