/*Dobry
EK_3
Napisz funkcję print_matrix() która wypisuje w konsoli zawartość macierzy(macierz powinna być alokowana dynamicznie z użyciem odpowiednich funkcji) liczb zmiennoprzecinkowych w następującej postaci:

| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
Napisz funkcję free_matrix() która zwalnia dynamicznie przydzieloną pamięć do przechowania macierzy.

Napisz funkcję duplicate_row() która duplikuje wybrany wiersz n razy i podmienia macierz na nową - większą np. duplikując 2 wiersz 2 razy otrzymamy:

| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |


| 0.00 | 0.10 |
| 1.00 | 1.10 |
| 1.00 | 1.10 |
| 2.00 | 2.10 |
EK_4
Napisz funkcję main która przetestuje działanie zaimplementowanych wcześniej funkcji i wyniki zapisze w pliku wyniki.txt*/

#include <stdio.h>
#include <stdlib.h>

void print_matrix(double **matrix, int rows, int cols) {
    FILE *f = fopen("db_gr1.txt", "a+");
    if(f == NULL)
    {
        printf("blad przy otwieraniu\n");
    }
    int i, j;
    for (i=0; i<rows; i++) {
        for (j=0; j<cols; j++) {
            printf("| %.2f ", matrix[i][j]);
            fprintf(f, "| %.2f ", matrix[i][j]);
        }
        printf("|\n");
        fprintf(f, "|\n");
    }
    printf("\n");
    fprintf(f, "\n");
    fclose(f);
}

void free_matrix(double **matrix, int rows) {
    int i;
    for (i=0; i<rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

double** duplicate_row(double **matrix, int rows, int cols, int row, int times) {
    double **new_matrix;
    int i, j;
    
    new_matrix = (double **) malloc((rows + times)*sizeof(double *));
    for (i=0; i<rows+times; i++) {
        new_matrix[i] = (double *) malloc(cols*sizeof(double));
    }
    
    for (i=0; i<rows+times; i++) {
        for (j=0; j<cols; j++) {
            if (i < row) {
                new_matrix[i][j] = matrix[i][j];
            } else if (i < row + times) {
                new_matrix[i][j] = matrix[row][j];
            } else {
                new_matrix[i][j] = matrix[i - times][j];
            }
        }
    }
    
    free_matrix(matrix, rows);
    return new_matrix;
}

int main() {
    double **matrix;
    double **matrix1;
    double **matrix2;
    int rows = 3, cols = 2, times=1;
    int i, j;
    
    matrix = (double **) malloc(rows*sizeof(double *));
    for (i=0; i<rows; i++) {
        matrix[i] = (double *) malloc(cols*sizeof(double));
    }
    
    for (i=0; i<rows; i++) {
        for (j=0; j<cols; j++) {
            matrix[i][j] = i + 0.1*j;
        }
    } // można zapisać tak, albo po kolei matrix[0][0]... matrix[3][2]
    
    printf("Macierz przed duplikacją:\n");
    print_matrix(matrix, rows, cols);
    
    matrix = duplicate_row(matrix, rows, cols, 1, times);
    
    printf("Macierz po duplikacji:\n");
    print_matrix(matrix, rows+times, cols);
    
    free_matrix(matrix, rows);
    
    return 0;
}