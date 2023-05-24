#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

struct funkcjakwadratowa
{
    int a;
    int b;
    int c;
    int delta;

    float x1;
    float x2;

    bool roots;
};

// Zadanie 12

void calculate(struct funkcjakwadratowa *tf) // wskaznik *tf to wskaznik do skturktury true/false (*tf).delta etc, 
// ponieważ wskaznik w nawiasie ma wiekszy priorytet
{
    (*tf).delta = pow((*tf).b, 2) - 4 * (*tf).a * (*tf).c; //pow jest dzieki bibliotece math.h i inaczej to power czyli potega b^2

    if ((*tf).delta < 0)
        (*tf).roots = false;
    else
    {
        (*tf).roots = true;

        if ((*tf).delta > 0)
        {
            (*tf).x1 = (-((*tf).b) - sqrt((*tf).delta)) / (2 * (*tf).a); //sqrt to pierwiastek
            (*tf).x2 = (-((*tf).b) + sqrt((*tf).delta)) / (2 * (*tf).a);
        }
        else
            (*tf).x1 = -((*tf).b) / (2 * (*tf).a);
    }
}

int main(int argc, char const *argv[])
{

    // Zadanie 11

    struct funkcjakwadratowa task11_var[100];
    srand(time(0));
    for(int i=0; i<=100; i++)
    {
        task11_var[i].a = (rand() %10);
        task11_var[i].b = (rand() %10);
        task11_var[i].c = (rand() %10);
    }
    
    // Kontynuacja 12 zadania 

    printf("FUNKCJA KWADRATOWA\n");

     printf("Funkcja kwadratowa: \n");

    for (int i = 0; i <= 100; ++i)
    {
        calculate(&task11_var[i]);
        printf("A: %d | B: %d | C: %d | x1: %.2f, x2: %.2f\t", task11_var[i].a, task11_var[i].b, task11_var[i].c, task11_var[i].x1, task11_var[i].x2);
        calculate(&task11_var[i].roots);
        {
        if(true)
        {
            printf("Miejsca Zerowe: %s\n", "sa");
        } 
        else if(false)
        {
            printf("Miejsca Zerowe: %s\n", "nie ma");
        };
        }
    }

    return 0;
}
