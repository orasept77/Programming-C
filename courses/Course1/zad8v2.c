#include <stdio.h>

//(wartość od ktorej zaczynamy; warunek do wykonania; polecenie)

int main()
{
    int liczba = 0;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            liczba = i * j;
            printf("%d\t", liczba);
        }
        printf("\n");
    }

    return 0;
}
