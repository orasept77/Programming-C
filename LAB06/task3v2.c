#include <stdio.h> // 11 minuta https://www.youtube.com/watch?v=pjKuLz4OOXU
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int size;
    printf("Podaj wielkosc spirali: \n");
    scanf("%i", &size);

    int arr[size][size];
    int N = size - 1;
    int num = 1;
    int i = 0;
    int j = 0;

    for(i=0; i<size/2; i++, N--)
    {
    //lewej do prawej
    for (j = i; j <= N; j++, num++)
    {
        arr[i][j] = num;
    }
    // od gory do dolu

    for (j = i + 1; j <= N; j++, num++)
    {
        arr[j][N] = num;
    }
    // od prawej do lewej

    for (j = N - 1; j >= i; j--, num++)
    {
        arr[N][j] = num;
    }
    // od dolu do gory
    for (j = N - 1; j > i; j--, num++)
    {
        arr[j][i] = num;
    }
    //od prawej do lewej
    }
    // wyswietla spirale kwadratu z 2D kolumn

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
