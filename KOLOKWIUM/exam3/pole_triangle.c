#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int a, h, pole;
    printf("Podaj dlugosc podstawy: [cm] \n");
    scanf("%i", &a);
    printf("Podaj wysokosc trojkata: [cm] \n");
    scanf("%i", &h);
    pole=(a*h)/2;
    printf("Pole trojkata wynosi: %i cm", pole);
    return 0;
}
