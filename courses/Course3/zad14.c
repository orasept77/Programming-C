// 14. Kurs Programowania w C - przesłanie zmiennych [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=14]

#include <stdio.h>

void komunikat(void);

int a = 101;

void proc(void)
{
    static int m = 1;
    m++;
    printf("m: %d\n", m);
}

int main(void)
{
    proc();
    proc();
    proc();
    int a = 5;
    a++;
    printf("1. k: %d\n", a);
    printf("1. a: %d\n", a);
    komunikat();
    {
        printf("2. a: %d\n", a);
        double a = 18.0;
        printf("3. a: %lf\n", a);
    }
    printf("4. a: %d\n", a);

    if (0)
        puts("Tekst 1");

    puts("Tekst 2");

    int i;
    for (i = 0; i < 3; i++)
        printf("i: %i\n", i);

    return 0;
}

void komunikat(void)
{
    int b = 8, a = 2;
    printf("b: %d\n", b);
    a /= 2;
    printf("2. k: %d\n", a);
}