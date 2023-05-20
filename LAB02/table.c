#include <stdlib.h>
#include <stdio.h>

int main()
{
    float array[4][2] = {{3.1, 3.6},
                         {2.2, 6.42},
                         {3.1, 3.6},
                         {3.5, 32.6}};

    for (int i = 0; i <= 3; i++)
    {
        float number = array[i][0];
        float number2 = array[i][1];
        printf("| %f \t| %f\t|\n", number, number2);
    }
}