#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

float main()
{

    float array[4][4] = {{3.1, 3, 6}, {2.2, 6.42}, {3.1, 3.6}, {3.5, 32.6}};
    int indexa, indexb;
    printf("podaj pierwszy index: ");
    scanf("%d", &indexa);
    printf("podaj drugi index: ");
    scanf("%d", &indexb);
    printf("wartosc to: %f", array[indexa][indexb]);

    return 0;
}