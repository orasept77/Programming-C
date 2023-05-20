#include <stdlib.h>
#include <stdio.h>

float chararray[4][4] = {{2.2, 3.1, 3.5},
                         {6.42, 3.6, 32.6}}; // tablica dwuwymiarowa

int main()
{
    for (int i = 0; i < 2; i++)
        printf("%f\n", chararray[1][i]);

    return 0;
}