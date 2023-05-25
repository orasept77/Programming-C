#include <stdlib.h>
#include <stdio.h>

int x, y;
int main(int argc, char const *argv[])
{
    printf("Adred pamięci zmiennej x", &x);

    while (1)
    {
        printf("wartość x = %i", x);
        scanf("%i",&y);
    }
    
    return 0;
}