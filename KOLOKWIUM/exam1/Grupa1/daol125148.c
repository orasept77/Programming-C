// Zadanie 1 +

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h> // Ta biblioteka do losowania co wyznaczony czas cyfr do parametrow funkcji kwadratowej
#include <math.h>
#include <stdbool.h> // Ta biblioteka jest do zadania 10, aby wykorzystać funkcje bool true/false

// Zadanie 2 +

/*short*/ int var1 = 10000; // usunąłem ponieważ w zadaniu 9, chcialem zastować normalny rozmiar.
float var2 = 0.94334;
char var3 = 'D';
char var4[4] = "Olko";
const int TAB_LEN = 20; // stała różni się tym że jest ona stała we wszystkich funkcjach, zaś zmienna może zmieniać się w każdej funkcji.

// Zadanie 7 +

int power(int a, int b)
{
    int m = 1;
    while (m < b)
    {
        a *= 2;
        m++;
    }
    printf("%d\n", a);
    return 0;
}

// Zadanie 8 +

int countk()
{
    char znaki[5] = "kkkk";
    char znaki1[6] = " k k ";
    char znaki2[9] = "k asd kk";
    int powtorzenia = 0;
    int powtorzenia1 = 0;
    int powtorzenia2 = 0;
    for (int l = 0; l < 4; l++)
    {
        if (znaki[l] == 'k')
        {
            powtorzenia += 1;
        }
    }
    for (int n = 0; n < 6; n++)
    {
        if (znaki1[n] == 'k')
        {
            powtorzenia1 += 1;
        }
    }
    for (int o = 0; o < 10; o++)
    {
        if (znaki2[o] == 'k')
        {
            powtorzenia2 += 1;
        }
    }
    printf("%s zawiera %d litery k\n", znaki, powtorzenia);
    printf("%s zawiera %d litery k\n", znaki1, powtorzenia1);
    printf("%s zawiera %d litery k\n", znaki2, powtorzenia2);
    return 0;
}

// Zadanie 10 +

struct funkcjakwadratowa
{
    // calkowite
    int a;
    int b;
    int c;
    int delta;
    // zmiennoprzecinkowe
    double x1;
    double x2;
    // prawda/falsz
    bool Mz;
};

// Zadanie 11 +

void miejscaZerowe(struct funkcjakwadratowa *tf) // wskaznik tf-> to wskaznik do skturktury true/false
{
    tf->delta = pow(tf->b, 2) - 4 * tf->a * tf->c;

    if (tf->delta < 0)
        tf->Mz = false;
    else
    {
        tf->Mz = true;

        if (tf->delta > 0)
        {
            tf->x1 = (-(tf->b) - sqrt(tf->delta)) / (2 * tf->a);
            tf->x2 = (-(tf->b) + sqrt(tf->delta)) / (2 * tf->a);
        }
        else
            tf->x1 = -(tf->b) / (2 * tf->a);
    }
}

int main(int argc, char const *argv[])
{
    // Zadanie 3 +
    int task3_var;
    printf("Podaj wartosc: \n");
    scanf("%d", &task3_var);
    if (30 < task3_var)
    {
        printf("Opcja 1\n");
    }
    else if (30 > task3_var)
    {
        printf("Opcja 2\n");
    }
    else if (task3_var = 30)
    {
        printf("Opcja 3\n");
    }

    // Zadanie 4 +

    int task4_var = 0;
    printf("Podaj wartosc zmiennej task4_var: \n");
    scanf("%d", &task4_var);
    switch (task4_var)
    {
    case 1:
        printf("%d\n", task4_var + 10);
        break;
    case 2:
        printf("%d\n", task4_var + 20);
        break;
    case 3:
        printf("%d\n", task4_var + 30);
        break;
    default:
        printf("%d\n", task4_var);
        break;
    }

    // Zadanie 5 +

    int i = 6;
    float tab[7] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7};
    for (i = 6; i > -1; i--)
    {
        printf("%f", tab[i]);
    }
    printf("\n");

    // Zadanie 6 +

    int task6_var;
    int potega = 1;
    printf("Podaj wartosc zmiennej task6_var: \n");
    scanf("%d", &task6_var);
    while (potega <= task6_var)
    {
        printf("%d\t", potega);
        if (potega)
        {
            potega *= 2;
        }
        else
            potega = 2;
    }
    printf("\n");

    // Zadanie 7 +
    power(2, 4);

    // Zadanie 8 +
    countk();

    // Zadanie 9 +

    int *wsk1;
    wsk1 = &var1;
    printf("%p\n", &wsk1);
    printf("%d\n", *wsk1);
    *wsk1 = 125148;
    printf("%d\n", var1);

    // Zadanie 11 + (zadanie 10 wyzej jest zadeklarowane nad funkcją main)

    srand(time(0)); // dzieki temu co kazda wlaczenie ponownie programu wartosci parametru beda losowe

    struct funkcjakwadratowa task11_var[100];
    for (int i = 0; i <= 100; ++i)
    {
        task11_var[i].a = (rand() % 10) + 1; // Random pozwa na wybieranie losowych cyfr roznych od 10
        task11_var[i].b = (rand() % 10);
        task11_var[i].c = (rand() % 10) + 2;
    }

    // Zadanie 12 +

    printf("Funkcja kwadratowa: \n");

    for (int i = 0; i != 100; ++i)
    {
        miejscaZerowe(&task11_var[i]);
        printf("A: %d | B: %d | C: %d | Miejsca Zerowe: %s x1: %.3f, x2: %.3f\n",
               task11_var[i].a, task11_var[i].b, task11_var[i].c, task11_var[i].Mz ? "sa" : "nie ma", task11_var[i].x1, task11_var[i].x2); // zastosowałem Instrukcje warunkowa ze znakiem ? :
    }

    return 0;
}
