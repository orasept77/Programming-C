# Kolokwium 3

## **[Zadanie 1.](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam3/zadanie1.c)** 
Utwórz bezparametrową funkcję o nazwie `literaA()` wyświetlającą na ekranie literę A złożoną z literek A. Wysokość litery A wczytujemy z klawiatury. Przykładowy rezultat:
```
      A
     A A
    A   A
   AAAAAAA
  A       A
 A         A
 ```
 
## **[Zadanie 2.](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam3/max.c)**
Utwórz bezparametrową funkcję `max()` wczytującą z klawiatury 10 liczb całkowitych (pojedynczo). Funkcja ma znaleźć największą spośród podanych liczb oraz wydrukować na ekranie informację mówiącą o tym, ile razy największa liczba wystąpiła w podanym ciągu liczb. W zadaniu należy wykorzystać jednowymiarową tablicę liczb całkowitych.

## [Zadanie 3.](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam3/zadanie3.c)**
Utwórz funkcję `zwiekszL()`, która przyjmować będzie liczbę całkowitą n (parametr funkcji). Funkcja ma wczytać z klawiatury n liczb rzeczywistych (pojedynczo) i je zapamiętać. Następnie funkcja ma do każdej z wczytanych liczb dodać 100 i wypisać na ekranie wartości wszystkich liczb (po zastosowanych zmianach). Ponadto funkcja ma zwracać sumę wszystkich wczytanych liczb (po powiększeniu ich wartości).

## **[Zadanie 4.](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam3/zadanie4.c)**
Utwórz funkcję `macierzTD()`, która przyjmować będzie liczbę całkowitą n (parametr funkcji). Funkcja ma utworzyć tablicę dwuwymiarową o rozmiarach *n x n*. Następnie funkcja ma uzupełnić tablicę w taki sposób, aby na głównej przekątnej tablicy i poniżej tej przekątnej znalazły się wartości 10, zaś pozostałe komórki tablicy zawierały cyfrę 1 (zob. przykład). Do uzupełniania tablicy odpowiednimi wartościami należy wykorzystać 1 pętlę *for* i 1 pętlę *do while*. Następnie należy wypisać na ekranie całą tablicę w przejrzysty sposób, tzn. kolumny rozdzielone znakiem tabulacji i każdy wiersz tabeli w oddzielnej linii. Do wypisywania zawartości tabeli należy użyć 1 pętli *do while* i 1 pętli *for*. 

**Przykład uzupełnionej tablicy dla n=4:**
```
10 1  1  1 
10 10 1  1 
10 10 10 1 
10 10 10 10
```

## **[Zadanie 5.](https://github.com/dawidolko/Programming-C/blob/main/KOLOKWIUM/exam3/zadanie5.c)**
Utwórz prototyp funkcji o nazwie `poleT`, która przyjmować będzie dwie liczby rzeczywiste a i h oraz zwracać pole trójkąta o podstawie długości a i wysokości h poprowadzonej do tej podstawy.

6. W funkcji `main()` należy wywołać każdą z funkcji z zadań 1-4 z odpowiednimi parametrami (jeśli je przyjmują) oraz wypisać zwracane przez nie wyniki (jeśli dana funkcja coś zwraca). Ponadto wywołanie każdej funkcji powinno być poprzedzone stosownym komunikatem, który zostanie wypisany na konsolę. Należy również zadbać o czytelność wyników wypisywanych na ekran. 
7. 
**Przykładowy schemat kodu w funkcji main():**
```
// Wypisanie komunikatu, że nastąpi wywołanie funkcji z zadania 1, np.: „Wywołanie funkcji xxx” 
// Wywołanie funkcji z zadania 1 z odpowiednimi parametrami i wypisanie zwracanych przez nią wyników 
// Pusta linia oddzielająca wywołania funkcji 
// Wypisanie komunikatu, że nastąpi wywołanie funkcji z zadania 2, np.: „Wywołanie funkcji yyy” 
// Wywołanie funkcji z zadania 2 z odpowiednimi parametrami i wypisanie zwracanych przez nią wyników 
// Pusta linia oddzielająca wywołania funkcji itd.
```
