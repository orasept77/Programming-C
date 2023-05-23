// 16. Kurs Programowania w C - niebezpieczne typy zmiennoprzecinkowe [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=16]

#include <stdio.h>

int czy_rowne(double i, double j)
{
    double eps = 0.000001;
    if (i + eps > j && i - eps < j)
    {
        return 1;
    }
    else
    { 
        return 0;
    }
}

int main(void)
{
    /*
    printf("0.3:         %.20lf\n", 0.3);
    printf("0.1+0.1+0.1: %.20lf\n", 0.1+0.1+0.1);
    if( czy_rowne(0.1+0.1+0.1,0.3) ) {
        puts("JEST FAJNIE :)");
    }
    */

    /*
    double i;
    for(i = 0.0; i!=1.0; i+=0.1){
        printf("%.20lf - %.20lf", i, 1.0);
        getc(stdin);
    }
    */

    /*
    double d;
    float f;
    printf("Podaj wartość dla f: ");
    scanf("%f", &f);
    printf("f wynosi %.20f\n", f);
    //printf("Podaj nową wartość dla f: ");
    //scanf("%lf", &f);
    //printf("f wynosi %f\n", f);
    printf("Podaj wartość dla d: ");
    scanf("%lf", &d);
    printf("d wynosi %.20lf\n", d);
    //printf("Podaj nową wartość dla d: ");
    //scanf("%f", &d);
    //printf("d wynosi %lf\n", d);
    //printf("f wynosi %f\n", f);
    //printf("d wynosi %lf\n", d);
    if(f == d) puts("zmienna f jest równa zmiennej d");
    if(d == 3.14) puts("zmienna d jest równa 3.14");
    if(f == 3.14) puts("zmienna f jest równa 3.14");
    if(d == 3.14f) puts("zmienna d jest równa 3.14f");
    if(f == 3.14f) puts("zmienna f jest równa 3.14f");
    */

    int j;
    long double k = 0.1;
    for (j = 1; j != 10000000; j++)
    {
        k += 0.1;
    }

    printf("j: %d\n", j / 10);
    printf("k: %.30llf\n", k);

    puts("Koniec programu");
    return 0;
}