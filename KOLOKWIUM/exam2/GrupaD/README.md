# Kolokwium 2

Wybrać jedno z poniższych zadań.
Po zakończeniu kolokwium pliki spakować w archiwum .zip i przesłać za pomocą formularza.

## 3.0
Utwórz program `dst_quadraticfunction`.

Utwórz funckję `printRoots()` która przyjmuje współczynniki a,b,c fukcji kwadratowej. Współczynniki mogą być liczbami dziesiętnymi oraz być ujemne. Funkcja ma obliczać miejsca zerowe fukcji kwadratoj.
Funkcja powinna wypisywać informację w konsoli w następującej postaci:
Przykład gdy jako argument funckji przekazano wartości -2, 3, 1
```
f(x) = (-2.00)x^2 + (3.00)x + (1.00)
Delta: 17.00
x1 = -0.28 
x2 = 1.78
```
Przykład gdy jako argument funckji przekazano wartości 2, 4, 2
```
f(x) = (2.00)x^2 + (4.00)x + (2.00)
Delta: 0.00
x = -1.00
```

Przykład gdy jako argument funckji przekazano wartości 3, 4, 2
```
f(x) = (3.00)x^2 + (4.00)x + (2.00)
Delta: -8.00
Funkcja nie ma miejsc zerowych.
```

W metodzie `main()` przetestuj działanie funkcji a następujacych przypadkach:<bR>
a = -2, b = 3, c = 1<br>
a = 2, b = 4, c = 2<br>
a = 3, b = 4, c = 2<br>

W dalszej części metody `main()` napisz fragment kodu który będzie pytał użytkownika o współczynniki a, b, c. Po podaniu współczyników przez użytkownika zostanie wyświetlona informacja o miejscach zerowych. Przykładowa sesja:
```
Podaj wspolczynnik a: 2
Podaj wspolczynnik b: 4
Podaj wspolczynnik c: 2
f(x) = (2.00)x^2 + (4.00)x + (2.00)
Delta: 0.00
x = -1.00
```

Przydatne wzory:

$$
ax^2+bx+c=0
$$

$$
\Delta =b^2-4ac
$$

$$
 x_1=\frac{-b-\sqrt{\Delta }}{2a}
$$

$$
x_2=\frac{-b+\sqrt{\Delta }}{2a} 
$$

Jeśli:
$$
\Delta>0 - \text{równanie kwadratowe ma dwa rozwiązania}
$$ 

$$
\Delta=0 - \text{równanie kwadratowe ma jedno rozwiązanie}
$$

$$
\Delta<0 -\text{równanie kwadratowe nie ma rozwiązań}
$$

## 4.0
Utwórz program `db_sortowanie_wiersz`.

Utwórz funkcję `allocate_2d_array()` która dynamicznie alokuje miejsce w pamięci na macierz liczb zmiennoprzecinkowych o rozmiarze przekazanym jako parametry funkcji. Funkcja zwraca wskaźnik na tę macierz.

Utwórz funkcję `free_2d_array()` która zwalnia miejsce w pamięci macierzy przekazanej jako parametr funkcji.
W komentarzu opisz za co odpowiadają parametry funkcji jeśli ich nazwa tego nie sugeruje.

Utwórz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy w następującej postaci:

```terminal
0.0000      0.1000    
1.0000      41.1005   
2.0000      42.1000   
```

Utwórz  funkcję `sort_by_row()` która sortuje tablicę przekazaną jako argument funkcji rosnąco według wartości we wskazanym wierszu. Wiersz według którego ma odbyć się sortowanie powinien być przekazany jako **argument funkcji**. np.

```
przed sotrowaniem
1.0000     3.0000     5.0000    
3.0000     4.0000     3.0000    
4.0000     7.0000     1.0000    
3.0000     1.0000     3.0000    

po sortowaniu z wyborem 2 wiersza
1.0000    5.0000    3.0000
3.0000    3.0000    4.0000
4.0000    1.0000    7.0000
3.0000    3.0000    1.0000 

po sortowaniu z wyborem 1 wiersza
1.0000     3.0000     5.0000    
3.0000     4.0000     3.0000    
4.0000     7.0000     1.0000    
3.0000     1.0000     3.0000 
```

Utwórz macierz o rozmiarze 4x4 za pomocą funkcji `allocate_2d_array()` a następnie wypełnij ją losowymi wartościami z przedziału 1-10.
Wyświetl testową macierz.
Przetestuj działanie funkcji sort_by_column() na następujących przypadkach:
- Posortuj tablicę według pierwszego wiersza a następnie wypisz rezultat.
- Posortuj tablicę według ostatniego wiersza a następnie wypisz rezultat.
