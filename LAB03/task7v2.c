#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *litery = "abcdefghijklmnopqrstuvwxyz";
    int n;
    printf("Podaj, co ile liter chcesz wypisac wartosc: ");
    scanf("%d", &n);
    int m = 0;
    while ((2 + n * m) < 26) // dopoki nie przekroczy 26 to ma sie powatrzac pierw m=0 potem 1 2 3 4 itd.
    {
        printf("Wartosc za pomoca wskaznika: %c\n", *litery + 2 + n * m);
        m += 1;
    }
    return 0;
}