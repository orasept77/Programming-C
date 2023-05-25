#include <stdlib.h>
#include <stdio.h>

void matrix_multiplication(double **tab, int row, int col, double multiplier)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            tab[i][j] *= multiplier;
        }
    }
}

// Wypisanie tablicy o zdefiniowanym rozmiarze(drugi rozmiar musi być zdefiniwoany jako stała)
// zapis jest równoważny z (*tab)[2]
void print_matrixV1(double tab[][2], int row, int col)
{
    printf("print_matrixV1\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%lf ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print_matrixV2(double *tab, int row, int col)
{
    printf("print_matrixV2\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%lf ", tab[i * col + j]);
        }
        printf("\n");
    }
    printf("\n");
}

// zapis jest równoważny z *tab[]
void print_matrixV3(double **tab, int row, int col)
{
    printf("print_matrixV3\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%lf ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void print_pointers(double **tab, int row, int col)
{
    printf("print_matrixV3\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%p ", &tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    const int row = 3;
    const int col = 2;
    double tab[3][2] = {{1.0, 1.0}, {2.0, 2.0}, {3.0, 3.0}};

    // matrix_multiplication(tab, 3, 2, 2);

    print_matrixV1(tab, 3, 2);

    print_matrixV2(&tab[0][0], 3, 2);

    // +------+
    // |      | pointer to pointer to T 
    // +------+
    //     |
    //     v
    // +------+------+------+
    // |      |      |      | pointers to T 
    // +------+------+------+
    //     |      |      |     +-------------+-------------+-------------+
    //     |      |      +---->|             |             |             | elements of type T
    //     |      |            +-------------+-------------+-------------+ 
    //     |      |     +-------------+-------------+
    //     |      +---->|             |             | elements of type T
    //     |            +-------------+-------------+ 
    //     |
    //     v
    // +-------------+-------------+-------------+-------------+
    // |             |             |             |             | elements of type T
    // +-------------+-------------+-------------+-------------+ 
    double **tab2;
    tab2 = malloc(row * sizeof(double *));
    for (int i = 0; i < 3; i++)
    {
        tab2[i] = calloc(col,sizeof(double));
    }

    // pzypisujemy wartości
    tab2[0][0] = 0.0;
    tab2[0][1] = 0.1;
    tab2[1][0] = 1.0;
    tab2[1][1] = 1.1;
    tab2[2][0] = 2.0;
    tab2[2][1] = 2.1;

    // dla 3d array
    int ***tab3d;
    tab3d = malloc(2*sizeof(double **));
    for (int i = 0; i < 2; i++)
    {
        tab3d[i] = malloc(2*sizeof(double *));
        for (size_t j = 0; j < 2; j++)
        {
            tab3d[i][j] = calloc(2,sizeof(double));
        }
        
    }
    
    print_matrixV3(tab2, 3, 2);
    
    print_pointers(tab2,3,2);
    
    print_matrixV1(tab,3,2);
    
    printf("%i", sizeof(tab2));
    return 0;
}
