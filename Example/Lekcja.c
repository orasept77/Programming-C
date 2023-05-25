#include <stdio.h>

#define COL 2
#define ROW 3

typedef struct abc
{
    int a;
}abc ;


void matrix_multiplication(float* tab,int col, int row, float x){
     for (int i = 0; i < col*row; i++)
    {
        tab[i]*=x;
    }
}

void print_matrix(float* tab, int col, int row){
    for (int i = 0; i < col*row; i++)
    {
        printf("%.2f\t", tab[i]);
        if((col-1) == (i%col) ){
            printf("\n");
        }
    }
}

int main(int argc, char const *argv[])
{
    float tab[3][2] = { {1.0,2.0},{2.0,3.0}, {3.0,3.0} };

    print_matrix(tab, 2,3);

    matrix_multiplication(tab,2,3,4);

    print_matrix(tab, 2,3);

     // save to file
    FILE *f = fopen("txt1.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return -1;
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            fprintf(f, "%.4f ", tab[i][j]);
        fprintf(f, "\n");
    }
    fclose(f);

    return 0;
}