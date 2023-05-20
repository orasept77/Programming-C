#include <stdio.h>

int pomiar[10][10] = {{1, 2, 3},  // srednia wiersza 2
                      {4, 5, 6},  // srednia wiersza 5
                      {7, 8, 9}}; // srednia wiersza 8
                                  // 4 5  6.66
int main()
{
    for (int i = 0; i < 3; i++)
        printf("podaj wartosc pomiar[][]"); // modyfikacja musi byc scan f

    return 0;
}
