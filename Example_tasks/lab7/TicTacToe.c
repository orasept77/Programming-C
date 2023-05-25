#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *boardwsk;
unsigned int BOARD_SIZE;
int players = 2;

void renderboard()
{
    printf("\n  ");
    for (char i = 0; i < BOARD_SIZE; i++)
    {
        printf("%c ", i+65);
    }
    printf("\n");
    
    int row = 0;
    for (char *rowwsk = boardwsk; row < BOARD_SIZE; rowwsk + BOARD_SIZE)
    {
        printf("%i ", row+1);
        int col = 0;
        for (char *colwsk = rowwsk; col < BOARD_SIZE; colwsk++)
        {
            printf("%c ",*colwsk);
            col++;
        }
        printf("\n");
        row++;
    }
}

void defineboard()
{
    printf("Podaj rozmiar planszy:");
    scanf("%i", &BOARD_SIZE);
    printf("Rozmiar planszy to %ix%i\n", BOARD_SIZE, BOARD_SIZE);
    size_t arraysieze = (BOARD_SIZE * sizeof(char)) * (BOARD_SIZE * sizeof(char));
    boardwsk = malloc(arraysieze);

    int row = 0;
    for (char *rowwsk = boardwsk; row < BOARD_SIZE; rowwsk + BOARD_SIZE)
    {
        int col = 0;
        for (char *colwsk = rowwsk; col < BOARD_SIZE; colwsk++)
        {
            *colwsk = ' ';
            col++;
        }
        row++;
    }
}

char score(){
    char results[players];
    int row = 0;
    for (char *rowwsk = boardwsk; row < BOARD_SIZE; rowwsk + BOARD_SIZE)
    {
        int col = 0;
        for (char *colwsk = rowwsk; col < BOARD_SIZE; colwsk++)
        {
            if (*colwsk ==' ')
            {
                break;
            }
            col++;
        }
        printf("Kolejny wiersz %i\n", row);
        row++;
    }
}

int main(int argc, char const *argv[])
{

    defineboard();
    renderboard();
    score();
    return 0;
}
