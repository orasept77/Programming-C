#include <stdio.h>
#include <stdlib.h>

int main()
{
    char litery[26] = "abcdefghijklmnopqrstuvwxyz"; //mogłoby tez byc litery*
    char *ptr_tab = litery; // wteedy bez tego
    int n;
    printf("Podaj, co ile liter chcesz wypisac wartosc: ");
    scanf("%d", &n);
    int m = 0;
    while ((2 + n*m) < 26)
    {
        printf("Wartosc za pomoca wskaznika: %c\n", *ptr_tab + 2 + n*m);
        m += 1;
    }
    return 0;
}