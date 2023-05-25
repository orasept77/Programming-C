#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int asd[20];
    int *tab;
    int size_tab = 5;

    tab = malloc(size_tab*sizeof(int));

    printf("size of tab = %i", sizeof(tab));

    printf("size of tab = %i", sizeof(asd));

    return 0;
}
