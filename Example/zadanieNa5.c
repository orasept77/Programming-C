#include <stdio.h>
#include <stdlib.h>

typedef struct Array {
    int columns;
    int rows;
    double** numbers;
} Array;

Array* initArray(int rows, int cols) {
    Array* arr = malloc(sizeof(Array));

    arr->columns = cols;
    arr->rows = rows;
    arr->numbers = malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++) {
        arr->numbers[i] = malloc(cols * sizeof(double));
    }

    return arr;
}

void printArray(Array* arr) {
    for (int i = 0; i < arr->rows; i++) {
        for (int j = 0; j < arr->columns; j++) {
            printf("%2.2f\t", arr->numbers[i][j]);
        }
        printf("\n");
    }
}

void fillArray(Array* arr) {
    for (int i = 0; i < arr->rows; i++) {
        for (int j = 0; j < arr->columns; j++) {
            printf("Array[%d][%d] = ", i, j);
            scanf("%lf", &arr->numbers[i][j]);
        }
    }
}

Array* multiplyArrays(Array* arr1, Array* arr2) {
    if (arr1->columns != arr2->rows) {
        printf("Arrays cannot be multiplied!\n");
        return NULL;
    }

    Array* result = initArray(arr1->rows, arr2->columns);

    for (int i = 0; i < arr1->rows; i++) {
        for (int j = 0; j < arr2->columns; j++) {
            double sum = 0;
            for (int k = 0; k < arr1->columns; k++) {
                sum += arr1->numbers[i][k] * arr2->numbers[k][j];
            }
            result->numbers[i][j] = sum;
        }
    }

    return result;
}

int main(void) {
    Array* arr1 = initArray(3, 2);
    fillArray(arr1);
    printf("\n");

    Array* arr2 = initArray(2, 3);
    fillArray(arr2);
    printf("\n");

    Array* result = multiplyArrays(arr1, arr2);
    if (result != NULL) {
        printArray(result);
    }

    return 0;
}