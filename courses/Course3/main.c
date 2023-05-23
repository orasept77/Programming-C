// 15. Kurs Programowania w C - podzial na pliki[https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=15]

#include <stdio.h>
#include "geometria.c"

int main(void)
{
    // printf("Pi wynosi %lf\n", pi);
    double r;
    puts("Podaj promień koła:");
    scanf("%lf", &r);
    printf("Pole tego koła wynosi %lf\n", pole(r));
    printf("Obwod tego koła wynosi %lf\n", obwod(r));
    // printf("Kwadrat z liczby 2.0 wynosi %lf\n", kwadrat(2.0));
    return 0;
}