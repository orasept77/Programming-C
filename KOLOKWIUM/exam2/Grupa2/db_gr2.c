/*Dobry
EK_3
Napisz funkcję print_matrix() która wypisuje w konsoli zawartość macierzy(macierz powinna być alokowana dynamicznie z użyciem odpowiednich funkcji) liczb zmiennoprzecinkowych w następującej postaci:

| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
Utwórz funkcję euclidDistance() która przyjmuje dwie tablice o dowolnej długości jako parametry funkcji. Funkcja oblicza odległość Euklidesową pomiędzy punktami określonymi przez wartości tablic według wzoru:


A następnie zwraca obliczoną wartość.

Utwórz zmienne przechowujące następujące macierze testowe:

| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
| 0.00 | 0.10 | 5.10 |
| 1.00 | 1.10 | 8.10 |
| 2.00 | 2.10 | 1.10 |
Napisz funkcję calculate_distances() która oblicza i wypisuje odległości pomiędzy wszystkimi wierszami macierzy przekazanej jako argument funkcji tj. pomiędzy 1 i 1 wierszem, pomiędzy 1 i 2 wierszem, pomiędzy 1 i 3 wierszem .... poiędzy 3 i 3 wierszem.

przykładowy rezultat:

row 1 row 1 = 0.00
row 1 row 2 = 3.32
...
row 3 row 3 = 3.5.2
Wywołaj funkcję calculate_distances() dla każdej z testowych macierzy tak aby uzyskać wyniki.

EK_4
Zmodyfikuj program tak aby obliczone wyniki zostały zapisane do pliku wyniki.txt.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_matrix(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("| %.2lf ", matrix[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

double euclidDistance(double* arr1, double* arr2, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pow(arr1[i] - arr2[i], 2);
    }
    return sqrt(sum);
}

void free_matrix(double **matrix, int rows) {
    int i;
    for (i=0; i<rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void calculate_distances(double** matrix, int rows, int cols) {
    FILE *f = fopen("db_gr2.txt", "a+");
    if(f == NULL)
    {
        printf("blad\n");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            /*if (i == j) {
                printf("0\n"); //zawsze bedzie 0 przy odejmowaniu tej samej liczby od siebie
            }*/
            printf("row %d row %d = %.2lf\n", i+1, j+1, euclidDistance(matrix[i], matrix[j], cols));
            fprintf(f, "row %d row %d = %.2lf\n", i+1, j+1, euclidDistance(matrix[i], matrix[j], cols));
        }
    }
    fprintf(f, "\n");
    fclose(f);
}

int main() {
    int rows = 3;
    int cols = 2;
    double** matrix1 = (double**) malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++) {
        matrix1[i] = (double*) malloc(cols * sizeof(double));
    }
    matrix1[0][0] = 0.00;
    matrix1[0][1] = 0.10;
    matrix1[1][0] = 1.00;
    matrix1[1][1] = 1.10;
    matrix1[2][0] = 2.00;
    matrix1[2][1] = 2.10;

    printf("macierz1:\n");
    print_matrix(matrix1, rows, cols);

    calculate_distances(matrix1, rows, cols);

    free_matrix(matrix1, rows);

    rows = 3;
    cols = 3;
    double** matrix2 = (double**) malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++) {
        matrix2[i] = (double*) malloc(cols * sizeof(double));
    }
    matrix2[0][0] = 0.00;
    matrix2[0][1] = 0.10;
    matrix2[0][2] = 5.10;
    matrix2[1][0] = 1.00;
    matrix2[1][1] = 1.10;
    matrix2[1][2] = 8.10;
    matrix2[2][0] = 2.00;
    matrix2[2][1] = 2.10;
    matrix2[2][2] = 1.10;

    printf("macierz2:\n");
    print_matrix(matrix2, rows, cols);
    calculate_distances(matrix2, rows, cols);

    free_matrix(matrix2, rows);

    return 0;
}