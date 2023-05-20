#include <stdio.h>

int isPrime(int x);

int main()
{
    int n = 0;
    scanf("%d", &n);
    int y[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &y[i]);

    for (int j = 0; j < n; j++)
    {
        if (isPrime(y[j]))
            printf("TAK\n");
        else
            printf("NIE\n");
    }

    return 0;
}

inline int isPrime(int x)
{
    if (x < 2)
        return 0;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
