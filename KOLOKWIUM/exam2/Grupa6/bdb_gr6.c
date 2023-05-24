/*Bardzo dobry
EK_3
Utwórz strukturę Array przechowującą macierz. Struktura ma zawierać również dane niezbędne do odczytania wartości komórek macierzy.

Utwórz funkcję initArray() która zwraca instancję struktury Array. Funkcja tworzy nową instancję struktury Array i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

Utwórz funkcję printArray() która przyjmuje jako parametr strukturę Array. Funkcja wypisuje zawartość macierzy w następującym formacie(kolumny podpisane kolejnymi lierami alfabetu):

A           B           C
2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
Utwórz funkcję multiplyArrays() przyjmującą dwie instancje struktury Array. W ciele funkcji zaimplementuj mnożenie macierzy według wzoru:


Uwzględnij nastepujące aspekty:

kiedy możliwe jest mnożenie macierzy przez macierz, jeśli mnożenie nie jest możliwe wypisz odpowiedni komunikat i zwróć macierz jednoelementową z wartością 0 Array(dwie macierze można pomnożyć tylko wtedy gdy liczba kolumn macierzy A jest równa liczbie wierszy macierzy B).
funkcja ma zwrócić nową macierz będącą wynikiem mnożenia tych macierzy
W metodzie main():

Za pomocą funkcji initArray() utwórz macierze o wymiarach 2x3, 3x2, 3x3 oraz 4x2 z mastępującymi wartościami
A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
A       B
1.00	4.00
3.00	1.00
5.00	4.00
A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
4.00    5.00	2.00
A       B       C       D
1.00    2.00    3.00    4.00
4.00    5.00	2.00    1.00
Wywołaj funkcję multiplyArrays() mnożąc:
macierz 2x3 z 3x2
macierz 2x3 z 3x3
macierz 2x3 z 2x4
Wypisz wynik mnożenia macierzy w konsoli (funkcja printArray())
EK_4
Zmodyfikuj program aby wynik mnożenia macierzy został zapisany w pliku tekstowym wyniki.txt w postaci:

>A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
X
A       B
1.00	4.00
3.00	1.00
5.00	4.00
=
A       B
22.00	18.00
29.00	29.00

A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
X
A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
4.00    5.00	2.00
=
A       B       C
21.00   27.00   13.00
32.00   43.00   26.00

A       B       C
1.00    2.00    3.00
4.00    5.00	2.00
X
A       B       C       D
1.00    2.00    3.00    4.00
4.00    5.00	2.00    1.00
=
0.00*/

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
    struct Array newArray;
    newArray.rows = rows;
    newArray.columns = columns;
    newArray.matrix = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++)
    {
        newArray.matrix[i] = (double *)malloc(columns * sizeof(double));
    }
    return newArray;
}

void printArray(struct Array array)
{
    for (int i = 0; i < array.rows; i++)
    {
        for (int j = 0; j < array.columns; j++)
        {
            printf("%.2f ", array.matrix[i][j]);
        }
        printf("\n");
    }
}

struct Array multiplyArrays(struct Array array1, struct Array array2)
{
    if (array1.columns != array2.rows)
    {
        printf("Nie można pomnożyć macierzy - liczba kolumn pierwszej macierzy różna od liczby wierszy drugiej macierzy.");
        return initArray(1, 1);
    }
    struct Array result = initArray(array1.rows, array2.columns);
    for (int i = 0; i < result.rows; i++)
    {
        for (int j = 0; j < result.columns; j++)
        {
            result.matrix[i][j] = 0;
            for (int k = 0; k < array1.columns; k++)
            {
                result.matrix[i][j] += array1.matrix[i][k] * array2.matrix[k][j];
            }
        }
    }
    return result;
}

int main()
{
    struct Array array1 = initArray(2, 3);
    array1.matrix[0][0] = 1;
    array1.matrix[0][1] = 2;
    array1.matrix[0][2] = 3;
    array1.matrix[1][0] = 4;
    array1.matrix[1][1] = 5;
    array1.matrix[1][2] = 2;
    struct Array array2 = initArray(3, 2);
    array2.matrix[0][0] = 1;
    array2.matrix[0][1] = 4;
    array2.matrix[1][0] = 3;
    array2.matrix[1][1] = 1;
    array2.matrix[2][0] = 5;
    array2.matrix[2][1] = 4;
    struct Array array3 = initArray(3, 3);
    array3.matrix[0][0] = 1;
    array3.matrix[0][1] = 2;
    array3.matrix[0][2] = 3;
    array3.matrix[1][0] = 4;
    array3.matrix[1][1] = 5;
    array3.matrix[1][2] = 2;
    array3.matrix[2][0] = 4;
    array3.matrix[2][1] = 5;
    array3.matrix[2][2] = 2;
    struct Array array4 = initArray(4, 2);
    array4.matrix[0][0] = 1;
    array4.matrix[0][1] = 2;
    array4.matrix[1][0] = 3;
    array4.matrix[1][1] = 4;
    array4.matrix[2][0] = 5;
    array4.matrix[2][1] = 2;
    array4.matrix[3][0] = 1;
    array4.matrix[3][1] = 4;
    printf("Macierz 1:\n");
    printArray(array1);
    printf("Macierz 2:\n");
    printArray(array2);
    printf("Wynik mnożenia:\n");
    struct Array result1 = multiplyArrays(array1, array2);
    printArray(result1);

    printf("Macierz 1:\n");
    printArray(array1);
    printf("Macierz 3:\n");
    printArray(array3);
    printf("Wynik mnożenia:\n");
    struct Array result2 = multiplyArrays(array1, array3);
    printArray(result2);

    printf("Macierz 1:\n");
    printArray(array1);
    printf("Macierz 4:\n");
    printArray(array4);
    printf("Wynik mnożenia:\n");
    struct Array result3 = multiplyArrays(array1, array4);
    printArray(result3);

    // zapis do pliku
    FILE *file = fopen("bdb_gr6.txt", "w");
    if (file != NULL)
    {
        fprintf(file, "Macierz 1:\n");
        for (int i = 0; i < array1.rows; i++)
        {
            for (int j = 0; j < array1.columns; j++)
            {
                fprintf(file, "%.2f ", array1.matrix[i][j]);
            }
            fprintf(file, "\n");
        }
        fprintf(file, "X\n");
        fprintf(file, "Macierz 2:\n");
        for (int i = 0; i < array2.rows; i++)
        {
            for (int j = 0; j < array2.columns; j++)
            {
                fprintf(file, "%.2f ", array2.matrix[i][j]);
            }
            fprintf(file, "\n");
        }
        fprintf(file, "=\n");
        fprintf(file, "Wynik mnożenia:\n");
        for (int i = 0; i < result1.rows; i++)
        {
            for (int j = 0; j < result1.columns; j++)
            {
                fprintf(file, "%.2f ", result1.matrix[i][j]);
            }
            fprintf(file, "\n");
        }
    }
    fclose(file);
    return 0;
}