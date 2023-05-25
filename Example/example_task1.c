#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

struct trojkat
{
    int bok1;
    int bok2;
    int bok3;
};

int obwod(struct trojkat tr){
      int obw= tr.bok1 + tr.bok2 + tr.bok3;
      return obw;  
}

int *createtab(){
    int *a;
    a = malloc(4*sizeof(int));
    return a;
}

int main(int argc, char const *argv[])
{
    int x;
    const int X = 6;
    char x1;
    double x3;
    float x4 = 2.5;
    short x9;

    signed int x5 = -123;
    unsigned int x6 = 0;

    bool x7 = true;

    long long int x8;

    printf("rozmiar int = %i\n", sizeof(x8));

    printf("%hhi\n", CHAR_MIN);
    printf("%hhi\n", CHAR_MAX);

    unsigned char ch = 255;
    unsigned char chplus = ch++;
    printf("chplus = %hi\n", chplus);
    printf("ch = %hi\n", ch);
    chplus = ++ch;
    printf("chplus = %hi\n", chplus);
    printf("ch = %hi\n", ch);

    printf("%hi\n", ch);

    printf("float = %.2lf\n", x4);

    int tab[20][20];

    tab[4];

    printf("%p", tab);

    // ==
    // !=
    // <
    // >
    // &&
    // ||
    // <=
    // >=

    if (1 > 10 || (3 < 5 && 1 < 4))
    {
        printf("Zadziala");
    }

    struct trojkat asdf;
    asdf.bok1 = 2;
    asdf.bok2 = 3;
    asdf.bok3 = 4;

    sizeof(struct trojkat);

    char str[5] = "asdfg";
    for (int i = 0; i < 5; i++)
    {
        str[i] = 65 + i;
    }
    printf("str = |%s|\n", str);
    char str2[5] = "abcde";
    int i = 0;
    while (i < 5)
    {
        if (i == 4)
        {
            str2[i] = '\0';
        }
        else
        {
            str2[i] = 65 + i;
        }

        i++;
    }
    printf("|%s|\n", str2);

    i = 0;
    printf("|");
    do
    {
        printf("%c", str2[i]);
        i++;
    } while (i < 5);
    printf("|\n");

    int *wsk;
    int liczba = 666;

    wsk = &liczba;
    printf("wsk = %p liczba_wsk = %p\n", wsk, &liczba);
    *wsk = 777;
    printf("liczba = %i", liczba);
    printf("wartosc pod adresem przechowyawnym przez wsk %i\n", *wsk);

    int l = 0;
    l = obwod(asdf);
    printf("obw trojkoata = %i\n", l);

    int * tab5;

    tab5 = createtab();
    printf("[");
    for (int i = 0; i < 4; i++)
    {
        tab5[i] = i+1;
        printf("%i,",tab5[i]);
    }
    printf("]");
    

    short a[3][3][3];

    
    

    return 0;
}
