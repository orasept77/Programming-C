#include <stdlib.h>
#include <stdio.h>

// Zmienne globalne dostępne dla funkcji
// wskaźnik na pierwszy element tablicy
int *board;
// rozmiar tablicy
int BOARD_SIZE = 3;

int main(int argc, char const *argv[])
{
    // Talice w pamięci są przechowyane w kolejnych adresach
    int tab[2][3] = { {1,2,3},{4,5,6} };
    int tab_size = sizeof(tab)/sizeof(int);
    printf("tab_size = %i\n",tab_size);
    int iterations = 0;
    for (int *i = tab; iterations < (sizeof(tab)/sizeof(int)); i++)
    {
        printf("%i ", *i);
        iterations++;
    }
    printf("\n");

    // Rozmiar tablicy 2x3 typu int to (2*int)*(3*int) gdzie int to wielkość typu int.
    int size = (BOARD_SIZE * sizeof(int)) * (BOARD_SIZE * sizeof(int));
    // funkcja maloc() zarezerwuje w pamięci określoną liczbę bajtów i zwróci wskaźnik do pierwszego bajtu.
    board = malloc(size);
    
    // wiedząc że plansza ma rozmiar 3x3 co 3 komórka w pamięci będzie początkiem nowego wiersza.
    int row = 0;
    for (int *rowwsk = board; row < BOARD_SIZE; rowwsk + BOARD_SIZE)
    {
        int col = 0;
        for (int *colwsk = rowwsk; col < BOARD_SIZE; colwsk++)
        {
            *colwsk = 0;
            col++;
        }
        row++;
    }

    row = 0;
    for (int *rowwsk = board; row < BOARD_SIZE; rowwsk + BOARD_SIZE)
    {
        int col = 0;
        for (int *colwsk = rowwsk; col < BOARD_SIZE; colwsk++)
        {
            printf("board[%i][%i] = %i \t",row, col,*colwsk);
            col++;
        }
        printf("\n");
        row++;
    }

    // free zwalnia pamięć
    free(board);
    return 0;
}
