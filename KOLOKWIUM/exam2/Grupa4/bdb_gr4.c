/*Bardzo dobry
EK_3
Utwórz strukturę Array przechowującą macierz. Struktura ma zawierać również dane niezbędne do odczytania wartości komórek macierzy.

Utwórz funkcję initArray() która zwraca instancję struktury Array. Funkcja tworzy nową instancję struktury Array i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

Utwórz funkcję printArray() która przyjmuje jako parametr strukturę Array. Funkcja wypisuje zawartość macierzy w następującym formacie:

2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
Utwórz funkcję multiplyArrays() przyjmującą dwie instancje struktury Array. W ciele funkcji zaimplementuj mnożenie macierzy według wzoru:


Uwzględnij nastepujące aspekty:

kiedy możliwe jest mnożenie macierzy przez macierz, jeśli mnożenie nie jest możliwe wypisz odpowiedni komunikat i zwróć macierz jednoelementową z wartością 0 Array(dwie macierze można pomnożyć tylko wtedy gdy liczba kolumn macierzy A jest równa liczbie wierszy macierzy B).
funkcja ma zwrócić nową macierz będącą wynikiem mnożenia tych macierzy
W metodzie main():

Za pomocą funkcji initArray() utwórz macierze o wymiarach 2x3, 3x2, 3x3 oraz 4x2 z mastępującymi wartościami
1.00    2.00    3.00
4.00    5.00	2.00
1.00	4.00
3.00	1.00
5.00	4.00
1.00    2.00    3.00
4.00    5.00	2.00
4.00    5.00	2.00
1.00    2.00    3.00    4.00
4.00    5.00	2.00    1.00
Wywołaj funkcję multiplyArrays() mnożąc:
macierz 2x3 z 3x2
macierz 2x3 z 3x3
macierz 2x3 z 2x4
Wypisz wynik mnożenia macierzy w konsoli (funkcja printArray())
EK_4
Zmodyfikuj program aby wynik mnożenia macierzy został zapisany w pliku tekstowym wyniki.txt w postaci:

>1.00    2.00    3.00
4.00    5.00	2.00
X
1.00	4.00
3.00	1.00
5.00	4.00
=
22.00	18.00
29.00	29.00

1.00    2.00    3.00
4.00    5.00	2.00
X
1.00    2.00    3.00
4.00    5.00	2.00
4.00    5.00	2.00
=
21.00   27.00   13.00
32.00   43.00   26.00

1.00    2.00    3.00
4.00    5.00	2.00
X
1.00    2.00    3.00    4.00
4.00    5.00	2.00    1.00
=
0.00*/

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
    struct Array array;
    array.rows = rows;
    array.cols = cols;

    array.matrix = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++)
    {
        array.matrix[i] = (double *)malloc(cols * sizeof(double));
    }

    return array;
}

void printArray(struct Array array)
{
    for (int i = 0; i < array.rows; i++)
    {
        for (int j = 0; j < array.cols; j++)
        {
            printf("%.2f\t", array.matrix[i][j]);
        }
        printf("\n");
    }
}

struct Array multiplyArrays(struct Array array1, struct Array array2)
{
    if (array1.cols != array2.rows)
    {
        printf("Nie można pomnożyć tych macierzy. Liczba kolumn macierzy pierwszej musi być równa liczbie wierszy macierzy drugiej.\n");
        struct Array array = initArray(1, 1);
        array.matrix[0][0] = 0;
        return array;
    }

    struct Array result = initArray(array1.rows, array2.cols);
    for (int i = 0; i < array1.rows; i++)
    {
        for (int j = 0; j < array2.cols; j++)
        {
            result.matrix[i][j] = 0;
            for (int k = 0; k < array1.cols; k++)
            {
                result.matrix[i][j] += array1.matrix[i][k] * array2.matrix[k][j];
            }
        }
    }

    return result;
}

