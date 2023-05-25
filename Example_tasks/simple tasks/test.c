#include <stdlib.h>

#include <stdio.h>

#include <limits.h>

int main(int argc, char const *argv[])

{
    char es = 'Ò';
    printf("xd: %i", es);
    unsigned char a;
    // for (size_t i = 0; i < 255; i++)
    // {
    //     a = i;
    //     printf("%c %i\n", a, i);
    // }
    
    // unsigned char asd = "ó";
    // printf(" %c", asd);

    int var2;
    scanf("%i", &var2);
    printf("Podano: %i", var2);
    switch (var2)
    {
    case 0:
        var2 += 10;
        break;
    case 1:
        var2 += 11;
        break;
    case 3:
        var2 += 33;
        break;
    default:
        var2 += 0;
        break;
    }

    printf("%i", var2);
    return 0;
}