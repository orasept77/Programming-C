#include <stdio.h>

#define abc(x) int x##_zmienna
#define wypisz(y) printf("%s=%d", #y, y)

int main()
{
    abc(nasza) = 2;
    wypisz(nasza_zmienna);
    return 0;
}
