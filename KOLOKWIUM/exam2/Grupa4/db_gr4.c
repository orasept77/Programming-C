/*Utwórz funkcję allocate_2d_array() która dynamicznie alokuje miejsce w pamięci na macierz liczb zmiennoprzecinkowych o rozmiarze przekazanym jako parametry funkcji. Funkcja zwraca wskaźnik na tę macierz.

Utwórz funkcję free_2d_array() która zwalnia miejsce w pamięci macierzy przekazanej jako parametr funkcji. W komentarzu opisz za co odpowiadają parametry funkcji jeśli ich nazwa tego nie sugeruje.

Utwórz funkcję print_matrix() która wypisuje w konsoli zawartość macierzy w następującej postaci:

| 0.0000      | 0.1000    |
| 1.0000      | 41.1005   |
| 2.0000      | 42.1000   |
Utwórz funkcję sort_by_column() która sortuje tablicę przekazaną jako argument funkcji malejąco według wartości w wybranej kolumnie. Kolumnę według której ma odbyć się sortowanie powinna być przekazana jako arguemtn funkcji. np.

przed sotrowaniem
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 4.0000    | 7.0000    | 1.0000    |
| 3.0000    | 1.0000    | 3.0000    |

po sortowaniu z wyborem 2 kolumny
| 4.0000    | 7.0000    | 1.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 1.0000    | 3.0000    | 5.0000    |
| 3.0000    | 1.0000    | 3.0000    |

po sortowaniu z wyborem 1 kolumny
| 4.0000    | 7.0000    | 1.0000    |
| 3.0000    | 1.0000    | 3.0000    |
| 3.0000    | 4.0000    | 3.0000    |
| 1.0000    | 3.0000    | 5.0000    |
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

float **allocate_2d_array(int rows, int cols)
{
    float **matrix = (float **)malloc(rows * sizeof(float *));
    int i;
    for (i = 0; i < rows; i++)
    {
        matrix[i] = (float *)malloc(cols * sizeof(float));
    }
    return matrix;
}

void free_2d_array(float **matrix, int rows)
{
    int i;
    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

void print_matrix(float **matrix, int rows, int cols)
{
    FILE *f = fopen("db_gr4.txt", "a+");
    if(f==NULL)
    {
        printf("blad\n");
    }
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("| %.4f ", matrix[i][j]);
            fprintf(f, "| %.4f ", matrix[i][j]);
        }
        printf("|\n");
        fprintf(f, "|\n");
    }
    printf("\n");
    fprintf(f, "\n");
    fclose(f);
}

void sort_by_column(float **matrix, int rows, int cols, int sort_col)
{
    FILE *f = fopen("db_gr4.txt", "a+");
    if(f==NULL)
    {
        printf("blad\n");
    }
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = i + 1; j < rows; j++)
        {
            if (matrix[i][sort_col] < matrix[j][sort_col])
            {
                int k;
                for (k = 0; k < cols; k++)
                {
                    float temp = matrix[i][k];
                    matrix[i][k] = matrix[j][k];
                    matrix[j][k] = temp;
                }
            }
        }
    }
    printf("po sortowaniu z wyborem %d kolumny\n", sort_col+1);
    fprintf(f, "po sortowaniu z wyborem %d kolumny\n", sort_col+1);
    fclose(f);
}

int main()
{
    float **matrix = allocate_2d_array(4, 3);
    matrix[0][0] = 1.0000;
    matrix[0][1] = 3.0000;
    matrix[0][2] = 5.0000;
    matrix[1][0] = 3.0000;
    matrix[1][1] = 4.0000;
    matrix[1][2] = 3.0000;
    matrix[2][0] = 4.0000;
    matrix[2][1] = 7.0000;
    matrix[2][2] = 1.0000;
    matrix[3][0] = 3.0000;
    matrix[3][1] = 1.0000;
    matrix[3][2] = 3.0000;
    printf("Original matrix:\n");
    print_matrix(matrix, 4, 3);
    printf("\n");

    sort_by_column(matrix, 4, 3, 0);
    print_matrix(matrix, 4, 3);
    printf("\n");

    sort_by_column(matrix, 4, 3, 2);
    print_matrix(matrix, 4, 3);
    printf("\n");

    free_2d_array(matrix, 4);
    return 0;
}