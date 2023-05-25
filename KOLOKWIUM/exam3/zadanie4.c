#include <stdio.h>

//Zadanie 4

void tabliczka(int n)
{
    int tab[n][n];

    int i, j;

    for(i = 0; i < n; i++) //Uzupelnianie tabliczki 
    {
        j = 0;
        while(j < n)
        {
            tab[i][j] = (i + 1) * (j + 1); 
            j++;
        }
    }

    for(i = 0; i < n; i++) //Wyswietlenie wartosci
    {
        j = 0;
        do
        {
            printf("%d\t", tab[i][j]);
            j++;
        }while(j < n);
        printf("\n");
    }
}
//**************************************************************************************************
int main()
{
    tabliczka(10);    

    return 0;
}
