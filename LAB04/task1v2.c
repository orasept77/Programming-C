#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char znaki[255];
    for (unsigned char j = 0; j < 255; j++)
    {
        if (j < 9 || j > 12)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("<%c> = %d \t", j, j);
            }
            printf("\n");
        }
    }
    return 0;
}