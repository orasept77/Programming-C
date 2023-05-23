#include <stdio.h>
#define wypisz(x) printf("%s=%d\n", #x, x)

int main()
{
    int i=0; //define dziala tu na takiej zasadzie że printf jest jako wypisz zapisany a #x, x wypisuje pierw i =, a potem wartość
    char a=5;
    wypisz(i);
    wypisz(a);
    return 0;
}
