#include <stdlib.h>
#include <stdio.h>

int *x;
void *ptr;
int y;
int main(int argc, char const *argv[])
{

    
    printf("Wpisz adres zmiennej x =");
    scanf("%p",&ptr);
    x = ptr;
    printf("adres = %p\n", x);
    while (1)
    {
        printf("Zmień wartość zmiennej x(%p) = %i na nowa wartosc = ", x, *x);
        scanf("%i",&y);
        *x = y;
    }
    
    
    return 0;
}