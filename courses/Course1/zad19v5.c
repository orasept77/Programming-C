/*PRIME_T - Liczby Pierwsze
Sprawdź, które spośród danych liczb są liczbami pierwszymi

Input
n - liczba testów n<100000, w kolejnych liniach n liczb z przedziału [1..10000]

Output
Dla każdej liczby słowo TAK, jeśli liczba ta jest pierwsza, słowo: NIE, w przeciwnym wypadku.*/

#include <stdio.h>

//program, w ktorym najpierw podajemy ilość przypadkow do rozważenia a potem wypisuje nam czy jest to liczba pierwszy czy nie
//np. 3 przypadki 11 3 5 Wyświeli program TAK TAK TAK ponieważ są to liczby pierwsze.

int isPrime(int x);

int main()
{
    int n=0;
    scanf("%d", &n);
    int y[n];

    for( int i=0; i<n; i++)
    scanf("%d", &y[i]);

    for(int j=0;j<n;j++)
    {
        if(isPrime(y[j]))printf("TAK\n");
        else printf("NIE\n");
    }
    
    return 0;
}

inline int isPrime(int x)
{
    if(x<2)
    return 0;
    
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}

