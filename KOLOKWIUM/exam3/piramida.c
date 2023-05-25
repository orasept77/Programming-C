#include <stdio.h> //podobne przydatne: https://www.programiz.com/c-programming/examples/pyramid-pattern
int main()
{
    int i, space, rows, k = 0;
    printf("Wprowadz ilosc wierszy: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf(" ");
        }
        while (k != 2 * i - 1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }
    return 0;
}