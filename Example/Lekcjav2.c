#include <stdio.h>
#include <stdlib.h>

typedef struct tablica
{
    int row;
    int col;
    float **tab;
} tablica;

void matrix_multiplication(float **tab, unsigned int col, int row, float x)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tab[i][j] *= x; // tab[i] = tab[i] * x
        }
    }
}

int print_matrix(tablica x)
{

    for (int i = 0; i < x.row; i++)
    {
        for (int j = 0; j < x.col; j++)
        {
            printf("%f\t", x.tab[i][j]);
        }
        printf("\n");
    }
}

tablica createMatrix(int row, int col)
{
    tablica x;
    x.col = col;
    x.row = row;
    float **tab3;
    tab3 = calloc(4, sizeof(float *));
    for (int i = 0; i < 4; i++)
    {
        tab3[i] = calloc(2, sizeof(float));
    }
    x.tab = tab3;
}

int main(int argc, char const *argv[])
{
    tablica asd = createMatrix(4,2);

    int row = 4;
    int col = 2;
    float tab[4][2] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    float tab2[4][2] = {1, 2, 2, 3, 3, 4, 4, 5};

    float **tab3;
    tab3 = calloc(4, sizeof(float *));
    for (int i = 0; i < 4; i++)
    {
        tab3[i] = calloc(2, sizeof(float));
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("podaj wartosc tab[%d][%d]", i, j);
            float val;
            scanf("%f", &val);
            tab3[i][j] = val;
        }
    }

    int wynik = print_matrix(asd);

    FILE *f = fopen("lekcja.txt","w+");
    {
        if(f == NULL)
        {
            printf("blad");
        }
    }
    fprintf(f,"%d", print_matrix(asd));
    fclose(f);
    return 0;
}