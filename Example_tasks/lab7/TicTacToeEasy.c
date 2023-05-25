#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // biblioteka obsługująca true false

int const TAB_SIZE = 3;
char board[3][3] = {{' ', ' ', ' '},
                    {' ', ' ', ' '},
                    {' ', ' ', ' '}};

// int const TAB_SIZE = 26;
// char board[TAB_SIZE][TAB_SIZE];
// //w funkcji main ustawiam puste wartośći w tablicy
// int main(int argc, char const *argv[])
// {
//     for (size_t i = 0; i < TAB_SIZE; i++)
//     {
//         for (size_t j = 0; j < TAB_SIZE; j++)
//         {
//             board[i][j] = '\0';
//         }
//     }
//     return 0;
// }

void renderboard()
{
    printf("\n  ");
    for (char i = 0; i < 3; i++)
    {
        printf("%c ", i + 65);
    }
    printf("\n");

    for (size_t i = 0; i < 3; i++)
    {
        printf("%i ", i + 1);
        for (size_t j = 0; j < 3; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

char score()
{
    // sprawdzanie wierszy
    for (size_t i = 0; i < 3; i++)
    {
        char player = board[i][0];
        for (size_t j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ' || player != board[i][j])
            {
                break;
            }
            if (j == 2)
            {
                return player;
            }
        }
    }

    // sprawdzanie kolumn
    for (size_t i = 0; i < 3; i++)
    {
        char player = board[0][i];
        for (size_t j = 0; j < 3; j++)
        {
            if (board[j][i] == ' ' || player != board[j][i])
            {
                break;
            }
            if (j == 2)
            {
                return player;
            }
        }
    }

    // sprawdzanie przekątnych
    char player = board[0][0];
    for (size_t i = 0; i < 3; i++)
    {
        if (board[i][i] != player || board[i][i] == ' ')
        {
            break;
        }
        if (i == 2)
        {
            return player;
        }
    }
    // printf("XD");

    player = board[2][0];
    int j = 0;
    int i = 2;
    while (j < 3)
    {
        // printf("i= %i j=%i board = |%c|\n",i, j, board[i][j]);
        if (board[i][j] == ' ' || player != board[i][j])
        {
            break;
        }
        if (j == 2)
        {
            return player;
        }
        i--;
        j++;
    }

    return '\0';
}

int makemove(char player)
{
    char col;
    int row;
    printf("RUCH GRACZA %c (np. A1): ", player);
    scanf(" %c %i", &col, &row);
    // Zamiana char i numery wiersza na indeksy
    int i = row - 1;
    int j = col - 65;
    if (!(col >= 65 && col <= (65 + 2)) || !(row >= 1 && row <= 3))
    {
        return -1;
    }

    if (board[i][j] != ' ')
    {
        return 1;
    }

    board[i][j] = player;
    return 0;
}

void renderMenu()
{
    printf("Tic Tac Toe:\n");
}

void renderLogo()
{
    printf(" ___  _  __   ___  _   __   ___ _  ___ \n\
|_ _|| |/ _| |_ _|/ \\ / _| |_ _/ \\| __|\n\
 | | | ( (_   | || o ( (_   | ( o ) _| \n\
 |_| |_|\\__|  |_||_n_|\\__|  |_|\\_/|___|\n");
}

int main(int argc, char const *argv[])
{
    char player = 'X';
    renderLogo();
    bool exitGame = false;
    while (!exitGame)
    {
        renderboard();
        char result = score();
        if (result != '\0')
        {
            printf("Wygral gracz: %c !!!", result);
            scanf("%s");
            return 0;
        }

        int validmove = -2;
        do
        {
            validmove = makemove(player);
            if (validmove != 0)
            {
                printf("Nielegalny ruch #KOD%i", validmove);
            }

        } while (validmove != 0);

        player = player == 'O' ? 'X' : 'O';
    }
    return 0;
}
