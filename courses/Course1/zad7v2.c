#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d", &b);

    do
    {
        printf("%d\n", a);
        a++;
    } while (a < b);

    return 0;
}
