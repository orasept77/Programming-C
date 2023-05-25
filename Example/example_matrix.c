#include <stdio.h>



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
    float tab[3][2] = {{1,2},{2,3}, {3,3}};

    print_matrix(tab, 2,3);

    matrix_multiplication(tab,2,3,4);

    print_matrix(tab, 2,3);
    return 0;
}
