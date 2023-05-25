#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct patients
{
    char name[20];
    char surname[20];
    int age;
};


int main(int argc, char const *argv[])
{
    // deklarując zmienną tablicową nie wiemy jakie wartości przechowuje aktualnie tablica
    struct patients tab[50];


    struct patients p1 = {"Jan", "Kowalski", 25};
    struct patients p2 = {"Jan", "Kowalski", 35};
    struct patients p3 = {"Jan", "Kowalski", 45};
    struct patients p4 = {"Jan", "Kowalski", 55};
    struct patients p5 = {"Jan", "Kowalski", 65};
    
    tab[0] = p1;
    tab[1] = p2;
    tab[2] = p3;
    tab[3] = p4;
    tab[4] = p5;
    
    // Ustawiamy na sztywno wartość 5 ponieważ wiemy że w kolejnych polach są losowe dane.
    for (size_t i = 0; i < 5; i++)
    {
        printf("%s %s %i\n", tab[i].name, tab[i].surname, tab[i].age);
    }
    
    
    return 0;
}
