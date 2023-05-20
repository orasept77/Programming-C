#include <stdlib.h>
#include <stdio.h>

int main()
{
    // float array [2][4];
    float array[4][2] = {{3.1, 3.6},
                         {2.2, 6.42},
                         {3.1, 3.6},
                         {3.5, 32.6}};
    printf("%f\n", array[2][1]);
    int col;
    int row;
    printf("Wpisz nr kolumny z której chcesz odczytać liczbę");
    scanf("%i", &col);
    printf("Wpisz nr wiersza z którego chcesz odczytać liczbę");
    scanf("%i", &row);
    col = col - 1;
    row = row - 1;
    float number = array[col][row];
    printf("Liczba z wybranej przez ciebie kolumny i wiersza to: %f\n", number);
}
