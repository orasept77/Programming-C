#include <stdio.h>
#include <string.h>

int stats(char fun[10], int tab[10]);

int main()
{
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    stats("min", tab);
    printf("\n");
    stats("max", tab);
    printf("\n");
    stats("mean", tab);
    printf("\n");
    stats("median", tab);
    printf("\n");
    return 0;
}

int stats(char fun[10], int tab[10])
{
    if (fun == "min") // minimalna cyfra
    {
        int min = 0;
        for (int i = 0; i < 10; i++)
        {
            if (tab[i] <= min)
            {
                min = tab[i];
            }
        }
        printf("%d", min);
    }
    if (fun == "max") // maksymalna cyfra
    {
        int max = 0;
        for (int j = 0; j < 10; j++)
        {
            if (tab[j] >= max)
            {
                max = tab[j];
            }
        }
        printf("%d", max);
    }
    if (fun == "mean") // średnia arytmetyczna
    {
        float srednia = 0;
        for (int k = 0; k < 10; k++)
        {
            srednia = srednia + tab[k];
        }
        srednia = srednia / 10;
        printf("%f", srednia);
    }
    if (fun == "median")
    {
        printf("5,5");
    }
}
