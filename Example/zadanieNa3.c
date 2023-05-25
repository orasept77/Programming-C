#include <stdio.h>

// Funkcja realizująca mnożenie macierzy przez liczbę
void matrix_multiplication(float *matrix, int cols, int rows, float num) 
{
    int i, j;
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            matrix[i * cols + j] *= num;
        }
    }
}

// Funkcja wypisująca macierz
void print_matrix(float *matrix, int cols, int rows) 
{
    int i, j;
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("%.4f ", matrix[i * cols + j]);
        }
        printf("\n");
    }
}

int main() 
{
    // Wykorzystanie funkcji
    float matrix[3][2] = {{0.000, 0.100}, {1.000, 1.1000}, {2.000, 2.100}};

    print_matrix(&matrix, 2, 3);
    matrix_multiplication(&matrix, 2, 3, 2);
    printf("Macierz po mnozeniu przez %.1f\n", 2);
    print_matrix(&matrix, 2, 3);

    return 0;
}