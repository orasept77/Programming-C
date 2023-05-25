#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("petla for\n");
    for (int i = 20; i > 0; i--)
    {
        if (i == 5)
        {
            // break;
            continue; // przeszkoczy do kolejnej iteracji
            // czyli wartość 5 zostanie pominięta
        }

        printf("Wartosc %i\n", i);
    }
    int i = 0;

    printf("petla while");

    while (i < 20)
    {
        printf("Wartosc %i\n", i);
        i++;
    }
    /* code */

    printf("petla do-while");

    i = 0;
    do
    {
        printf("Wartosc %i\n", i);
        i++;
    } while (i < 20);
    return 0;
}
