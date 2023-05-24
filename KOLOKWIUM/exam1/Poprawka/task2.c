#include <stdio.h>

int main(int argc, char const *argv[])
{
    short int a;
    char imie[10];
    double b;
    unsigned int c;
    char d;

    printf("Type number beween -32 000 and 32 000:");
    scanf("%d", &a);
    printf("Value entered[%d]\n", a);

    printf("Type your name:");
    scanf("%s", imie);
    printf("Value entered[%s]\n", imie);

    printf("Type value of PI:");
    scanf("%lf", &b);
    printf("Value entered[%lf]\n", b);

    printf("Type number between 0 and 4294 967 295:");
    scanf("%u", &c);
    printf("Value entered[%u]\n", c);

    printf("Type first letter of your lastname:");
    scanf("%c", &d);
    printf("Value entered[%c]\n", d);
    return 0;
}
