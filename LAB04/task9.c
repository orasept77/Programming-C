#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ile_kombi = 0;

    int a = 1;
    while (a <= 4)
    {
        int b = 1;
        while (b <= 4)
        {
            int c = 1;
            while (c <= 4)
            {
                printf("%i%i%i\n", a, b, c);
                ile_kombi += 1;
                c += 1;
            }
            b += 1;
        }
        a += 1;
    }
    printf("Wszystkich kombinacji jest: %i", ile_kombi);
}