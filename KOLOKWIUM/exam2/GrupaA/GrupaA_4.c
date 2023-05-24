
#include <stdio.h>
#include <stdlib.h>



double **allocate_2d_array(int rows, int cols)
{
    double **array = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++)
    {
        array[i] = (double *)malloc(cols * sizeof(double));
    }
    return array;
}

void free_2d_array(double **array, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(array[i]);
    }
    free(array);
}

void print_matrix(double **array, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("| %.4f ", array[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

void sort_by_column(double **array, int rows, int cols, int column)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < rows; j++)
        {
            if (array[i][column] > array[j][column])
            {
                for (int k = 0; k < cols; k++)
                {
                    double temp = array[i][k];
                    array[i][k] = array[j][k];
                    array[j][k] = temp;
                }
            }
        }
    }
    printf("po sortowaniu z wyborem %d kolumny\n", column + 1);
}

int main()
{
    int rows = 4, cols = 3;
    double **matrix = allocate_2d_array(rows, cols);
    matrix[0][0] = 1;
    matrix[0][1] = 3;
    matrix[0][2] = 5;
    matrix[1][0] = 3;
    matrix[1][1] = 4;
    matrix[1][2] = 3;
    matrix[2][0] = 4;
    matrix[2][1] = 7;
    matrix[2][2] = 1;
    matrix[3][0] = 3;
    matrix[3][1] = 1;
    matrix[3][2] = 3;

    printf("Original column:\n");
    print_matrix(matrix, rows, cols);

    sort_by_column(matrix, rows, cols, 1);
    printf("Sorted by first column:\n");
    print_matrix(matrix, rows, cols);

    sort_by_column(matrix, rows, cols, 0);
    printf("Sorted by last column:\n");
    print_matrix(matrix, rows, cols);

    free_2d_array(matrix, rows);
    return 0;
}