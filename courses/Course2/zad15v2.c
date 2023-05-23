#include <stdio.h>
#include <stdlib.h>

int liczba;

int main()
{
    scanf("%d", &liczba);
    //liczba = 5; //(1-2) albo 5 to inna warosc
    switch (liczba)
    {
    case 1:
        TUTAJ:
        printf("liczba =1\n");
        break; // jesli dodamy break; to wtedy zatrzymuje sie na pierwszym.
    case 2:
        printf("liczba =2\n");
        goto TUTAJ; // goto dziala tak że przenosi po case1, pierw do case 2 potem dopiero do case i konczy na break.
    default:
        printf("inna wartosc\n");
    }

    return 0;
}
