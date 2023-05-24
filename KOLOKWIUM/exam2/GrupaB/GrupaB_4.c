#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Funkcja do alokacji pamięci dla macierzy o rozmiarze rows x cols
double **allocate_2d_array(int rows, int cols)
{
    double **array = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++)
    {
        array[i] = (double *)malloc(cols * sizeof(double));
    }
    return array;
}

// Funkcja do zwolnienia pamięci macierzy o rozmiarze rows x cols
void free_2d_array(double **array, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(array[i]);
    }
    free(array);
}

// Funkcja do wypisania zawartości macierzy o rozmiarze rows x cols
void print_matrix(double **array, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("| %.2f\t  ", array[i][j]);
        }
        printf("|\n");
    }
}

// Funkcja do obliczenia odległości Euklidesowej pomiędzy dwoma wektorami o długości len
double euclidDistance(double *vector1, double *vector2, int len)
{
    double distance = 0;
    for (int i = 0; i < len; i++)
    {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(distance);
}

// Funkcja do obliczenia macierzy odległości pomiędzy kolejnymi wierszami macierzy array o rozmiarze rows x cols
double **distanceMatrix(double **array, int rows, int cols)
{
    double **distance_matrix = allocate_2d_array(rows, rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            distance_matrix[i][j] = euclidDistance(array[i], array[j], cols);
        }
    }
    return distance_matrix;
}

int main()
{
    int rows, cols, option;
    double **matrix = NULL;

    while (1)
    {
        printf("1. Wprowadz macierz\n");
        printf("2. Wyswietl macierz\n");
        printf("3. Macierz odleglosci\n");
        printf("4. Wyjscie\n");
        printf("Wybierz opcje: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Wprowadz liczbe wierszy: ");
            scanf("%d", &rows);
            printf("Wprowadz liczbe kolumn: ");
            scanf("%d", &cols);
            matrix = allocate_2d_array(rows, cols);
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    printf("tab[%d][%d] = ", i + 1, j + 1);
                    scanf("%lf", &matrix[i][j]);
                }
            }
            break;
        case 2:
            if (matrix == NULL)
            {
                printf("Nie wprowadzono jeszcze macierzy.\n");
            }
            else
            {
                printf("Macierz:\n");
                print_matrix(matrix, rows, cols);
            }
            break;
        case 3:
            if (matrix == NULL)
            {
                printf("Nie wprowadzono jeszcze macierzy.\n");
            }
            else
            {
                printf("Macierz odleglosci:\n");
                double **distance_matrix = distanceMatrix(matrix, rows, cols);
                print_matrix(distance_matrix, rows, rows);
                free_2d_array(distance_matrix, rows);
            }
            break;
        case 4:
            if (matrix != NULL)
            {
                printf("do widzenia ;)\n");
                free_2d_array(matrix, rows);
            }
            return 0;
        default:
            printf("Niepoprawna opcja.\n");
            break;
        }
    }
}