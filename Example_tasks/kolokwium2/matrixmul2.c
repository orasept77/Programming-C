#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Array
{
    unsigned int rows;
    unsigned int cols;
    double **arr;
} Array;

Array defArray(int rows, int cols)
{
    double **tab2;
    tab2 = malloc(rows * sizeof(double *));
    for (int i = 0; i < 3; i++)
    {
        tab2[i] = calloc(cols, sizeof(double));
    }
    Array x = {rows, cols, tab2};
    return x;
}

void freeArray(Array x)
{
    for (int i = 0; i < 10; ++i)
    {
        free(x.arr[i]);
    }
    free(x.arr);
}

Array multiply_array(Array a, Array b){
    if (a.cols != b.rows)
    {
        Array x;
        return x;
    }
    
    Array result = defArray(a.rows, b.cols);
    for (int i = 0; i < a.rows; ++i) {
        for (int j = 0; j < b.cols; ++j) {
            for (int k = 0; k < a.cols; ++k) {
                result.arr[i][j] += a.arr[i][k] * b.arr[k][j];
            }
        }
    }
    return result;
}

void print_matrix(Array a)
{
    for (int i = 0; i < a.rows; i++)
    {
        for (int j = 0; j < a.cols; j++)
        {
            printf("%lf\t", a.arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void fillArray(Array a){
    for (size_t i = 0; i < a.rows; i++)
    {
        printf("row %d\n", i+1);
        for (size_t j = 0; j < a.cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            double x;
            scanf("%lf", &x);
            a.arr[i][j] = x;
        }   
    }
}

int main(int argc, char const *argv[])
{
    Array a = defArray(3,2);
    fillArray(a);
    Array b = defArray(2,3);
    fillArray(b);
    Array result = multiply_array(a,b);
    print_matrix(result);
    return 0;
}
