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

struct Array
{
    int rows;
    int columns;
    double **matrix;
};

struct Array initArray(int rows, int columns)
{
    struct Array array;
    array.rows = rows;
    array.columns = columns;
    array.matrix = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++)
    {
        array.matrix[i] = (double *)malloc(columns * sizeof(double));
    }
    return array;
}

void printArray(struct Array array)
{
    for (int i = 0; i < array.rows; i++)
    {
        for (int j = 0; j < array.columns; j++)
        {
            printf("%.2f\t", array.matrix[i][j]);
        }
        printf("\n");
    }
}

void fillArray(struct Array array)
{
    for (int i = 0; i < array.rows; i++)
    {
        for (int j = 0; j < array.columns; j++)
        {
            printf("Array[%d][%d] = ", i, j);
            scanf("%lf", &array.matrix[i][j]);
        }
    }
}

struct Array multiplyArrays(struct Array array1, struct Array array2)
{
    if (array1.columns != array2.rows)
    {
        printf("Cannot multiply matrices with these dimensions\n");
        struct Array empty = initArray(0, 0);
        return empty;
    }
    struct Array result = initArray(array1.rows, array2.columns);
    for (int i = 0; i < result.rows; i++)
    {
        for (int j = 0; j < result.columns; j++)
        {
            double sum = 0;
            for (int k = 0; k < array1.columns; k++)
            {
                sum += array1.matrix[i][k] * array2.matrix[k][j];
            }
            result.matrix[i][j] = sum;
        }
    }
    return result;
}

int main()
{
    struct Array array1 = initArray(2, 3);
    struct Array array2 = initArray(3, 2);
    printf("Fill first array\n");
    fillArray(array1);
    printf("\nFill second array\n");
    fillArray(array2);
    struct Array result = multiplyArrays(array1, array2);
    if (result.rows == 0 && result.columns == 0)
    {
        return 0;
    }
    printf("\nResulting array:\n");
    printArray(result);
    FILE *file = fopen("bdb_gr1.txt", "a+");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    for (int i = 0; i < array1.rows; i++)
    {
        for (int j = 0; j < array1.columns; j++)
        {
            fprintf(file, "%.2f\t", array1.matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    fprintf(file, "\nX\n\n");
    for (int i = 0; i < array2.rows; i++)
    {
        for (int j = 0; j < array2.columns; j++)
        {
            fprintf(file, "%.2f\t", array2.matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    fprintf(file, "\n=\n\n");
    for (int i = 0; i < result.rows; i++)
    {
        for (int j = 0; j < result.columns; j++)
        {
            fprintf(file, "%.2f\t", result.matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    fclose(file);
    return 0;
}