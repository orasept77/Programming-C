#include <stdio.h>

int mean(int tab[10]);

int main()
{
    int tab[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    mean(tab);
    return 0;
}

int mean(int tab[10])
{
    float srednia = 0;
    for (int i = 0; i < 10; i++)
    {
        srednia += tab[i]; // srednia+tab[i]=srednia for robi tu cos takiego i dodaje tab0+2+3...aż do 9
    }
    srednia = srednia / 10;
    printf("%f", srednia);
}

/*
2 metoda

#include <stdio.h>

//program średniej arytmetycznej

float srednia();
int dane[10] = {5, 5, 9, 1, 10, 1, 4, 8, 5, 6};

int main(void)
{
    float sredniax = srednia();
    printf("%f", sredniax);

    return 0;
}

float srednia()
{
    int suma = 0;
    for (int i = 0; i < 10; i++)
        suma += dane[i];
    return (suma / 10.0);
}
*/