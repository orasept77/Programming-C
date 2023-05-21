#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char kwadrat[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int wygrany();
void renderboard();

int main()
{
    int gracz = 1, i, wybor;

    char mark;
    do
    {
        renderboard();
        gracz = (gracz % 2) ? 1 : 2;

        printf("gracz %d, wchodzi na pole:  ", gracz);
        scanf("%d", &wybor);

        mark = (gracz == 1) ? 'X' : 'O';

        if (wybor == 1 && kwadrat[1] == '1')
            kwadrat[1] = mark;
            
        else if (wybor == 2 && kwadrat[2] == '2')
            kwadrat[2] = mark;
            
        else if (wybor == 3 && kwadrat[3] == '3')
            kwadrat[3] = mark;
            
        else if (wybor == 4 && kwadrat[4] == '4')
            kwadrat[4] = mark;
            
        else if (wybor == 5 && kwadrat[5] == '5')
            kwadrat[5] = mark;
            
        else if (wybor == 6 && kwadrat[6] == '6')
            kwadrat[6] = mark;
            
        else if (wybor == 7 && kwadrat[7] == '7')
            kwadrat[7] = mark;
            
        else if (wybor == 8 && kwadrat[8] == '8')
            kwadrat[8] = mark;
            
        else if (wybor == 9 && kwadrat[9] == '9')
            kwadrat[9] = mark;
            
        else
        {
            printf("Nieznana wartosc ");

            gracz--;
            getch();
        }
        i = wygrany();

        gracz++;
    }while (i ==  - 1);
    
    renderboard();
    
    if (i == 1)
        printf("==>\aGracz %d wygrana ", --gracz);
    else
        printf("==>\aGra zakonczona remisem");

    getch();

    return 0;
}

/*********************************************

funkcja statusu gry
1 gra skonczona
1 0 gra w trakcie
0 gra skononca
 **********************************************/

int wygrany()
{
    if (kwadrat[1] == kwadrat[2] && kwadrat[2] == kwadrat[3])
        return 1;
        
    else if (kwadrat[4] == kwadrat[5] && kwadrat[5] == kwadrat[6])
        return 1;
        
    else if (kwadrat[7] == kwadrat[8] && kwadrat[8] == kwadrat[9])
        return 1;
        
    else if (kwadrat[1] == kwadrat[4] && kwadrat[4] == kwadrat[7])
        return 1;
        
    else if (kwadrat[2] == kwadrat[5] && kwadrat[5] == kwadrat[8])
        return 1;
        
    else if (kwadrat[3] == kwadrat[6] && kwadrat[6] == kwadrat[9])
        return 1;
        
    else if (kwadrat[1] == kwadrat[5] && kwadrat[5] == kwadrat[9])
        return 1;
        
    else if (kwadrat[3] == kwadrat[5] && kwadrat[5] == kwadrat[7])
        return 1;
        
    else if (kwadrat[1] != '1' && kwadrat[2] != '2' && kwadrat[3] != '3' &&
        kwadrat[4] != '4' && kwadrat[5] != '5' && kwadrat[6] != '6' && kwadrat[7] 
        != '7' && kwadrat[8] != '8' && kwadrat[9] != '9')

        return 0;
    else
        return  - 1;
}


/*******************************************************************
funkcja do remisu
 ********************************************************************/


void renderboard()
{
    system("cls");
    printf(" ___  _  __   ___  _   __  ___ _ ___\n");
    printf("|_ _|| |/ _| |_ _|/  / _| |_ _/  | __|\n");
    printf(" | | | ( (_   | || o ( (_   | ( o )_|\n");
    printf(" |_| |_|___|  |_||_n_|___|  |_|_/|___|\n");

    printf("gracz 1 (X)  -  gracz 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", kwadrat[1], kwadrat[2], kwadrat[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", kwadrat[4], kwadrat[5], kwadrat[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", kwadrat[7], kwadrat[8], kwadrat[9]);

    printf("     |     |     \n\n");
}

/*******************************************************************
koniec
 ********************************************************************/
 