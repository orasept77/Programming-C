#include <stdio.h>

int main(int argc, char const *argv[])
{
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    switch (liczba)
    {
    case 0:
        printf("wyjscie z programu\n");
        break;
    case 1:
        printf("wybrano dodawanie\n");
        break;
    case 2:
        printf("125148\n");
        break;
    default:
        printf("");
        break;
    }
    return 0;
}
