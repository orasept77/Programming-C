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
        printf("X");
        for(j = 1; j <= szer; j++)
        {
            printf("X");
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
