#include <stdlib.h>
#include <stdio.h>

void zamien(char *tekst)
{
    char *koniec, temp;
    while (*tekst!= ' ' && *tekst != '   ' && *tekst != 0)
    {
        tekst++;
    }
    tekst++;
    // printf("%c\n", *tekst);
    koniec = tekst;
    while (*koniec != ' ' && *koniec != '   ' && *koniec != 0)
    {
        koniec++;
    }
    koniec--;
    // printf("%c\n", *koniec);
    int i = (koniec - tekst) + 1 / 2;
    // printf("%d\n", i);
    for (; i > 0; i--)
    {
        temp = *tekst;
        *tekst = *koniec;
        *koniec = temp;
        tekst++;
        koniec--;
    }
}

char tekst[] = "Kurs programowania C";

int main()
{
    zamien(tekst);
    printf("%s\n", tekst);
    return 0;
}
