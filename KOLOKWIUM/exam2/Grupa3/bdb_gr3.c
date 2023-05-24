/*Bardzo dobry
EK_3
Utwórz strukturę Array przechowującą macierz o dowolnym rozmiarze. Struktura powinna zawierać dane niezbędne do iteracji po komórkach macierzy.

Utwórz funkcję initArray() która zwraca instancję struktury Array. Funkcja tworzy nową instancję struktury Array i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

Utwórz funkcję detArray() przyjmującą instancje struktury Array. Funkcja powinna zwracać wyznacnzik macierzy który można obliczyć w następujący sposób:

Przekształcenie macierzy do uzyskania postaci górnej trójkątnej według wzoru:


jeśli w podanym wzorze A[i,i] == 0 (dzielenie przez 0) wypisz stosowny komunikat i przerwij obliczenia.
Poszczególne indeksy zmieniają się według sekwencji:

i = 1,...,n-1
j = i+1,...,n
k = i+1,...,n
Po przekształceniu możliwe jest obliczenie wyznacznika macierzy mnożąc elementy na przekątnej. Poniżej liczbą 1 zaznaczono elementy z których trzeba policzyć iloczyn w przypadku macierzy 4x4.

[1 0 0 0]
[0 1 0 0]
[0 0 1 0]
[0 0 0 1]
Funkcja powinna zwracać odpowiednie komunikaty jeśli macierz jest inna niż kwadratowa.

więcej informacji

Utwórz funkcję printArray() która przyjmuje jako parametr strukturę Array. Funkcja wypisuje zawartość tablicy z przekazanej struktury w następującym formacie:

2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
W metodzie main():

Za pomocą funkcji initArray() utwórz zmienne przechowujące macierze o wymiarach 3x3, 3x3 i 2x4
Wypełnij macierze następującymi danymi:
1.00        2.00        3.00
4.00        5.00        5.00
1.00        2.00        4.00
1.00        2.00        3.00
1.00        2.00        2.00
1.00        2.00        3.00
1.00        2.00        3.00      5.00
4.00        5.00        5.00      1.00
EK_4
Zmodyfikuj program w ten sposób aby wyniki działania programu wyświetlone w konsoli zostały również zapisane w pliku wyniki.txt.

1.00        2.00        3.00
4.00        5.00        5.00
1.00        2.00        4.00
det = -3.00

1.00        2.00        3.00
1.00        2.00        2.00
1.00        2.00        3.00
det = 0.00

1.00        2.00        3.00      5.00
4.00        5.00        5.00      1.00
Obliczenie wyznacznika jest mozliwe dla macierzy kwadratowej
det = 0.00*/

/*Bardzo dobry
EK_3
Utwórz strukturę Array przechowującą macierz. Struktura ma zawierać również dane niezbędne do odczytania wartości komórek macierzy.

Utwórz funkcję initArray() która zwraca instancję struktury Array. Funkcja tworzy nową instancję struktury Array i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

Utwórz funkcję printArray() która przyjmuje jako parametr strukturę Array. Funkcja wypisuje zawartość tablicy z przekazanej struktury w następującym formacie:

2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
Utwórz funckję fillArray() która przyjmuje instancję klasy Array i prosi użytkownika o wypełnienie zawartości tablicy. Przykładowa sesja:

Array[0][0] = 2.0
Array[0][1] = 4.42
Array[1][0] = 5.2
Array[1][1] = 6.0
Array[2][0] = 9
Array[2][1] = 22.4
Utwórz funkcję multiplyArrays() przyjmującą dwie instancje struktury Array. W ciele funkcji zaimplementuj mnożenie macierzy. Uwzględnij nastepujące aspekty:

kiedy możliwe jest mnożenie macierzy przez macierz, jeśli mnożenie nie jest możliwe wypisz odpowiedni komunikat i zwróć puste pola struktury Array(dwie macierze można pomnożyć tylko wtedy gdy liczba kolumn macierzy A jest równa liczbie wierszy macierzy B).
funkcja ma zwrócić nową macierz będącą wynikiem mnożenia tych macierzy
W metodzie main():

Utwórz dwie zmienne o typie Array.
Za pomocą funkcji initArray() utwórz macierze o wymiarach 3x2 oraz 2x3
Wywołaj funkcję fillArray() by wypełnić macierze wartościami
Wywołaj funkcję multiplyArrays() przekazując utworzone macierze
Wypisz wynik mnożenia macierzy w konsoli (funkcja printArray())
EK_4
Zapisz wynik mnożenia macierzy w pliku tekstowym wyniki.txt w postaci:

>1.00    2.00    3.00
4.00    5.00	2.00

X

1.00	4.00
3.00	1.00
5.00	4.00

=

22.00	18.00
29.00	29.00*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rows;
    int cols;
    double** data;
} Array;

Array initArray(int rows, int cols) { 
    Array arr;
    arr.rows = rows;
    arr.cols = cols;

    arr.data = malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++) {
        arr.data[i] = malloc(cols * sizeof(double));
    }
    return arr;
}

double detArray(Array arr) {
    int i, j, k;
    double det = 1;
    int n = arr.rows;

    if (arr.rows != arr.cols) {
        printf("Obliczenie wartości jest mozliwe dla macierzy kwadratowej\n");
        return 0;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            for (k = i + 1; k < n; k++) {
                arr.data[j][k] -= (arr.data[j][i] / arr.data[i][i]) * arr.data[i][k];
            }
        }
        det *= arr.data[i][i];
    }
    det *= arr.data[n - 1][n - 1];

    return det;
}

void printArray(Array arr) {
    for (int i = 0; i < arr.rows; i++) {
        for (int j = 0; j < arr.cols; j++) {
            printf("%.2f\t", arr.data[i][j]);
        }
        printf("\n");
    }
}

void log_file_txt(Array arr, double det) {
    FILE *fptr;
    fptr = fopen("bdb_gr3.txt","a+");
    for (int i = 0; i < arr.rows; i++) {
        for (int j = 0; j < arr.cols; j++) {
            fprintf(fptr, "%.2f\t", arr.data[i][j]);
        }
        fprintf(fptr, "\n");
    }
    fprintf(fptr, "det = %.2f\n\n", det);

    fclose(fptr);
}

int main(){
    Array a = initArray(3, 3);
    a.data[0][0] = 1.00;
    a.data[0][1] = 2.00;
    a.data[0][2] = 3.00;
    a.data[1][0] = 4.00;
    a.data[1][1] = 5.00;
    a.data[1][2] = 5.00;
    a.data[2][0] = 1.00;
    a.data[2][1] = 2.00;
    a.data[2][2] = 4.00;
    double det_a = detArray(a);
    log_file_txt(a, det_a);

    Array b = initArray(3, 3);
    b.data[0][0] = 1.00;
    b.data[0][1] = 2.00;
    b.data[0][2] = 3.00;
    b.data[1][0] = 1.00;
    b.data[1][1] = 2.00;
    b.data[1][2] = 2.00;
    b.data[2][0] = 1.00;
    b.data[2][1] = 2.00;
    b.data[2][2] = 3.00;
    double det_b = detArray(b);
    log_file_txt(b, det_b);
    
    Array c = initArray(2, 4);
    c.data[0][0] = 1.00;
    c.data[0][1] = 2.00;
    c.data[0][2] = 3.00;
    c.data[0][3] = 5.00;
    c.data[1][0] = 4.00;
    c.data[1][1] = 5.00;
    c.data[1][2] = 5.00;
    c.data[1][3] = 1.00;
    double det_c = detArray(c);
    log_file_txt(c, det_c);

    return 0;
}
