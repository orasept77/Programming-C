#include <stdio.h>
#include <stdlib.h>
#define N 321

void printtab(int tab[3][3])
{
    printf("Tablica:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", tab[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int asd[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int *wskfor6;
    for (int *ptr_tab = asd; *ptr_tab; ptr_tab++)
    {
        if (*ptr_tab == 6)
        {
            wskfor6 = ptr_tab;
            printf("%p\n", ptr_tab);
            break;
        }
    }

    printtab(asd);

    *wskfor6 = 999;

    printtab(asd);

    return 0;
}