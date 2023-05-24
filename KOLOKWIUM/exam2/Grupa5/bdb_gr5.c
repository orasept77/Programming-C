/*Bardzo dobry
EK_3
Utwórz strukturę Array przechowującą macierz o dowolnym rozmiarze. Struktura powinna zawierać dane niezbędne do iteracji po komórkach macierzy.

Utwórz funkcję initArray() która zwraca instancję struktury Array. Funkcja tworzy nową instancję struktury Array i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji. Miejsce w pamięci na przechowywanie macierzy jest alokowane dynamicznie.

Utwórz funkcję detArray() przyjmującą instancje struktury Array. Funkcja powinna zwracać wyznacnzik macierzy który można obliczyć w następujący sposób:

Przekształcenie macierzy do uzyskania postaci górnej trójkątnej według wzoru:


jeśli w podanym wzorze A[i,i] == 0 (dzielenie przez 0) wypisz stosowny komunikat i przerwij obliczenia zwracając macierz wypełnioną jedną wartością 0.
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

Utwórz funkcję printArray() która przyjmuje jako parametr strukturę Array. Funkcja wypisuje zawartość tablicy z przekazanej struktury w następującym formacie(kolumny podpisane kolejnymi literami alfabetu):

A           B           C
2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
W metodzie main():

Za pomocą funkcji initArray() utwórz zmienne przechowujące macierze o wymiarach 3x3, 3x3 i 2x4
Wypełnij macierze następującymi danymi:
A           B           C
1.00        2.00        3.00
4.00        5.00        5.00
1.00        2.00        4.00
A           B           C
1.00        2.00        3.00
1.00        2.00        2.00
1.00        2.00        3.00
A           B           C         D
1.00        2.00        3.00      5.00
4.00        5.00        5.00      1.00
EK_4
Zmodyfikuj program w ten sposób aby wyniki działania programu wyświetlone w konsoli zostały również zapisane w pliku wyniki.txt.

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
*/

#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int rows;
    int cols;
    double **matrix;
};

struct Array initArray(int rows, int cols)
{
    struct Array arr;
    arr.rows = rows;
    arr.cols = cols;
    arr.matrix = (double **)malloc(sizeof(double *) * rows);
    for (int i = 0; i < rows; i++)
    {
        arr.matrix[i] = (double *)malloc(sizeof(double) * cols);
    }
    return arr;
}

double detArray(struct Array arr)
{
    FILE *f = fopen("bdb_gr5.txt", "a+");
    if (f == NULL)
    {
        printf("blad w otwieraniu pliku.\n");
    }
    if (arr.rows != arr.cols)
    {
        printf("Macierz musi być kwadratowa\n");
        fprintf(f, "Macierz musi być kwadratowa\n");
        return 0;
    }

    for (int i = 0; i < arr.rows - 1; i++)
    {
        for (int j = i + 1; j < arr.rows; j++)
        {
            for (int k = i + 1; k < arr.rows; k++)
            {
                double factor = arr.matrix[j][i] / arr.matrix[i][i];
                arr.matrix[j][i] = 0;
                arr.matrix[j][k] = arr.matrix[j][k] - factor * arr.matrix[i][k];
            }
        }
    }

    double det = 1;
    for (int i = 0; i < arr.rows; i++)
    {
        det *= arr.matrix[i][i];
    }
    fprintf(f, "Wyznacznik macierzy: %.2f\n", det);
    fclose(f);
    return det;
}

void printArray(struct Array arr)
{
    FILE *f = fopen("bdb_gr5.txt", "a+");
    if (f == NULL)
    {
        printf("blad w otwieraniu pliku.\n");
    }
    char col = 'A';
    for (int i = 0; i < arr.cols; i++)
    {
        printf("%c\t\t", col);
        fprintf(f, "%c\t\t", col);
        col++;
    }
    printf("\n");
    fprintf(f, "\n");
    for (int i = 0; i < arr.rows; i++)
    {
        for (int j = 0; j < arr.cols; j++)
        {
            printf("%.2f\t", arr.matrix[i][j]);
            fprintf(f, "%.2f\t", arr.matrix[i][j]);
        }
        printf("\n");
        fprintf(f, "\n");
    }
    fclose(f);
}

int main()
{
    struct Array arr1 = initArray(3, 3);
    arr1.matrix[0][0] = 1;
    arr1.matrix[0][1] = 2;
    arr1.matrix[0][2] = 3;
    arr1.matrix[1][0] = 4;
    arr1.matrix[1][1] = 5;
    arr1.matrix[1][2] = 5;
    arr1.matrix[2][0] = 1;
    arr1.matrix[2][1] = 2;
    arr1.matrix[2][2] = 4;

    struct Array arr2 = initArray(3, 3);
    arr2.matrix[0][0] = 1;
    arr2.matrix[0][1] = 2;
    arr2.matrix[0][2] = 3;
    arr2.matrix[1][0] = 1;
    arr2.matrix[1][1] = 2;
    arr2.matrix[1][2] = 2;
    arr2.matrix[2][0] = 1;
    arr2.matrix[2][1] = 2;
    arr2.matrix[2][2] = 3;
    struct Array arr3 = initArray(2, 4);
    arr3.matrix[0][0] = 1;
    arr3.matrix[0][1] = 2;
    arr3.matrix[0][2] = 3;
    arr3.matrix[0][3] = 5;
    arr3.matrix[1][0] = 4;
    arr3.matrix[1][1] = 5;
    arr3.matrix[1][2] = 5;
    arr3.matrix[1][3] = 1;

    printf("Macierz 1:\n");
    printArray(arr1);
    printf("Wyznacznik macierzy 1: %.2f\n", detArray(arr1));

    printf("\nMacierz 2:\n");
    printArray(arr2);
    printf("Wyznacznik macierzy 2: %.2f\n", detArray(arr2));

    printf("\nMacierz 3:\n");
    printArray(arr3);
    printf("Wyznacznik macierzy 3: %.2f\n", detArray(arr3));
    return 0;
}