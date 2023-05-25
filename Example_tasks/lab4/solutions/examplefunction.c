#include <stdio.h>
#include <stdlib.h>

// zmienna globalna
int asd = 10;

void show(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%i ", i);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    show(10);
    show(20);
    show(30);


    // bez użycia funkcji kod mógł wyglądać następująco:
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", i);
    }
    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        printf("%i ", i);
    }
    printf("\n");

    for (int i = 0; i < 30; i++)
    {
        printf("%i ", i);
    }
    printf("\n");

    printf("Wartosc zmiennej globalnej %i",asd);
    return 0;
}
