#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 16;
    float b = 16;
    int result = a == b; // jest jeszcze !=, <, >, <=, >= aktualnie używam tylko ==
    printf("a == b - %d", a == b);
    return 0;
}
