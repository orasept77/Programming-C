#include <stdio.h>

int literaA(int n)
{
    for (int i = 0, x = n, y = 1; i < n; i++, x--, y++)
    {
        for (int j = 0; j < x; j++)
        {
            printf(" ");
        }
        if (i == 0)
            printf("A");
        else if (i == n / 2)
        {
            for (int j = 1; j < n + 1; j++)
                printf("A");
        }
        else
        {
            printf("A");
            for (int j = 0; j < y; j++)
            {
                printf(" ");
            }
            printf("A");
            y += 1;
        }
        printf("\n");
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    literaA(n);
    return 0;
}
