#include <stdio.h>

int main(int argc, char const *argv[])
{
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    if(liczba%3==0)
    {
        printf("liczba jest podzielna przez 3\n");
    }
    else if(liczba%5==0)
    {
        printf("liczba jest podzielna przez 5\n");
    }
    else
    {
        printf("liczba nie jest podzielna przez 3 i 5\n");
    }
    return 0;
}
