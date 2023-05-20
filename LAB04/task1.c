#include <stdio.h>
#include <stdlib.h>

int main()
{
    char znaki[127];
    for (char j = 0; j < 127; j++)
    {
        printf("<%c> = %d\n", j, j);
    }
    return 0;
}