/*Dostateczny
EK_3
Napisz funkcję print_matrix() która wypisuje w konsoli zawartość macierzy liczb zmiennoprzecinkowych w następującej postaci:

| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
Funkcja może wypisać zawartość macierzy o dowolnym rozmiarze.

| 0.00 | 0.10 | 0.50 |
| 1.00 | 1.10 | 1.40 |
| 2.00 | 2.10 | 2.10 |
| 2.00 | 2.10 | 2.10 |
| 1.00 | 1.10 | 1.40 |
Napisz funkcję matrix_mean() która zwraca średnią wartość elementów macierzy.

EK_4
Przetestuj działanie funkcji na nastepujących macierzach:

| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
| 2.00 | 2.10 |
| 1.00 | 3.00 |
| 2.00 | 5.00 |
| 1.00 | 3.00 | 10.00 |
| 2.00 | 5.00 | 9.00  |
Napisz program który zapisze w pliku wyniki.txt macierz a pod nią średnią wartość z tej macierzy dla wszystkich testowanych przypadków np.:

>| 1.00 | 3.00 | 10.00 |
| 2.00 | 5.00 | 9.00  |

mean: 10.00*/

#include <stdio.h>
#include <stdlib.h>

// Funkcja do wypisywania zawartosci macierzy
void print_matrix(int rows, int cols, double matrix[rows][cols])
{
    FILE *fp = fopen("dst_gr1.txt", "a+");
    if (fp == NULL)
    {
        printf("xyz");
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("| %.2lf ", matrix[i][j]);
            fprintf(fp, "| %.2lf ", matrix[i][j]);
        }
        printf("|\n");
        fprintf(fp, "|\n");
    }
    printf("\n");
    fprintf(fp, "\n");
    fclose(fp);
}

// Funkcja do obliczania sredniej wartosci macierzy
double matrix_mean(int rows, int cols, double matrix[rows][cols])
{
    FILE *fp = fopen("dst_gr1.txt", "a+");
    if (fp == NULL)
    {
        printf("xyz");
    }
    double sum = 0.0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }
    printf("mean: %.2lf\n", sum / (rows * cols));
    fprintf(fp, "mean: %.2lf\n", sum / (rows * cols));
    fclose(fp);
    return sum / (rows * cols);
}

int main()
{
    // Macierz 1
    double matrix1[4][2] = {
        {0.00, 0.10},
        {1.00, 1.10},
        {2.00, 2.10},
        {2.00, 2.10}};

    // Macierz 2
    double matrix2[2][2] = {
        {1.00, 3.00},
        {2.00, 5.00}};

    // Macierz 3
    double matrix3[2][3] = {
        {1.00, 3.00, 10.00},
        {2.00, 5.00, 9.00}};

    // Wypisanie wszystkich macierzy
    print_matrix(4, 2, matrix1);
    double mean1 = matrix_mean(4, 2, matrix1);
    print_matrix(2, 2, matrix2);
    double mean2 = matrix_mean(2, 2, matrix2);
    print_matrix(2, 3, matrix3);
    double mean3 = matrix_mean(2, 3, matrix3);

    return 0;
}