#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("\
|a  |b  |!a |And(&) |OR(|)  |!NAND|!NOR|\n\
|---|---|---|-------|-------|-----|----|\n");
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            int aandb = a && b;
            int aorb = a || b;
            int nand = !(a && b);
            int nor = !(a || b);
            printf("|%i  |%i  |%i  |%i      |%i      |%i    |%i   |\n", a, b, !a, aandb, aorb, nand, nor);
        }
    }
    return 0;
}
