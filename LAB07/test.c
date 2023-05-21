#include<stdio.h>
#include<stdlib.h>

typedef struct {
    float sepal_length;
    float sepal_width;
    float petal_length;
    float petal_width;
    char species[100];
} iris_row;

iris_row* load_data(char *path) {
    FILE *fp;
    int num_rows = 0;
    iris_row *rows;

    fp = fopen(path, "r");
    if (fp == NULL) {
        printf("Blad przy otwarciu!\n");
        exit(1);
    }

    // Count number of rows
    char line[100];
    while (fgets(line, sizeof(line), fp) != NULL) {
        num_rows++;
    }
    
    // Allocate memory for an array of iris_rows
    rows = (iris_row*) malloc(num_rows * sizeof(iris_row));
    
    // Read from file and store in array
    rewind(fp);
    int i = 0;
    while (fgets(line, sizeof(line), fp) != NULL) {
        sscanf(line, "%f,%f,%f,%f,%s", &rows[i].sepal_length, &rows[i].sepal_width, &rows[i].petal_length, &rows[i].petal_width, rows[i].species);
        i++;
    }
    
    fclose(fp);
    return rows;
}

int main(int argc, char **argv) {
    char *path = argv[1];
    iris_row *rows = load_data(path);
    
    // Print data
    for (int i = 0; i < 150; i++) {
        printf("[%.2f, %.2f, %.2f, %.2f, %s]\n", rows[i].sepal_length, rows[i].sepal_width, rows[i].petal_length, rows[i].petal_width, rows[i].species);
    }
    
    free(rows);
    return 0;
}