int main()
{
    struct Array matrix1 = initArray(2, 3);
    matrix1.matrix[0][0] = 1.00;
    matrix1.matrix[0][1] = 2.00;
    matrix1.matrix[0][2] = 3.00;
    matrix1.matrix[1][0] = 4.00;
    matrix1.matrix[1][1] = 5.00;
    matrix1.matrix[1][2] = 2.00;

    struct Array matrix2 = initArray(3, 2);
    matrix2.matrix[0][0] = 1.00;
    matrix2.matrix[0][1] = 4.00;
    matrix2.matrix[1][0] = 3.00;
    matrix2.matrix[1][1] = 1.00;
    matrix2.matrix[2][0] = 5.00;
    matrix2.matrix[2][1] = 4.00;

    struct Array matrix3 = initArray(3, 3);
    matrix3.matrix[0][0] = 1.00;
    matrix3.matrix[0][1] = 2.00;
    matrix3.matrix[0][2] = 3.00;
    matrix3.matrix[1][0] = 4.00;
    matrix3.matrix[1][1] = 5.00;
    matrix3.matrix[1][2] = 2.00;
    matrix3.matrix[2][0] = 4.00;
    matrix3.matrix[2][1] = 5.00;
    matrix3.matrix[2][2] = 2.00;

    struct Array matrix4 = initArray(4, 2);
    matrix4.matrix[0][0] = 1.00;
    matrix4.matrix[0][1] = 2.00;
    matrix4.matrix[1][0] = 3.00;
    matrix4.matrix[1][1] = 4.00;
    matrix4.matrix[2][0] = 5.00;
    matrix4.matrix[2][1] = 1.00;
    matrix4.matrix[3][0] = 2.00;
    matrix4.matrix[3][1] = 3.00;

    struct Array result1 = multiplyArrays(matrix1, matrix2);
    printf("\n");
    printArray(matrix1);
    printf("X\n");
    printArray(matrix2);
    printf("=\n");
    printArray(result1);

    struct Array result2 = multiplyArrays(matrix1, matrix3);
    printf("\n");
    printArray(matrix1);
    printf("X\n");
    printArray(matrix3);
    printf("=\n");
    printArray(result2);

    struct Array result3 = multiplyArrays(matrix1, matrix4);
    printf("\n");
    printArray(matrix1);
    printf("X\n");
    printArray(matrix4);
    printf("=\n");
    printArray(result3);

    FILE *fp = fopen("bdb_gr4.txt", "w");
    if (fp == NULL)
    {
        printf("Nie można otworzyć pliku bdb_gr4.txt\n");
        return 1;
    }

    fprintf(fp, "%.2f\t%.2f\t%.2f\n%.2f\t%.2f\t%.2f\nX\n%.2f\t%.2f\n%.2f\t%.2f\n%.2f\t%.2f\n=\n%.2f\t%.2f\n%.2f\t%.2f\n",
            matrix1.matrix[0][0], matrix1.matrix[0][1], matrix1.matrix[0][2], matrix1.matrix[1][0], matrix1.matrix[1][1], matrix1.matrix[1][2],
            matrix2.matrix[0][0], matrix2.matrix[0][1], matrix2.matrix[1][0], matrix2.matrix[1][1], matrix2.matrix[2][0], matrix2.matrix[2][1], result1.matrix[0][0], result1.matrix[0][1], result1.matrix[1][0], result1.matrix[1][1]);
    fprintf(fp, "\n%.2f\t%.2f\t%.2f\n%.2f\t%.2f\t%.2f\nX\n%.2f\t%.2f\t%.2f\n%.2f\t%.2f\t%.2f\n%.2f\t%.2f\t%.2f\n=\n%.2f\t%.2f\t%.2f\n%.2f\t%.2f\t%.2f\n",
            matrix1.matrix[0][0], matrix1.matrix[0][1], matrix1.matrix[0][2], matrix1.matrix[1][0], matrix1.matrix[1][1], matrix1.matrix[1][2],
            matrix3.matrix[0][0], matrix3.matrix[0][1], matrix3.matrix[0][2], matrix3.matrix[1][0], matrix3.matrix[1][1], matrix3.matrix[1][2], matrix3.matrix[2][0], matrix3.matrix[2][1], matrix3.matrix[2][2],
            result2.matrix[0][0], result2.matrix[0][1], result2.matrix[0][2], result2.matrix[1][0], result2.matrix[1][1], result2.matrix[1][2]);
    fprintf(fp, "\n%.2f\t%.2f\t%.2f\n%.2f\t%.2f\t%.2f\nX\n%.2f\t%.2f\t%.2f\t%.2f\n%.2f\t%.2f\t%.2f\t%.2f\n=\n%.2f\t%.2f\n%.2f\t%.2f\n",
            matrix1.matrix[0][0], matrix1.matrix[0][1], matrix1.matrix[0][2], matrix1.matrix[1][0], matrix1.matrix[1][1], matrix1.matrix[1][2],
            matrix4.matrix[0][0], matrix4.matrix[0][1], matrix4.matrix[1][0], matrix4.matrix[1][1], matrix4.matrix[2][0], matrix4.matrix[2][1], matrix4.matrix[3][0], matrix4.matrix[3][1],
            result3.matrix[0][0], result3.matrix[0][1], result3.matrix[1][0], result3.matrix[1][1]);
    fclose(fp);
    return 0;
}