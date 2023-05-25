#include <stdio.h>

//Zadanie 1

void prostokat()
{
    int wys, szer;

    printf("Podaj wysokosc: ");
    scanf("%d", &wys);

    printf("Podaj szerokosc: ");
    scanf("%d", &szer);

    int i, j;

    for(i = 1; i <= wys; i++)
    {
        for(j = 1; j <= szer; j++)
        {
            if (i == 1 || i == wys)
            {
                printf("X");
            }
            else if (j == 1 || j == szer)
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
//*****************************************************************************************************************
int main()
{
    prostokat();

    return 0;
}
