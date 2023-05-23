#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a)
{
    *a = 10;
    printf("%d\n", *a);
}

int main()
{
    int liczba = 1;
    //int *wskliczba; //int* wskliczba to, to samo jak coś.
    //wskliczba = &liczba;

    //printf("%d\n", &liczba);
    //printf("%d\n", wskliczba); // to to samo printf("%d\n", &liczba);
    //printf("%d\n", *wskliczba); // to to samo printf("%d\n", liczba);
    zamiana(&liczba);
    printf("%d\n", liczba);

    return 0;
}
