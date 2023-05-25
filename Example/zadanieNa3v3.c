#include <stdio.h>

void duplicateRow(double *array, int size, int index, int repeats){
    if (repeats + 1 > size) {
    printf("Warning: Elements exceded size od array!\n");
    return;
   }
    int i;
    for(i = 0; i < repeats; i++)
        array[size+i] = array[index];
    for(i = 0; i < size+repeats; i++)
        printf("%.2f ", array[i]);
    printf("\n");
}

int main(void){
    double array[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = 5;
    int index = 3;
    int repeats = 3;

    duplicateRow(array, size, index, repeats);
    return 0;
}