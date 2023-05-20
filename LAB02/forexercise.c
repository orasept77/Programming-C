#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    // zad 1
    printf("zad1\n------------------\n");
    int liczba = 0;
    for (int i = 0; i <= 20; i++)
    {
        printf("%d ", liczba);
        liczba++;
    }
    printf("\n");
    // zad2
    printf("zad2-----------------\n");
    int liczbaa = 5;
    for (int j = 5; j <= 20; j++)
    {
        printf("%d ", liczbaa);
        liczbaa++;
    }
    printf("\n");
    // zad3
    printf("zad3-----------------\n");
    int liczbab = 20;
    for (int k = 20; k >= 0; k--)
    {
        printf("%d ", liczbab);
        liczbab--;
    }
    printf("\n");
    // zad4
    printf("zad4-----------------\n");
    int liczbac = 0;
    while (liczbac < 50)
    {
        printf("%d ", liczbac);
        liczbac += 3;
    }
    printf("\n");
    // zad5
    printf("zad5-----------------\n");
    int liczbad = 0;
    int ilosc = 0;
    while (ilosc <= 100)
    {
        if (liczbad % 5 == 0)
        {
            printf("%d ", liczbad);
            ilosc++;
        }
        liczbad++;
    }
    printf("\n");
    return 0;
}