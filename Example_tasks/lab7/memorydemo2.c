#include <stdlib.h>
#include <stdio.h>

int x =0, y;
int main(int argc, char const *argv[])
{
    printf("Adres pamieci zmiennej x=%p\n", &x);

    while (1)
    {
        printf("wartosc x = %i pod adresem %p\n", x, &x);
        scanf("%i",&y);
    }
    
    return 0;
}
