// 12. Kurs Programowania w C - Wiecej o funkcjach [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=12]

#include <stdio.h>
#include <stdarg.h>

int dodaj_liczby(int n, ...)
{
    int suma = 0;
    int i;
    va_list vl;
    va_start(vl, n);
    for (i = n; i; i = va_arg(vl, int))
    {
        suma += i;
    }
    va_end(vl);
    return suma;
}

int main(int argc, char **argv)
{
    printf("Suma liczb wynosi %d\n", dodaj_liczby(7, 1, 2, 3, 4, 5, 6, 8, NULL));
    int i;
    for (i = 0; i < argc; ++i)
    {
        printf("%s\n", argv[i]);
    }
    printf("Witaj %s!\n", argv[1]);
    getc(stdin);
    return 0;
}