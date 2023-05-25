#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdarg.h>
#include <time.h>
#include <stdbool.h>
#include <limits.h>

struct wielobok
{
    int bok1;
    int bok2;
    int bok3;
    int bok4;
};

int obliczsumekrawedzi(struct wielobok w1){
    return w1.bok1 + w1.bok2 + w1.bok3+w1.bok4;
}

char * definetab(){
    char *firstelem;
    firstelem = malloc(3*sizeof(char));
    return firstelem;
}

int main(int argc, char const *argv[])
{
    float x;
    int x2;
    double x3;
    char x4;
    bool x5 = true;

    long int x6;

    short int x7;

    signed int x8;

    unsigned int x9;

    signed char e = -127;
    signed char d = 127;

    unsigned char b = 255;

    b += 1;

    sizeof(int);

    printf("|%c| %hi", b, b);

    printf("%i\n", sizeof(int));
    printf("%hhi\n", CHAR_MIN);
    printf("%hhi\n", CHAR_MAX);

    printf("%i\n", INT_MIN);
    printf("%i\n", INT_MAX);

    int tab[5];

    tab[0] = 1;
    tab[1] = 2;

    printf("%p", tab);

    if (1 < 3 || (3 < 4 && 5 < 6))
    {
        printf("teskt");
    }
    else
    {
    }

    unsigned char a = 0;
    unsigned char tmp;

    printf("tmp = %hi a = %hi\n", tmp, a);
    tmp = a++;
    printf("tmp = %hi a = %hi\n", tmp, a);
    tmp = ++a;
    printf("tmp = %hi a = %hi\n", tmp, a);

    char str[5];
    // int i = 0;
    // while (i<5)
    // {
    //     printf("%c\n", str[i]);
    //    i++;
    // }
    // A - 65
    for (int i = 0; i < 5; i++)
    {
        str[i] = 65 + i;
        /* code */
    }
    '\0';
    printf("%s\n", str);

    char asd[6] = "abcde";
    asd[6] = "\0";
    printf("%s\n", asd);

   

    struct wielobok w1;
    w1.bok1 = 45;
    w1.bok2 = 44;
    w1.bok3 = 65;
    w1.bok4 = 54;

    printf("%i\n", obliczsumekrawedzi(w1));


    int *wsk;
    int liczba = 123;
    
    printf("Adres zminnnej liczba %p\n", &liczba);

    wsk = &liczba;

    printf("zmienna wsk przechowuje adres: %p\n",wsk);
    liczba = *wsk;
    printf("%i\n", *wsk);
    *wsk = 44;
    printf("%i\n", liczba);


    char *list;
    list = definetab();
    list[0] ='t';
    list[1] = 't';
    list[2] = '\0';

    printf("%s",list);

    return 0;
}
