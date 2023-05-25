#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Wpisz liczbe a:");
    scanf("%i",&a);
    printf("Wpisz liczbe b:");
    scanf("%i",&b);

    printf("Wynik %i + %i = %i",a,b, a+b);
    return 0;
}
