#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

const int TAB_LEN = 20; // Dodanie "const" powoduje, że zmienna przechowuje stałą wartość i nie może być zmieniona w czasie wykonywania programu.

struct funkcjakwadratowa
{
    int a;
    int b;
    int c;

    double x1;
    double x2;

    bool mamiejscazerowe;
};

int power(int a, int b)
{
    int sum = a;
    for(int i = 0; i < b - 1; ++i) sum *= a;

    return sum;
}

int countk(char tab[])
{
    int k = 0;

    for(int i = 0; tab[i]; ++i)
        if(tab[i] == 'k') ++k;

    return k;
}

void obliczMiejscaZerowe(struct funkcjakwadratowa *fk)
{
    int delta = pow(fk->b, 2) - 4 * fk->a * fk->c;

    if(delta < 0) fk->mamiejscazerowe = false;
    else
    {
        fk->mamiejscazerowe = true;

        if(delta > 0)
        {
            fk->x1 = (-(fk->b) - sqrt(delta)) / (2 * fk->a);
            fk->x2 = (-(fk->b) + sqrt(delta)) / (2 * fk->a);
        }
        else fk->x1 = -(fk->b) / (2 * fk->a);
    }
}

int main()
{
    // Zadanie 1

    // Zadanie 2
    int var1 = 10000;
    float var2 = 0.94334;
    char var3 = 'M';
    char var4[] = "Motas";
    // Ostatni podpunkt pod deklaracją bibliotek.

    // Zadanie 3
    int task3_var;

    printf("Podaj wartosc zmiennej task3_var: ");
    scanf("%d", &task3_var);

    if(task3_var > 30) printf("\nopcja 1");
    else if(task3_var == 30) printf("\nopcja 3");
    else printf("\nopcja 2");

    // Zadanie 4
    int task4_var;

    printf("\nPodaj wartosc zmiennej task4_var: ");
    scanf("%d", &task4_var);

    switch(task4_var)
    {
        case 1:
        {
            task4_var += 10;
            break;
        }
        case 2:
        {
            task4_var -= 20;
            break;
        }
        case 3:
        {
            task4_var += 30;
            break;
        }
    }
    printf("\ntask4_var: %d\n", task4_var);

    // Zadanie 5
    double tab[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7};

    printf("\ntab:");
    for(int i = (sizeof(tab) / sizeof(tab[0])) - 1; i >= 0; --i) printf(" %.1f", tab[i]);

    // Zadanie 6
    int task6_var, task6_pow = 0;

    printf("\nPodaj wartosc zmiennej task6_var: ");
    scanf("%d", &task6_var);

    printf("[");

    while(task6_pow <= task6_var)
    {
        printf("%s%d", task6_pow ? ", " : "", task6_pow);

        if(task6_pow) task6_pow *= 2;
        else task6_pow = 2;
    }
    printf("]\n");

    // Zadanie 7
    printf("task7_result: %d, dodatkowo (3, 3): %d\n\n", power(2, 4), power(3, 3));

    // Zadanie 8
    printf("|kkkk| zawiera %d litery k.\n", countk("kkkk"));
    printf("| k k | zawiera %d litery k.\n", countk(" k k "));
    printf("| k asd kk| zawiera %d litery k.\n\n", countk(" k asd kk"));

    // Zadanie 9
    int *wsk1 = &var1;
    printf("wsk1 -> %p -> %d\n", wsk1, *wsk1);

    *wsk1 = 125145;
    printf("var1: %d\n\n", var1);

    // Zadanie 10
    // Deklaracja struktury znajduje się pod deklaracją bibliotek.

    // Zadanie 11
    struct funkcjakwadratowa task11_var[100];

    srand(time(NULL));

    for(int i = 0; i != 100; ++i)
    {
        #define random(min, max) min + (rand() % (max + 1 - min))

        task11_var[i].a = random(0, 10);
        task11_var[i].b = random(0, 10);
        task11_var[i].c = random(0, 10);
    }

    // Zadanie 12
    printf("obliczMiejscaZerowe:");

    for(int i = 0; i != 100; ++i)
    {
        obliczMiejscaZerowe(&task11_var[i]);
        printf("\na: %d, b: %d, c: %d, mamiejscazerowe: %s -> x1: %.1f, x2: %.1f", task11_var[i].a, task11_var[i].b, task11_var[i].c, task11_var[i].mamiejscazerowe ? "tak" : "nie", task11_var[i].x1, task11_var[i].x2);
    }

    return 0;
}