#include <stdio.h>

#define COL 2
#define ROW 3

typedef struct abc {
    int a;
} abc;

void matrix_multiplication(float *tab, int col, int row, float x) {
    for (int i = 0; i < col * row; i++) {
        tab[i] *= x;
    }
}

void print_matrix(float *tab, int col, int row) {
    for (int i = 0; i < col * row; i++) {
        printf("%.2f\t", tab[i]);
        if ((col - 1) == (i % col)) {
            printf("\n");
        }
    }
}

int main(int argc, char const *argv[]) {
    float tab[ROW][COL] = {
        {1.0, 2.0},
        {2.0, 3.0},
        {3.0, 3.0}
    };

    printf("Original Matrix:\n");
    print_matrix(tab, COL, ROW);

    matrix_multiplication(&tab[0][0], COL, ROW, 4);

    printf("\nMatrix After Multiplication:\n");
    print_matrix(tab, COL, ROW);

    // Save to file
    FILE *file = fopen("txt1.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return -1;
    }

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            fprintf(file, "%.4f ", tab[i][j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);

    return 0;
}
