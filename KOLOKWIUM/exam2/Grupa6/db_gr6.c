/*Dobry
EK_3
Utwórz funkcję allocate_2d_array() która dynamicznie alokuje miejsce w pamięci na macierz liczb zmiennoprzecinkowych o rozmiarze przekazanym jako parametry funkcji. Funkcja zwraca wskaźnik na tę macierz.

Utwórz funkcję free_2d_array() która zwalnia miejsce w pamięci macierzy przekazanej jako parametr funkcji. W komentarzu opisz za co odpowiadają parametry funkcji jeśli ich nazwa tego nie sugeruje.

Utwórz funkcję print_matrix() która wypisuje w konsoli zawartość macierzy w następującej postaci:

| 0.0000      | 0.1000    |
| 1.0000      | 41.1005   |
| 2.0000      | 42.1000   |
Utwórz funkcję sort_by_column() która sortuje tablicę przekazaną jako argument funkcji rosnąco według wartości w wybranej kolumnie. Kolumnę według której ma odbyć się sortowanie powinna być przekazana jako arguemtn funkcji. np.

przed sotrowaniem
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |
| 3.0000    | 1.0000    | 3.0000    |

po sortowaniu z wyborem 2 kolumny
| 3.0000    | 1.0000    | 3.0000    |
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |

po sortowaniu z wyborem 1 kolumny
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 3.0000    | 1.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |
Utwórz macierz za pomocą funkcji allocate_2d_array() a następnie wypełnij ją następującymi wartościami

| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |
| 3.0000    | 1.0000    | 3.0000    |
Przetestuj działanie funkcji sort_by_column() na następujących przypadkach:

Posortuj tablicę według pierwszej kolumny a następnie wypisz rezultat.
Posortuj tablicę według ostatniej kolumny a następnie wypisz rezultat.
EK_4
Zmodyfikuj program tak aby wynik działania programu został zapisany do pliku wyniki.txt*/

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
    FILE *f = fopen("db_gr6.txt", "a+");
    if (f == NULL)
    {
        printf("blad\n");
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("| %.4f ", array[i][j]);
            fprintf(f, "| %.4f ", array[i][j]);
        }
        printf("|\n");
        fprintf(f, "|\n");
    }
    printf("\n");
    fprintf(f, "\n");
    fclose(f);
}

void sort_by_column(double **array, int rows, int cols, int column)
{
    FILE *f = fopen("db_gr6.txt", "a+");
    if (f == NULL)
    {
        printf("blad\n");
    }
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
    fprintf(f, "po sortowaniu z wyborem %d kolumny\n", column + 1);
    fclose(f);
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

    sort_by_column(matrix, rows, cols, 0);
    printf("Sorted by first column:\n");
    print_matrix(matrix, rows, cols);

    sort_by_column(matrix, rows, cols, 2);
    printf("Sorted by last column:\n");
    print_matrix(matrix, rows, cols);

    free_2d_array(matrix, rows);
    return 0;
}