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

kiedy możliwe jest mnożenie macierzy przez macierz, jeśli mnożenie nie jest możliwe wypisz odpowiedni komunikat i zwróć puste pola struktury Array(dwie macierze można pomnożyć tylko wtedy gdy liczba kolumn macierzy A jest równa liczbie wierszy macierzy B).
funkcja ma zwrócić nową macierz będącą wynikiem mnożenia tych macierzy
W metodzie main():

Za pomocą funkcji initArray() utwórz macierze o wymiarach 3x2 oraz 2x3 z mastępującymi wartościami
1.00    2.00    3.00
4.00    5.00	2.00
1.00	4.00
3.00	1.00
5.00	4.00
Wywołaj funkcję multiplyArrays() przekazując utworzone macierze
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
29.00	29.00*/

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
    int i;
    for (i = 0; i < rows; i++)
    {
        array.matrix[i] = (double *)malloc(cols * sizeof(double));
    }
    return array;
}

double detArray(struct Array array)
{
    if (array.rows != array.cols)
    {
        printf("Macierz nie jest kwadratowa, nie można obliczyć wyznacznika\n");
        return 0;
    }
    double det = 1;
    int i, j, k;
    for (i = 0; i < array.rows - 1; i++)
    {
        for (j = i + 1; j < array.rows; j++)
        {
            for (k = i + 1; k < array.rows; k++)
            {
                array.matrix[j][k] = array.matrix[j][k] - (array.matrix[j][i] / array.matrix[i][i]) * array.matrix[i][k];
            }
        }
    }
    for (i = 0; i < array.rows; i++)
    {
        det *= array.matrix[i][i];
    }
    return det;
}

void printArray(struct Array array)
{
    int i, j;
    for (i = 0; i < array.rows; i++)
    {
        for (j = 0; j < array.cols; j++)
        {
            printf("%.2f\t", array.matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    struct Array matrixA = initArray(3, 3);
    matrixA.matrix[0][0] = 1.00;
    matrixA.matrix[0][1] = 2.00;
    matrixA.matrix[0][2] = 3.00;
    matrixA.matrix[1][0] = 4.00;
    matrixA.matrix[1][1] = 5.00;
    matrixA.matrix[1][2] = 5.00;
    matrixA.matrix[2][0] = 1.00;
    matrixA.matrix[2][1] = 2.00;
    matrixA.matrix[2][2] = 4.00;

    struct Array matrixB = initArray(3, 3);
    matrixB.matrix[0][0] = 1.00;
    matrixB.matrix[0][1] = 2.00;
    matrixB.matrix[0][2] = 3.00;
    matrixB.matrix[1][0] = 1.00;
    matrixB.matrix[1][1] = 2.00;
    matrixB.matrix[1][2] = 2.00;
    matrixB.matrix[2][0] = 1.00;
    matrixB.matrix[2][1] = 2.00;
    matrixB.matrix[2][2] = 3.00;
    
    struct Array matrixC = initArray(2, 4);
    matrixC.matrix[0][0] = 1.00;
    matrixC.matrix[0][1] = 2.00;
    matrixC.matrix[0][2] = 3.00;
    matrixC.matrix[0][3] = 5.00;
    matrixC.matrix[1][0] = 4.00;
    matrixC.matrix[1][1] = 5.00;
    matrixC.matrix[1][2] = 5.00;
    matrixC.matrix[1][3] = 1.00;

    printf("Macierz A:\n");
    printArray(matrixA);
    double detA = detArray(matrixA);
    printf("det = %.2f\n\n", detA);

    printf("Macierz B:\n");
    printArray(matrixB);
    double detB = detArray(matrixB);
    printf("det = %.2f\n\n", detB);

    printf("Macierz C:\n");
    printArray(matrixC);
    double detC = detArray(matrixC);
    printf("det = %.2f\n\n", detC);

    // Zapis działania programu w pliku bdb_gr7.txt
    FILE *fp;
    fp = fopen("bdb_gr7.txt", "w");

    fprintf(fp, "Macierz A:\n");
    for (int i = 0; i < matrixA.rows; i++)
    {
        for (int j = 0; j < matrixA.cols; j++)
        {
            fprintf(fp, "%.2f\t", matrixA.matrix[i][j]);
        }
        fprintf(fp, "\n");
    }
    fprintf(fp, "det = %.2f\n\n", detA);

    fprintf(fp, "Macierz B:\n");
    for (int i = 0; i < matrixB.rows; i++)
    {
        for (int j = 0; j < matrixB.cols; j++)
        {
            fprintf(fp, "%.2f\t", matrixB.matrix[i][j]);
        }
        fprintf(fp, "\n");
    }
    fprintf(fp, "det = %.2f\n\n", detB);

    fprintf(fp, "Macierz C:\n");
    for (int i = 0; i < matrixC.rows; i++)
    {
        for (int j = 0; j < matrixC.cols; j++)
        {
            fprintf(fp, "%.2f\t", matrixC.matrix[i][j]);
        }
        fprintf(fp, "\n");
    }
    fprintf(fp, "det = %.2f\n\n", detC);
    fclose(fp);
    return 0;
}