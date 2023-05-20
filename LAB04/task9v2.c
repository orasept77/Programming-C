#include <stdio.h> //strona: https://technotip.com/7509/c-program-to-generate-all-combinations-of-1-2-and-3/

int main()
{
    int i, j, k, l;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            for (k = 1; k <= 4; k++)
            {
                for (l = 1; l <= 4; l++)
                {
                    printf("%d %d %d %d\n", i, j, k, l);
                }
            }
        }
    }

    return 0;
}