/*Dobry
EK_3
Napisz funkcję allocate_2d_array() która dynamicznie alokuje miejsce w pamięci na macierz liczb zmiennoprzecinkowych o rozmiarze przekazanym jako parametry funkcji. Funkcja zwraca wskaźnik na tę macierz.

Napisz funkcję free_2d_array() która zwalnia miejsce w pamięci macierzy przekazanej jako parametr funkcji. W komentarzu opisz za co odpowiadają parametry funkcji jeśli ich nazwa tego nie sugeruje.

Napisz funkcję print_matrix() która wypisuje w konsoli zawartość macierzy w następującej postaci:

| 0.00      | 0.10      |
| 1.00      | 4331.10   |
| 2.00      | 42.10     |
Utwórz funkcję euclidDistance() która przyjmuje dwie tablice o dowolnej długości jako parametry funkcji. Funkcja oblicza odległość Euklidesową na podstawie wartości tablic według wzoru:


Utwórz funkcję distnaceMatrix() która oblicza odległości pomiędzy kolejnymi wierszami macierzy przekazanej jako parametr funkcji i wpisuje do nowej macierzy obliczone wartości. np. mając macierz:

| 0.00      | 0.00      |
| 0.00      | 1.00      |
| 0.00      | 2.00      |
wynikiem działania będzie macierz 3x3 gdzie w komórce [1,1] jest odległośc pomiędzy 1 a 1 wierszem,w komórce [1,2] odległość pomiędzy 1 a 2 wierszem, w komórce ... w komórce [3,3] odległośc pomiędzy 3 a 3 wierszem:

| 0.00      | 1.00      | 2.00      |
| 1.00      | 0.00      | 1.00      |
| 2.00      | 1.00      | 0.00      |
W metodzie main() utwórz następujące menu:

1. Wprowadz macierz
2. Wyswietl macierz
3. Macierz odleglosci
4. Wyjscie
Po wybraniu opcji 1 program pyta użytkownika o rozmiar macierzy, alokuje miejsce na tę macierz a następnie użytkownik wypełnia macierz danymi.

Wybrano 1 - Wprowadz macierz.
Wprowadz liczbe wierszy: 2
Wprowadz luczbe kolumn: 2
tab[1][1] = 1
tab[1][2] = 3
tab[2][1] = 3
tab[2][2] = 2
Po wybraniu opcji 2 program wyświetla macierz za pomocą funkcji print_matrix()

Po wybraniu opcji 3 program wyświetla macierz odległości macierzy przechowywanej aktualnie w pamięci.

Program powinien działać aż do momentu wybrania opcji wyjście. Pamięć powinna być zwalniana w odpowiednim momencie.

EK_4
Zmodyfikuj program tak aby historia działań użytkownika została zapisana do pliku wyniki.txt.*/

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
    FILE *file = fopen("db_gr5.txt", "w");

    while (1)
    {
        printf("1. Wprowadz macierz\n");
        fprintf(file, "1. Wprowadz macierz\n");
        printf("2. Wyswietl macierz\n");
        fprintf(file, "2. Wyswietl macierz\n");
        printf("3. Macierz odleglosci\n");
        fprintf(file, "3. Macierz odleglosci\n");
        printf("4. Wyjscie\n");
        fprintf(file, "4. Wyjscie\n");
        printf("Wybierz opcje: ");
        fprintf(file, "Wybierz opcje: ");
        scanf("%d", &option);
        fprintf(file, "%d\n", option);
        switch (option)
        {
        case 1:
            fprintf(file, "Wybrano 1 - Wprowadz macierz.\n");
            printf("Wprowadz liczbe wierszy: ");
            fprintf(file, "Wprowadz liczbe wierszy: ");
            scanf("%d", &rows);
            fprintf(file, "%d\n", rows);
            printf("Wprowadz liczbe kolumn: ");
            fprintf(file, "Wprowadz liczbe kolumn: ");
            scanf("%d", &cols);
            fprintf(file, "%d\n", cols);
            matrix = allocate_2d_array(rows, cols);
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    printf("tab[%d][%d] = ", i + 1, j + 1);
                    fprintf(file, "tab[%d][%d] = ", i + 1, j + 1);
                    scanf("%lf", &matrix[i][j]);
                    fprintf(file, "%lf\n", matrix[i][j]);
                }
            }
            break;
        case 2:
            if (matrix == NULL)
            {
                printf("Nie wprowadzono jeszcze macierzy.\n");
                fprintf(file, "Nie wprowadzono jeszcze macierzy.\n");
            }
            else
            {
                fprintf(file, "Wybrano 2 - Wyswietl macierz.\n");
                printf("Macierz:\n");
                print_matrix(matrix, rows, cols);
                for (int i = 0; i < rows; i++)
                {
                    for (int j = 0; j < cols; j++)
                    {
                        fprintf(file, "| %.2f\t  ", matrix[i][j]);
                    }
                    fprintf(file, "|\n");
                }
                fprintf(file, "\n");
            }
            break;
        case 3:
            if (matrix == NULL)
            {
                printf("Nie wprowadzono jeszcze macierzy.\n");
                fprintf(file, "Nie wprowadzono jeszcze macierzy.\n");
            }
            else
            {
                fprintf(file, "Wybrano 3 - Macierz odleglosci.\n");
                printf("Macierz odleglosci:\n");
                fprintf(file, "Macierz odleglosci:\n");
                double **distance_matrix = distanceMatrix(matrix, rows, cols);
                print_matrix(distance_matrix, rows, rows);
                for (int i = 0; i < rows; i++)
                {
                    for (int j = 0; j < cols; j++)
                    {
                        fprintf(file, "| %.2f\t  ", distance_matrix[i][j]);
                    }
                    fprintf(file, "|\n");
                }
                fprintf(file, "\n");
                free_2d_array(distance_matrix, rows);
            }
            break;
        case 4:
            if (matrix != NULL)
            {
                printf("do widzenia ;)\n");
                fprintf(file, "do widzenia ;)\n");
                free_2d_array(matrix, rows);
            }
            return 0;
        default:
            printf("Niepoprawna opcja.\n");
            fprintf(file, "Niepoprawna opcja.\n");
            break;
        }
    }
    fclose(file);
}